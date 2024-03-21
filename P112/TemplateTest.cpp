//
// Created by Tiger on 2024/3/20.
//

#include <iostream>

/**
 * 调用规则如下：

1. 如果函数模板和普通函数都可以实现，优先调用普通函数
2. 可以通过空模板参数列表来强制调用函数模板
3. 函数模板也可以发生重载
4. 如果函数模板可以产生更好的匹配,优先调用函数模板
 */

class Base {

public:

    template<typename T>
    void overload() {
        std::cout << "模板函数（）" << std::endl;
    }

    template<typename T>
    void overload(T a) {
        std::cout << "模板函数（T a）" << std::endl;
    }

    template<typename T>
    void overload(T a, T b) {
        std::cout << "模板函数（T a, T b）" << std::endl;
    }

    template<typename T>
    void overload(T a, T b, T c) {
        std::cout << "模板函数（T a, T b, T c）" << std::endl;
    }

    void func(int a, int b) {
        std::cout << "普通函数调用void func(int a,int b)" << std::endl;
    }

    template<typename T>
    void func(T a, T b) {
        std::cout << "模板函数调用void func(T a,T b)" << std::endl;
    }
};

void test();

//用模板写一个交换函数
template<typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
    std::cout << "函数模板调用" << std::endl;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "普通函数调用" << std::endl;
}

void test1() {

    int a = 1;
    int b = 2;
    swap(a, b);//普通函数和函数模板一起调用时优先调用普通函数
    swap<>(a, b);//可以使用空模板列表来强制调用模板函数

}

/**
 * 注意:
 * 1.自动类型推到必须推导出一致的数据类型
 * 2.模板必须要确定出T的类型才可以使用
 * @return
 */

template<typename T>
void swap1() {
    std::cout << "不能确定T的类型" << std::endl;
}

void test() {

    int a = 10;
    float b = 20;
//    swap(a, b);//1.自动类型推到必须推导出一致的数据类型
//    swap1();//2.不能确定T的类型
    swap1<int>();//这样可以
}

class Person {

public:
    int age = 0;
    int score = 0;
    std::string name = "";

    Person(int age, int score, const std::string &name) : age(age), score(score), name(name) {}
};

//实现一个比较模板函数
template<typename T>
bool compare(T &o1, T &o2) {
    return o1 > o2;
}

//模板具体化（为Person类型定制的具体模板）
template<>
bool compare(Person &o1, Person &o2) {
    if (o1.age != o2.age) {
        return o1.age - o2.age;
    }
    if (o1.score != o2.score) {
        return o1.score - o2.score;
    }
    if (o1.name != o2.name) {
        return o1.name > o2.name;
    }
    return false;
}

//模板的具体化，为一个特殊类来提供的特殊的模板函数，当T的类型为这个类时，自动调用这个函数
void test2() {


    int a = 10;
    int b = 20;
    bool res = compare(a, b);
    std::cout << res << std::endl;
    std::cout << compare(b, a) << std::endl;

    //创建自定义数据类型
    Person person1(18, 90, "Tom");
    Person person2(20, 82, "Jerry");
    Person person3(20, 82, "Jerry1");
    //不能进行比较，编译器不知道如何比较,可以在person中重回写==运算符，也可以进行模板具体化
//    std::cout << compare(person1, person2) << std::endl;
    std::cout << compare(person1, person2) << std::endl;//具体化模板之后即可比较
    std::cout << compare(person2, person3) << std::endl;//具体化模板之后即可比较
}

int main() {


    int a = 10;
    int b = 20;
    //模板的使用1.自动类型推导
    swap(a, b);
    //模板的使用2.显式指定类型
    swap<int>(a, b);
    std::cout << "a:" << a << ",b:" << b << std::endl;
    std::cout << "__________________________" << std::endl;\
    test();
    std::cout << "__________________________" << std::endl;\
    test1();
    std::cout << "__________________________" << std::endl;\
    int x = 10, y = 20, z = 30;
    Base base;
    base.overload<int>();
    base.overload(x);
    base.overload(x, y);
    base.overload(x, y, z);

    char p = '1';
    char q = '2';
    base.func(p, q);//如果模板函数能更好的匹配则调用模板函数
    std::cout << "__________________________" << std::endl;\
    test2();

    return 0;
}


