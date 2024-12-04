//
// Created by Tiger on 2024/4/27.
//
#include <iostream>
#include <map>

using namespace std;


class MyCompare {

public:
    bool operator()(int a, int b) const {
        return a > b;
    }
};

void printMap(const map<int, int, MyCompare> m) {

    for (map<int, int, MyCompare>::const_iterator it = m.begin(); it != m.end(); it++) {
        std::cout << "Key:" << it->first << ",Valve:" << it->second << std::endl;
    }
}

int main() {

    map<int, int, MyCompare> m; //实现对key的自定义排序
    for (int i = 0; i < 10; ++i) {
        m.insert({i, i + 1});
    }

    printMap(m);

    return 0;
}
