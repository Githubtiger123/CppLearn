//
// Created by lenovo on 2024/1/12.
//
//P173 07 模板-模板的局限性
#include "iostream"

using namespace std;

class Person {

public:
    Person(const string &name, int age, int score) : name(name), age(age), score(score) {}

public:
    string name;
    int age;
    int score;
};

//函数模板比较对象
template<typename T>
bool is_Compare(T p1, T p2) {
    return p2 == p1;
}

template<>
bool is_Compare(Person* p1, Person* p2) {

    return p1->name == p2->name && p1->age == p2->age && p1->score == p2->score;
}

int main() {

    Person *p1 = new Person("Tom", 10, 60);
    Person *p2 = new Person("Tom1", 20, 80);
    //错误的不能直接比较
//    cout << (is_Compare(p1, p2) == true ? "真" : "假");
    cout << (is_Compare(p1, p2) == true ? "真" : "假");

    return 0;
}
