//
// Created by Tiger on 2024/4/15.
//vector容器的访问

#include <vector>
#include <iostream>

using namespace std;

int main() {

    vector<int> v;

    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }

    //方式一用过operator[]进行访问
    std::cout << v[0] << std::endl;

    //方式二通过at方法获取
    std::cout << v.at(2) << std::endl;

    //获取首元素
    std::cout << v.front() << std::endl;

    //获取尾元素
    std::cout << v.back() << std::endl;

    return 0;
}
