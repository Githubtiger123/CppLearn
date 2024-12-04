//
// Created by Tiger on 2024/4/15.
// vector中swap互换容器的使用

#include <vector>
#include <iostream>

using namespace std;

void print_vector(vector<int> v) {

    for (vector<int>::iterator start = v.begin(); start < v.end(); start++) {

        std::cout << *start << " ";
    }
    std::cout << "" << std::endl;

}

int main() {


    //swap方法可以互换容器的内容
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; ++i) {
        v1.push_back(i);
    }
    for (int i = 20; i < 30; ++i) {
        v2.push_back(i);
    }
    std::cout << "v1:";
    print_vector(v1);
    std::cout << "v2:";
    print_vector(v2);
    v1.swap(v2);
    std::cout << "交换后:" << std::endl;
    std::cout << "v1:";
    print_vector(v1);
    std::cout << "v2:";
    print_vector(v2);

    //主要应用场景:收缩内存
    //因为容器容量达到很大很大时同resize重新指定大小capacity不变而size变,这就造成了空间浪费
    //可以通过swap收缩内存

    vector<int> v;
    for (int i = 0; i < 100000; ++i) {
        v.push_back(i);
    }
    v.resize(3);
    std::cout << v.capacity() << std::endl; //空间很大但是用不上,用swap来收缩内存
    std::cout << v.size() << std::endl;
//    创建匿名对象vector<int>(v)是调用拷贝构造函数得到的,和v不同的是他是实实在在的capacity和size一样
    vector<int>(v).swap(v);//让他和v交换,匿名对象在执行完本行之后自动释放
    std::cout << v.capacity() << std::endl; //空间很大但是用不上,用swap来收缩内存
    std::cout << v.size() << std::endl;
    return 0;
}

