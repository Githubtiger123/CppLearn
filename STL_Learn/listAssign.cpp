//
// Created by Tiger on 2024/4/20.
//对list容器进行赋值操作

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
    l.push_back(56);
    l.push_back(28);
    l.push_back(-12);
    l.push_back(42);

    //方式一:通过operator方式进行赋值
    list<int> l1;
    l1 = l;
    print_list(l1);

    //方式二:assign
    list<int> l2;
    l2.assign(l.begin(), l.end());
    print_list(l2);

    list<int> l3;
    l3.assign(10, 80);
    print_list(l3);

    std::cout << "_______交换操作_______" << std::endl;
    l3.swap(l);
    std::cout << "l:";
    print_list(l);
    std::cout << "l3:";
    print_list(l3);


    return 0;
}

