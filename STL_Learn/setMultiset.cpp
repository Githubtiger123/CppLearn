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

//set是不可重复的,mulitset是可重复的

int main() {

    set<int> s;
    s.insert(10); // 返回 pair<set<int>::iterator, bool>类型的对组
    pair<set<int>::iterator, bool> par = s.insert(10);
    if (par.second) {
        std::cout << "插入成功" << std::endl;
    } else {
        std::cout << "插入失败" << std::endl;
    }

    multiset<int> multis;
    multis.insert(10); //返回iterator
    multis.insert(10);
    multis.insert(10);
    multis.insert(10);
    multis.insert(10);


    return 0;
}
