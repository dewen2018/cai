#include <iostream>

using namespace std;

class base_class {
};

class first_derived_class : public base_class {
};

class second_derived_class : public base_class {
};

class third_derived_class : public base_class {
};
//如果从基类继承多个类，则称为分层继承。在分层继承中，子类中共有的所有功能都包括在基类中。
//例如：物理，化学，生物学均来自科学课。