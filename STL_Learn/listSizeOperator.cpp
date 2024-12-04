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


int main() {


    list<int> l;
    std::cout << l.empty() << std::endl; //判断是否为空
    for (int i = 0; i < 5; ++i) {
        l.push_back(i);
    }
    print_list(l);
    std::cout << l.size() << std::endl; //数组list大小

    //改变大小
    l.resize(10);
    print_list(l); //默认0填充
    std::cout << l.size() << std::endl;

    l.resize(5);
    print_list(l);

    l.resize(15, 99); //默认值99填充
    print_list(l);

    return 0;
}

