//
// Created by Tiger on 2024/4/26.
//
//set的大小和交换
//因为无重复所以没有重新指定大小和指定大小默认填充

#include <set>
#include <iostream>

using namespace std;

void print_Set(set<int> &s) {

    for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << "" << std::endl;
}


int main() {

    set<int> s;
    for (int i = 0; i < 5; ++i) {
        s.insert(i);
    }

    //size
    std::cout << s.size() << std::endl; //获取大小

    std::cout << s.empty() << std::endl;//判断是否为空

    set<int> s1;
    for (int i = 90; i < 99; ++i) {
        s1.insert(i);
    }

    s.swap(s1);
    std::cout << "s:";

    print_Set(s);
    std::cout << "s1:";
    print_Set(s1);

    return 0;
}
