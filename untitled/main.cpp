#include <iostream>
#include "Person.h"

//函数的占位参数
void func(int a, int) {

}

//带参数的函数占位符
void func1(int a, int = 10) {

}

void dowork(Person *p) {

}

void dowork1(Person p) {

}

Person dowork2(Person &p) {

    return p;
}

class Test {
public:

    static int a;
    int c;

private:
    static int b;

//    static int a = 10;

public:
    static void func() {
        std::cout << "func静态函数调用" << std::endl;
        std::cout << "func静态函数调用静态变量" << std::endl;
        std::cout << a << std::endl;
//        std::cout << c << std::endl;//静态函数不能调用非静态方法
    }
};

int Test::a = 10;//静态变量必须类外初始化
int Test::b = 20;//静态变量必须类外初始化

int main() {
//    std::cout << "Hello, World!" << std::endl;
//    Person *p = new Person(18, 99);
//    std::cout << p->getAge() << std::endl;

//    Person *p1 = new Person();
//    p1->setAge(10);
//    p1->setScore(101);
//    Person *p2 = new Person(*p1);
//    std::cout << p2->getAge() << std::endl;
//    std::cout << p2->getScore() << std::endl;
//
//    A *a = new A(10, 15);
//    Person *p3 = new Person(12, 91);
//    p3->a = *a;
//    delete a;
//    delete a;
//    std::cout << p3->a.getX() << std::endl;
//    std::cout << p3->a.getY() << std::endl;


//    Person *person = new Person(10, 20);
//    dowork(person);
//    Person p1(10, 20);
//    dowork1(p1);
//    dowork2(p1);

////    Person *p = new Person(10, 20);
//    Person *p2 = new Person(20, 30);
//    p2->a = new A(5, 6);
////    Person p3(30, 40);
////    p3.a = new A(5, 6);
////    Person p5(p3);//被释放了两次
////    Person *p4 = new Person(p3);//同样的先是在p4对象中将a释放，在在p3中释放
////    delete p4;
//    Person *p6 = new Person(*p2);
//    std::cout << p6->getAge() << " " << p6->getScore() << " " << p6->a->getX() << " " << std::endl;


//    Person *p = new Person();
//    std::cout << p->getAge() << std::endl;

    Test *t = new Test();
    std::cout << t->a << std::endl; //调用静态变量必须初始化
    std::cout << Test::a << std::endl;//用类名也可以直接访问
//    std::cout << Test::b << std::endl;私有权限是不能访问的
    t->func();
    return 0;
}
