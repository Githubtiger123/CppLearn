//
// Created by Tiger on 2024/3/24.
//
//类模板继承的使用

#include <iostream>

template<typename T>
class Base {

public:
    T m;

    void info() {
        std::cout << typeid(T).name() << std::endl;
    }
};

//写一个类继承Base
//class Son1:public Base{ //不指定父类模板类型无法完成编译,不知道分配多大空间
//
//};

class Son1 : public Base<int> {//手动指定类型

};

//将子类也指定为模板类
template<typename T1, class T2>
class Son2 :public Base<T2>{

public:
    T1 n;
};


int main() {

    Son2<int ,int> son2;
    son2.info();
    return 0;
}

