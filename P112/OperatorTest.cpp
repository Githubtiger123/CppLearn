//
// Created by Tiger on 2024/3/9.
//

#include <iostream>

class A {
    //为了方便访问添加友元
//    friend std::ostream &operator<<(std::ostream &cout, const A &a);

private:
    int num = 1;
    int num1 = 2;

public:
    int a;
    int b;

    A(int a, int b) : a(a), b(b) {}

//用对象在成员内部实现重载加号运算符
//    A operator+(const A &other) {
//
//        return A(this->a + other.a, this->b + other.b);
//    }



//    //局部左移运算符重载
//    friend std::ostream &operator<<(std::ostream &out, const A &a) {
//        out << "A:{num:" << a.num << "}" << std::endl;
//        out << "A:{num1:" << a.num1 << "}" << std::endl;
//        return out;
//    }


//ait+Insert自动生成
    friend std::ostream &operator<<(std::ostream &os, const A &a) {
        os << "num: " << a.num << " num1: " << a.num1 << " a: " << a.a << " b: " << a.b;
        return os;
    }

};

//左移运算符的重载
//建议写在全局中，因为ostream是全局唯一的所以用引用，因为要链式调用所以最后返回std::ostream
//std::ostream &operator<<(std::ostream &out, const A &a) {
//
//    out << "A:{num:" << a.num << "}" << std::endl;
//    out << "A:{num1:" << a.mun1 << "}" << std::endl;
//    return out;
//}



//用对象在全局实现重载加号运算符
//A operator+(const A &a, const A &b) {
//    return A(a.a + b.a, a.b + b.b);
//}

//用对象在全局实现重载
//并且可以实现不同类型的变更亮相加
A operator+(const A &a, int num) {

    return A(a.a + num, a.b + num);
}


int main() {


    A a = A(10, 20);

    std::cout << a << std::endl;

    return 0;
}
