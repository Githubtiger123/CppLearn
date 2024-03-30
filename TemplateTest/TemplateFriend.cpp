//
// Created by Tiger on 2024/3/25.
//

#include <iostream>
//一般建议使用第一种方式类内实现简单方便

//而在生命函数模板时又要用到类所以又要在这之前生命类
template<class T1, class T2>
class Person;

//需要在类前提前声明
template<class T1, class T2>
void func1(Person<T1, T2> person);

template<class T1, class T2>
class Person {

    //1.全局函数类内实现,通过友元函数
    //他不是成员函数,是全局函数,只是在类内实现按
    friend void func(Person<T1, T2> person) {
        std::cout << "全局函数类内实现,类外调用" << std::endl;
//        std::cout << "name:" << person.name << std::endl;
//        std::cout << "age:" << person.age << std::endl;
    }

    //2.友元函数类外实现
    //friend void func1(Person<T1, T2> person);这是一个普通函数的生命，而这个友元函数是一个函数模板所以要携程一下格式
    //，但是需要在类前声明，再来类中声明友元。
    friend void func1<>(Person<T1, T2> person);

//    template<class T1,class T2>
//    friend void func2<>(Person<T1, T2> person);

private:
    T1 name;
    T2 age;

public:
    Person(T1 name, T2 age) : name(name), age(age) {}

    void info(Person<T1, T2> p) {
        std::cout << "name:" << p.name << std::endl;
        std::cout << "age:" << p.age << std::endl;
    }
};

//template<typename T1, typename T2>
//void func2(Person<T1, T2> person) {
//
//}

template<typename T1, typename T2>
void func1(Person<T1, T2> person) {
    std::cout << "全局函数类外实现,类外调用" << std::endl;
}

int main() {


    Person person("Tom", 18);
    Person person1("Tom", 18);
    person.info(person1);
    func(person);//全局函数类内实现,类外调用
    func1(person);//全局函数类外实现,类外调用

    return 0;
}

