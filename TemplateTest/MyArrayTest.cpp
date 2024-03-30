//
// Created by Tiger on 2024/3/26.
//


#include <ostream>
#include "MyArray.hpp"

//自定义数据类型
class Person {

private:
    std::string *name;
    int age;

public:

    /*
     * 如果没有默认构造函数，且是全局或静态数组，每个对象的成员将进行默认初始化（基本数据类型成员初始化为零，指针类型成员初始化为nullptr）。
如果是局部数组而且没有默认构造函数，对象的初始化行为是未定义的，其成员可能包含任意值。
     这一点不同于Java
     */
    //并且指定默认参数
    Person() : name(new std::string()), age(0) {}

    Person(std::string *name, int age) : name(name), age(age) {}

    virtual ~Person() {
        if (name != nullptr) {
            delete name;
            name = nullptr;
        }
    }

    std::string *getName() const {
        return name;
    }

    void setName(std::string *name) {
        Person::name = name;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Person::age = age;
    }

    bool operator==(const Person &rhs) const {
        return name == rhs.name &&
               age == rhs.age;
    }

    bool operator!=(const Person &rhs) const {
        return !(rhs == *this);
    }

    Person &operator=(const Person &person) {

        this->age = person.age;
        if (this->name != nullptr) {

            delete this->name;
            this->name = nullptr;
        }
        this->name = new std::string(*(person.name));
        return *this;
    }

    friend std::ostream &operator<<(std::ostream &os, const Person &person) {
        if (person.name != nullptr) {
            os << "name: " << *(person.name) << " age: " << person.age << std::endl;
        } else {
            os << "name: [empty] age: " << person.age << std::endl;
        }
        return os;
    }

};

int main() {


    MyArray<int> *array = new MyArray<int>(10);
    for (int i = 0; i < 10; ++i) {
        array->insert(i);
    }

    MyArray<int> array1(10);
    for (int i = 0; i < 10; ++i) {
        array1.insert(i);
    }

    for (int i = 0; i < 10; ++i) {
        std::cout << array1[i] << std::endl;
    }
    std::cout << array1 << std::endl;

    MyArray array3 = array1;
    std::cout << array3 << std::endl;
    array3.insert(10);
    array3.poll();
    std::cout << array3 << std::endl;
    array3.insert(88);
    std::cout << array3 << std::endl;
//    std::cout << array3[10] << std::endl;//会抛出异常
    array3[0] = 50;
    array3[2] = 55;
    std::cout << array3 << std::endl;
    std::cout << "size:" << array3.getSize() << std::endl;
    std::cout << "length:" << array3.getCapacity() << std::endl;
    std::cout << "_____________以对自定义数据类型进行测试_______________" << std::endl;

    Person person(new std::string("小王"), 20);
    Person person1(new std::string("小李"), 18);
    Person person2(new std::string("张三"), 21);
    Person person3(new std::string("李四"), 30);
    Person person4(new std::string("王五"), 26);

    MyArray<Person> person_arr(5);

    person_arr[0] = person;
    person_arr[1] = person1;
    person_arr[2] = person2;
    person_arr[3] = person3;
    person_arr[4] = person4;
    std::cout << person_arr << std::endl;
    return 0;
}
