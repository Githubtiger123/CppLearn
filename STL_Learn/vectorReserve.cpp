//
// Created by Tiger on 2024/4/15.
// 利用reserve预留空间

#include <vector>
#include <iostream>

using namespace std;

int main() {

    //首先测试插入100万个数据时要扩充的次数(重新开辟空间,重新遍历赋值)
    int num = 0;
    int *p = nullptr;
    vector<int> v;
    v.reserve(1000000);
    std::cout << "capacity:" << v.capacity() << std::endl; //其实就是直接指定了capacity的容量一步到位,不在扩容
    for (int i = 0; i < 1000000; ++i) {
        v.push_back(i);
        if (p != &v[0]) {
            p = &v[0];
            num++;
        }
    }
    std::cout << num << std::endl; //次数太大了,可以在插入之前进行预留减少次数
    std::cout << v.capacity() << std::endl;
    std::cout << v.size() << std::endl;
    return 0;
}

