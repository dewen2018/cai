#include <iostream>
#include <cmath>

using namespace std;

/*
C++头文件声明了一组函数来执行数学运算，例如：sqrt()计算平方根，log()查找数字的自然对数，等等。

方法	描述
abs()	返回参数的绝对值
acos()	返回反余弦数字
acosh()	返回数字的双曲余弦值
asin()	返回反正弦值
asinh()	返回数字的双曲正弦值
atan()	返回反正切数字
atan2()	返回坐标的反正切
atanh()	返回数字的弧双曲正切
cbrt()	计算数字的立方根
ceil()	返回数字的上限值
copysign(x,y)	它以y的符号返回x的大小。
cos()	返回参数的余弦
cosh()	返回某个角度的双曲余弦值
exp()	它计算升为幂x的指数e。
exp2()	它计算x的以2为底的指数。
expm1()	它计算出幂乘以x减一的指数。
fabs()	返回参数的绝对值
fdim(x,y)	返回x和y之间的正差。
floor()	返回十进制数字的下限值
fma(x,y,z)	它计算表达式x * y + z。
fmax()	返回传递的两个参数中最大的
fmin()	返回两个给定参数中的最小值
fmod()	计算除法浮点数的余数
frexp()	返回一个浮点数的尾数和指数。
hypot()	返回参数平方和的平方根
ilogb()	返回| x |的对数的整数部分
ldexp()	将x和2的乘积返回到幂e
llrint()	使用当前舍入模式舍入参数
llround()	将参数四舍五入到最接近的long long int值
log()	返回数字的自然对数
log10()	返回数字的以10为底的对数
log1p()	返回x + 1的自然对数。
log2(x)	它计算x的以2为底的对数。
logb(x)	返回| x |的对数
lrint()	使用当前舍入模式舍入参数
lround()	返回最接近参数的long int值
modf()	将数字分解为整数和小数部分
nan()	返回NaN值
nearbyint()	将参数舍入为使用当前舍入模式
nextafter()	它表示x在y方向上的下一个可表示值。
nexttoward()	它表示x在y方向上的下一个可表示值。
pow()	计算幂
restder(x,y)	返回x / y的余数
remquo(x,y)	计算机余数并存储x / y的商
rint()	使用当前舍入模式舍入参数
round()	返回最接近参数的整数值
scalbln(x,n)	计算x和FLT_RADX乘以n的乘积。
scalbn(x,n)	计算x和FLT_RADX乘以n的乘积。
sin()	返回参数的正弦
sinh()	返回某个角度的双曲正弦
sqrt()	计算数字的平方根
tan()	返回参数的切线
tanh()	返回角度的双曲正切
trunc()	截断数字的符号部分
 */

int main() {
    cout << "abs(-10)=" << abs(-10) << endl;
    cout << "acos(0.5)=" << acos(0.5) << endl;
    cout << "asinh(0.5)=" << asinh(0.5) << endl;
    cout << "asin(0.5)=" << asin(0.5) << endl;
    return 0;
}