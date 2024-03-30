#include <iostream>
#include "Person1.h"
#include "Person1.cpp"//包含这个可以解决
//也可以创建hpp的文件一起写在里面

//模板类
template<typename ClassName, typename ClassAge = int>//类模板中可以存在默认参数
class Person {
public:
    ClassName name;
    ClassAge age;

    Person(ClassName name, ClassAge age) : name(name), age(age) {}
};

//（经过测试C++11之后模板函数是支持默认模板参数的
template<typename T = int>
void func(T num) {
    std::cout << sizeof(num) << std::endl;
    std::cout << "普通函数调用函数模板测试默认参数" << std::endl;
}

class A {

public:
    void info() {
        std::cout << "info" << std::endl;
    }
};

template<typename T>
class B {

public:
    T election;

    void func() {
        election.info(); //模板类中的函数在调用时生成
        //由于编译阶段无法知道T的类型，只能在调用时才能确定T的类型
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::string s = "张三";
    int age = 18;
    // 在堆上创建对象，需要指定Person对应的类型
    Person<std::string, int> *person = new Person(s, age);
    Person<std::string> *person1 = new Person(s, age);//因为制定了默认参数，所以在使用时可以不显示写明
    //类模板原本是没有自动类型推导的，在c++17中引入站上可以自动推导，堆上则不行
    Person person2(s, age);// 在栈上创建对象，可以使用类模板参数的自动推导

    func(age);

    B<A> b;
    b.func();

    std::cout << "测试类模板分文件编写" << std::endl;
    Person1<int, int> person3(10, 20);
    person3.func();//连接时会产生找不到函数错误,建议直接包含cpp源文件或者一起卸载hpp文件中
    return 0;
}
