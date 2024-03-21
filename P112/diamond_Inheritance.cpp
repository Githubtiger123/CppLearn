//
// Created by Tiger on 2024/3/16.
//

#include <iostream>

class Animal {

public:
    int age = 5;
};

class Dog : virtual public Animal {


};

class Cat : virtual public Animal {


};

class CatDog : public Dog, public Cat {


};

int main() {

    CatDog catdog;
    std::cout << sizeof(catdog) << std::endl;//sizeof(catdog) = 8证明有两份数据
//    std::cout << catdog.age << std::endl;直接调用不可，必须指明作用域因为有两份，不知道是那里的数据
    std::cout << catdog.Cat::age << std::endl;
    std::cout << catdog.Dog::age << std::endl;

    //为了避免造成冗余,我们在继承时可以添加一个关键字virtual，则此属性变为了vptr，指向类的虚基类指针表，里面存了偏移量
    //通过这个偏移量可以找到他所在的值
    //此时不用加作用于了，只有一份数据
    std::cout << catdog.age << std::endl;
    catdog.age = 20;
    std::cout << catdog.age << std::endl;
    Dog dog;
    std::cout << dog.age << std::endl;
    return 0;
}

