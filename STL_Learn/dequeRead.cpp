//
// Created by Tiger on 2024/4/19.
//

#include <deque>
#include <iostream>

using namespace std;

void print_deque(const deque<int> &d) {

    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {

        std::cout << *it << " ";
    }
    std::cout << "" << std::endl;
}

//对deque进行读取
int main() {

    deque<int> d;
    for (int i = 0; i < 5; ++i) {
        d.push_back(i);
    }
    //方式1 :use operator[]
    std::cout << d[0] << std::endl;
    std::cout << d[2] << std::endl;

    //method 2:use at() method
    std::cout << d.at(1) << std::endl;
    std::cout << d.at(3) << std::endl;

    //获取首位元素
    std::cout << d.front() << std::endl;
    std::cout << d.back() << std::endl;

    return 0;
}

