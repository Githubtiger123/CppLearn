#include <iostream>
#include "class_test/Person.h"
#include "class_test/Circle.h"

class Dog {

public:
    static int count;
};

int Dog::count = 20;

int main() {

    Point p = Point(10,20);
    Point p2 = p;
    Point p3(p);
    Point p4 = Point(p);
    std::cout << p4.getX() << std::endl;
//    Person p1;
//    Person p2(false);
//
//    //��ʽ����
//
//    Person p3 = {};
////    Person p4 = {false};//��Ϊ��explicit�ؼ���,�����޷���ʽ����
//    Person p5 = false;
//    Person xiaoming = Person();
//    Person xiaoming1 = Person("xiaoming1");
//
//    Person xiaoming2;
////    Person xiaoming2();����������д,����Ϊ�ڶ��庯��
//    Person xiaoming3("xiaoming3");
//
//    //��ʽ����
//    Person p1 = {};
//    Person p23 = {"name"};
//    Person p33 = 23;
//    Person p3 = {"name", 1, 23};
//
//    Person *p4 = new Person("123", 12, 132);//��Ϊʵ����

//    Dog* dog = new Dog();
//    std::cout << dog->count << std::endl;
//    std::cout << Dog::count << std::endl;
//    Point* p1 = new Point();
//    p1->staticMothed();
//    std::cout << "Hello, World!" << std::endl;
//
//    Person* p1 = new Person("С��",18,97);
//    std::cout << p1->getName() << std::endl;
//    std::cout << p1->getAge() << std::endl;
//    std::cout << p1->getScore() << std::endl;
//
//    Person p2;
//    p2.setName("����");
//    std::cout << p2.getName() << std::endl;
//    std::cout << p2.getScore() << std::endl;//û��Ĭ��ֵ
//
//    Person p3 = Person("���",56,56);
//    std::cout << p3.getName() << std::endl;
//    std::cout << p3.getAge() << std::endl;
//    std::cout << p3.getScore() << std::endl;
//
//    std::cout << "__________" << std::endl;
//    Point* point = new Point(10,20);
//    Circle* c1 = new Circle(*point,10);
    return 0;
}
