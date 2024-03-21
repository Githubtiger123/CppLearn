#include <iostream>

class Person {

public:
    Person *addAge(Person *person) {
        this->age += person->age;
        return this;
    }

    Person &addAge2(Person &person) {

        this->age += person.age;
        return *this;
    }


    Person(int age) : age(age) {

    }

    int age;
    mutable int number;

    //this指针的本质时指针是不可以修改指针的指向的，但是可以修改指针指向的值
    //Person * const this
    //想要变成指向常量的常指针可以在函数括号后加const
    //就变成了const Person * const this
    void func3() const {
//        this->age = 20;是不允许修改的
        this->number = 50;
        //但是属性用mutable修饰后不受限制
    }

    void func1() {
        std::cout << "func1函数调用" << std::endl;
    }

    void func2() {
        std::cout << "func2函数调用" << std::endl;
        std::cout << this->age << std::endl;
    }


};

class circle {

    //全局函数做友元
    friend void func(circle &c);

private:
    double r;
public:
    int color;

    circle(double r, int color) : r(r), color(color) {}

};

//全局函数做友元
void func(circle &c) {
    std::cout << "颜色:" << std::endl;
    std::cout << c.color << std::endl;
    std::cout << "半径:" << std::endl;
    std::cout << c.r << std::endl;//创建有缘后私有属性可以被访问
}

int main() {
    Person *p1 = new Person(10);
    Person *p2 = new Person(20);
    Person *p3 = new Person(20);
    p1->addAge(p2)->addAge(p2);
    p3->addAge2(*p2).addAge2(*p2);
    std::cout << p1->age << std::endl;
    std::cout << p3->age << std::endl;
    std::cout << "_____________" << std::endl;
    Person *p4 = new Person(20);
    Person *p5;
    p4->func1();
    p4->func2();
    p5->func1();//c++中空指针调用成员函数不会报错
//    p5->func2();//但是这个会报错，因为空指针调用成员函数，无法访问成员变量
    //每个成员函数都有this指针，this指针指向对象，this指针是隐含的，不是显式的
    //用this调用null则报错


    const Person p(10);//在对象前加上const变为长对象
//    p.age = 50;//常对象不允许修改之

    p.func3();//常对象可以调用常函数
//    p.func4();//长对象只能调用常函数，不能调用非常函数，怕在非常函数中修改了常对象

    std::cout << "++++++++++++++++" << std::endl;
    circle c(10, 1);
    func(c);

    return 0;
}
