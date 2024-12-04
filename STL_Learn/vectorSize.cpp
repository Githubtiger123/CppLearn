//
// Created by Tiger on 2024/4/15.
//

//测试vector大小和容量

#include <iostream>
#include <vector>

using namespace std;


void print_vector(vector<int> v) {

    for (vector<int>::iterator start = v.begin(); start < v.end(); start++) {

        std::cout << *start << " ";
    }
    std::cout << "" << std::endl;

}

int main() {


    vector<int> v;
    for (int i = 0; i < 10; ++i) {

        v.push_back(i);
    }

    print_vector(v);

    //容量13(系统算法自动扩容)
    std::cout << v.capacity() << std::endl;

    //大小10
    std::cout << v.size() << std::endl;

    //判断是否为空
    std::cout << v.empty() << std::endl;

    //重新指定大小
    v.resize(15);//阔冲的是size
    print_vector(v); //变大用默认值填充
    std::cout << v.capacity() << std::endl;
    std::cout << v.size() << std::endl;
    std::cout << "_____________________" << std::endl;
    v.resize(5); //扩小则舍弃元素
    print_vector(v);
    std::cout << v.capacity() << std::endl; //容量不变
    std::cout << v.size() << std::endl; //大小变

    v.resize(15, -1);//扩充指定默认值
    print_vector(v);

    return 0;
}

