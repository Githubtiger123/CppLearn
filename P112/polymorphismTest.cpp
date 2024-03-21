//
// Created by Tiger on 2024/3/18.
//

#include <iostream>

class Animal {

public:
    virtual void speak() { //加上virtual关键字之后，函数存储的是其指针，指向了虚函数表
        std::cout << "动物在说话" << std::endl;
    }
};

class Cat : public Animal {

    //重写：函数返回值类型  函数名 参数列表 完全一致称为重写
public:
    void speak() {//在子类重写虚函数时自动将指针覆盖成自己的虚函数表，实现了调用自己
        std::cout << "猫喵喵叫" << std::endl;
    }
};

void DoSpeak(Animal &animal) {
    animal.speak();
}

int main() {


    Animal animal;
    Cat cat;
    cat.speak();//继承后没重写调用父类的方法
    DoSpeak(cat);//Animal &animal = cat;
    //要实现晚绑定,则必须将父类函数声明为虚函数,或者使用指针或引用调用函数

    std::cout << sizeof(animal) << std::endl;//进存储了一个8字节指针
    std::cout << sizeof(cat) << std::endl;//子类也是存储了一个8字节指针

    return 0;
}

