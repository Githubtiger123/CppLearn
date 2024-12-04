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

    set<int> s;
    for (int i = 0; i < 5; ++i) {
        s.insert(i);
    }
    for (int i = 0; i < 10; ++i) {
        s.insert(i);
    }
    if (s.find(5) != s.end()) { //因为是无序的所以不需要得到下表
        std::cout << "找到了" << std::endl;
    } else {
        std::cout << "没找到" << std::endl;
    }
    std::cout << s.count(0) << std::endl; //统计key的个数,因为set是不能重复的所以不就是1就是0
    return 0;
}
