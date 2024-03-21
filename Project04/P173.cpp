//
// Created by lenovo on 2024/1/12.
//
//P173 07 ģ��-ģ��ľ�����
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

//����ģ��Ƚ϶���
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
    //����Ĳ���ֱ�ӱȽ�
//    cout << (is_Compare(p1, p2) == true ? "��" : "��");
    cout << (is_Compare(p1, p2) == true ? "��" : "��");

    return 0;
}
