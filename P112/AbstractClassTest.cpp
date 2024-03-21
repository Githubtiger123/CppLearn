//
// Created by Tiger on 2024/3/18.
//


#include <iostream>

class Base {//包含一个纯虚函数的类为抽象类

public:
    void func() {
        std::cout << "普通函数调用" << std::endl;
    }

    virtual void v_func() = 0;//纯虚函数，纯虚函数用 "= 0" 表示，在声明时告诉编译器，该函数在基类中没有实现，需要在派生类中实现。
};

class Son1 : public Base {

    //派生类必须实现基类中的所有纯虚函数，否则派生类也将成为抽象类。
    void func() {
        std::cout << "普通函数" << std::endl;
    }
};

//关于父类私有方法能否被继承的问题
/**
 *
在C++中，子类是无法直接访问父类的私有成员（包括私有方法）的，因此也无法重写父类中的私有方法。
 私有成员和方法只能在定义它们的类内部访问，外部无法直接访问。
如果子类中定义了一个与父类中私有方法同名的方法，它只是在子类中新定义了一个方法，
 并不会影响父类中的私有方法。这种情况下，子类中的方法与父类中的方法是完全独立的，不能称之为方法的重写（override）。
如果你想要在子类中修改父类的行为，你可以考虑使用继承和多态的特性，
 通过重写父类的公有虚函数来实现。这样，子类中的方法将会覆盖父类中的方法，
 实现了多态性，可以在运行时根据对象的实际类型来调用相应的方法。
 */
class Son : public Base {

public:
    void v_func() override {

        std::cout << "实现抽象方法" << std::endl;
    }
};


int main() {

//    Base base;
//    Base *base = new Base();//抽象类不能实例化

//    Son1 son1 = new Son1();
//    Son1 son1;//Variable type 'Son1' is an abstract class变量类型'Son1'是一个抽象类

    Son son;
    Son *son1 = new Son();
    son1->v_func();
    son.func();

    Base *base = new Son();//通过多态的方式，调用抽象类中的实现的函数
    base->v_func();

    delete base;

    return 0;
}
/**
 *问：如果子类重写了父类的公共方法而重写过后的权限变为私有，这能称之为重写吗
 * 答：不能称之为重写，因为重写要求子类重写的方法的访问权限不能小于父类被重写方法的访问权限
 *
* 2）重写函数必须有相同的类型，名称和参数列表

3）重写函数的访问修饰符可以不同，在父类是private时，在子类可以是public或者protected
*/