//
// Created by Tiger on 2024/4/20.
//

#include <list>
#include <iostream>

using namespace std;

void print_list(const list<int> &l) {

    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {

        std::cout << *it << " ";
    }
    std::cout << "" << std::endl;
}

//测试list容器的存取与访问

int main() {

    list<int> l;
    for (int i = 0; i < 5; ++i) {
        l.push_back(i);
    }
    //它不支持随机条条约访问,只能一个一个进行访问,因为迭代器没有重载+但是重载了++

    //只能头访问和尾访问不支持at和[]的方式访问
    std::cout << l.front() << std::endl;
    std::cout << l.back() << std::endl;

    return 0;
}

