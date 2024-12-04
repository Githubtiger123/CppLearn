//
// Created by Tiger on 2024/4/26.
//


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

    //set的默认构造函数
    set<int> s;
    for (int i = 0; i < 5; ++i) {
        s.insert(i); //没有pushXXX方法有insert
    }
    print_Set(s); //set是有序的
    //set是不允许重复的
    s.insert(3);
    print_Set(s);

    //拷贝构造
    set<int> s1(s);
    print_Set(s1);

    //operator的赋值运算符
    set<int> s2 = s1;
    print_Set(s2);
    print_Set(s2);

    return 0;
}

