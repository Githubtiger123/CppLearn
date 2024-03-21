//
// Created by Tiger on 2024/3/15.
//

#include <iostream>

class Base1 {

public:
    int a = 10;
};

class Base2 {

public:
    int b = 20;
    int a = 20;
};

class Base3 {

public:
    int c = 30;
};

//class Son :Base1,Base2,Base3//没有写明是什么继承方式,默认是private继承
//class Son :public Base1,public Base2,public Base3{//这样写也可以
class Son : public Base1, public Base2, public Base3 {

public:
    int d = 40;
};


int main() {

    Son son;
    std::cout << sizeof(son) << std::endl; //大小是所有属性值和
//    std::cout << son.a << std::endl;//多个父类有同名属性,必须明确指定作用域
    std::cout << son.Base1::a << std::endl;
    std::cout << son.Base2::a << std::endl;
    return 0;
}
