//
// Created by Tiger on 2024/3/11.
//

#include <iostream>

class Sex {

public:
    std::string sex;

    explicit Sex(const std::string &sex) : sex(sex) {}

    virtual ~Sex() {

        if (&sex != nullptr) {

            delete &sex;
        }
    }
};

class Person {

//    friend bool operator==(const Person &lhs, const Person &rhs);//全局函数声明成友元
//    friend bool operator==(const Person *person1, const Person *person2) ;

private:
    int high;
public:
    int age;
    Sex *sex;

    Person(int high, int age, Sex *sex) : high(high), age(age), sex(sex) {}

//    bool operator==(Person &Person) const {
//        return Person.age == age && Person.high == high && sex->sex == Person.sex->sex;
//    }
//
////指针类型
//    bool operator==(const Person *Person) const {
//
//        return Person->age == this->age && Person->high == this->high && Person->sex->sex == this->sex->sex;
//    }

//系统自动生成
//    bool operator==(const Person &rhs) const {
//        return high == rhs.high &&
//               age == rhs.age &&
//               sex == rhs.sex;
//    }
//
//    bool operator!=(const Person &rhs) const {
//        return !(rhs == *this);
//    }

    virtual ~Person() {

        if (sex != nullptr) {
            delete sex;
            sex = nullptr;
        }
    }
};

//全局比较函数
//bool operator==(const Person &lhs, const Person &rhs) {
//    return lhs.sex == rhs.sex && lhs.age == rhs.age && lhs.high == rhs.high;
//}

//全局指针比较函数（不行）
//bool operator==(const Person *person1, const Person *person2) {
//    return person1->sex == person2->sex && person1->age == person2->age && person1->high == person2->high;
//}


int main() {


    Person p1(180, 18, new Sex("女"));
    Person p2(160, 12, new Sex("男"));
    Person p3(160, 12, new Sex("女"));
//    if (p2 == p3) {
//        std::cout << "ture" << std::endl;
//    } else {
//        std::cout << "false" << std::endl;
//    }
//    std::cout << (p1 == p2 ? "true" : "false") << std::endl;
    std::cout << "_________________________" << std::endl;
    Person *p4 = new Person(175, 19, new Sex("男"));
    Person *p5 = new Person(175, 19, new Sex("男"));
    Person *p6 = new Person(175, 19, new Sex("女"));
//    std::cout << (p5 == p4 ? "true" : "false") << std::endl;
    return 0;
}
