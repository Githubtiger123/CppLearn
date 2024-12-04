//
// Created by Tiger on 2024/4/26.
//
#include <set>
#include <iostream>

using namespace std;

class Person {

    string name;
    int age;

public:
    Person(const string &name, int age) : name(name), age(age) {}

public:
    bool operator<(const Person &rhs) const {
        if (name < rhs.name)
            return true;
        if (rhs.name < name)
            return false;
        return age < rhs.age;
    }

    bool operator>(const Person &rhs) const {
        return rhs < *this;
    }

    bool operator<=(const Person &rhs) const {
        return !(rhs < *this);
    }

    bool operator>=(const Person &rhs) const {
        return !(*this < rhs);
    }

    friend ostream &operator<<(ostream &os, const Person &person) {
        os << "name: " << person.name << " age: " << person.age;
        return os;
    }
};

class MyCompare {

public:
    bool operator()(int a, int b) const {
        return a > b;
    }

    int const a() { //const修饰返回值类型并不常见
        return 0;
    }
};


class PersonCompare {

public:
    bool operator()(const Person &p1, const Person &p2) const {
        return p1 > p2;
    }
};


void print_Set(set<int, MyCompare> &s) {//set<int, MyCompare>要改

    for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << "" << std::endl;
}


//自定义sort排序规则
//重载insert后的括号
int main() {

    set<int, MyCompare> s;
    s.insert(9);
    s.insert(45);
    s.insert(12);
    s.insert(37);
    s.insert(91);
    s.insert(24);

    print_Set(s);
    std::cout << "_________自定义数据类型的自定义排序_________" << std::endl;
    Person p("孙悟空", 1000);
    Person p1("猪八戒", 608);
    Person p2("唐僧", 10000);
    Person p3("沙僧", 152);
    Person p4("沙僧", 153);
    set<Person, PersonCompare> s1;
    s1.insert(p);
    s1.insert(p1);
    s1.insert(p2);
    s1.insert(p3);
    s1.insert(p4);

    //按utf-8编码大小输出
    for (set<Person, PersonCompare>::iterator it = s1.begin(); it != s1.end(); it++) {
        std::cout << *it << std::endl;
    }

    return 0;
}
