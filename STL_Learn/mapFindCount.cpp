//
// Created by Tiger on 2024/4/27.
//

#include <iostream>
#include <map>

using namespace std;

void printMap(const map<int, int> m) {

    for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++) {
        std::cout << "Key:" << it->first << ",Valve:" << it->second << std::endl;
    }
}

void printMap(const multimap<int, int> m) {

    for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++) {
        std::cout << "Key:" << it->first << ",Valve:" << it->second << std::endl;
    }
}

int main() {


    map<int, int> m;
    m.insert({10, 20});
    m.insert({20, 45});
    m.insert({50, 32});
    m.insert({90, 12});
    m.insert({70, 26});

    //查找
    map<int, int>::iterator it = m.find(50);
    if (it != m.end()) {
        std::cout << "找到了key:" << it->first << ",value:" << it->second << std::endl;
        m[50] = 90;
    } else {
        std::cout << "没找到" << std::endl;
    }


    it = m.find(50);
    if (it != m.end()) {
        std::cout << "找到了key:" << it->first << ",value:" << it->second << std::endl;
        it->second = 55; //修改value
    } else {
        std::cout << "没找到" << std::endl;
    }
    printMap(m);

    //count统计key的个数，因为map无重复所以返回值不就是0就是1
    std::cout << m.count(10) << std::endl;
    std::cout << m.count(880) << std::endl;

    multimap<int, int> m1;
    m1.insert({10, 20});
    m1.insert({10, 20});
    m1.insert({10, 30});
    m1.insert({10, 60});
    m1.insert({20, 60});
    std::cout << m1.count(10) << std::endl;
    printMap(m1);


    return 0;
}
