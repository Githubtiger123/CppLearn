//
// Created by Tiger on 2024/4/26.
//

#include <utility>
#include <string>
#include <iostream>

using namespace std;

int main() {

    //创建pair
    pair<string, int> p("Xiaoming", 18);
    pair<string, int> p1("XiaoLi", 20);

    std::cout << p.first << std::endl;
    std::cout << p.second << std::endl;

    //方式二make_pair创建
    pair<string, int> p2 = make_pair("XiaoLi", 20);
    std::cout << (p1 == p2) << std::endl;


    return 0;
}
