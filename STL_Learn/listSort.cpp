//
// Created by Tiger on 2024/4/20.
//
#include <list>
#include <iostream>

using namespace std;

class Person {

public:
    string name;
    int age;
    int score;

    Person(const string &name, int age, int score) : name(name), age(age), score(score) {}

    };


void print_list(const list<int> &l) {

    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {

        std::cout << *it << " ";
    }
    std::cout << "" << std::endl;
}

void print_list(const list<Person> &l) {

    for (list<Person>::const_iterator it = l.begin(); it != l.end(); it++) {

        std::cout << *it << " ";
        std::cout << "" << std::endl;
    }

}

bool func(int a, int b) {
    return b - a <= 0;
}

bool func1(const Person& a, const Person& b) {
    if (a.name != b.name) return a.name < b.name;
    if (a.age != b.age) return a.age < b.age;
    return a.score < b.score;
}


int main() {

    list<int> l;
    l.push_back(4);
    l.push_back(26);
    l.push_back(32);
    l.push_back(18);
    l.push_back(-9);
    print_list(l);
    l.reverse(); // 反转链表
    print_list(l);
    //因为不支持随即迭代器访问的容器不能使用stl算法库进行排序
    //所以在反转时调用了自己的reserve方法而不是通用的算法库,对于排序算法也是同理
    l.sort(); // 调用自己的sort方法默认升序
    print_list(l);
    //对其进行定制排序
    l.sort(func); // 要传一个仿函数
    print_list(l);

    std::cout << "——————对Person类进行自定义排序——————" << std::endl;

    list<Person> list1;
    list1.push_back(Person("Xiaoming", 18, 89));
    list1.push_back(Person("Lilei", 19, 86));
    list1.push_back(Person("Wangming", 18, 92));
    list1.push_back(Person("Zhangsan", 18, 93));

    list1.sort(func1);
    print_list(list1);


    return 0;
}
