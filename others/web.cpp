#include <iostream>
#include <string>
#include <curl/curl.h>
#include <cstdlib>

// 回调函数处理HTTP响应数据
static size_t WriteCallback(void *contents, size_t size, size_t nmemb, std::string *data) {
    size_t total_size = size * nmemb;
    data->append((char *) contents, total_size);
    return total_size;
}
//依赖安装
//# Ubuntu/Debian
//sudo apt-get install libcurl4-openssl-dev
//# CentOS/RHEL
//sudo yum install libcurl-devel

//编译命令
//g++ -o web web.cpp -lcurl
// g++ -o dashscope_request web.cpp -lcurl

//运行程序
//export DASHSCOPE_API_KEY="your_api_key_here"
//./dashscope_request
int main() {
    CURL *curl;
    CURLcode res;
    std::string response_string;

    // 从环境变量获取API密钥
    const char* api_key_env = std::getenv("DASHSCOPE_API_KEY");
    if (!api_key_env) {
        std::cerr << "Error: DASHSCOPE_API_KEY environment variable not set." << std::endl;
        return 1;
    }
    const std::string api_key = std::string(api_key_env);

    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();

    if (curl) {
        // 设置目标URL
        curl_easy_setopt(curl, CURLOPT_URL, "https://dashscope.aliyuncs.com/compatible-mode/v1/chat/completions");

        // 设置POST请求
        curl_easy_setopt(curl, CURLOPT_POST, 1L);

        // 构建JSON请求体
        const std::string json_data = R"(
            {
                "model": "qwen-plus",
                "messages": [
                    {"role": "system", "content": "You are a helpful assistant."},
                    {"role": "user", "content": "你是谁？"}
                ]
            }
        )";

        // 设置POST数据
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, json_data.c_str());

        // 设置HTTP头
        struct curl_slist *headers = nullptr;
        headers = curl_slist_append(headers, ("Authorization: Bearer " + api_key).c_str());
        headers = curl_slist_append(headers, "Content-Type: application/json");
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

        // 设置响应回调
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response_string);

        // 执行请求
        res = curl_easy_perform(curl);

        // 清理头部列表
        curl_slist_free_all(headers);

        // 检查执行结果
        if (res != CURLE_OK) {
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
        } else {
            std::cout << "Response:\n" << response_string << std::endl;
        }

        // 清理curl资源
        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();
    return 0;
}