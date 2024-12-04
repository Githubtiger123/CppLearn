//
// Created by Tiger on 2024/3/31.
//

#include <string>
#include <iostream>

using namespace std;

int main() {

    //读取
    string s = "abcdef";
    //访问数组有两种方式,有与string已经重载了[]运算符,可以像数组一样直接进行读取访问
    //s.size()可以获取字符串长度
    for (int i = 0; i < s.size(); ++i) {
        std::cout << s[i] << " ";
    }
    std::cout << "" << std::endl;
    //方式二可以使用at方法进行读取
    for (int i = 0; i < s.size(); ++i) {
        std::cout << s.at(i) << " ";
    }
    std::cout << "" << std::endl;

    //写入
    s[0] = 'z';
    s.at(1) = 'y';//at返回他的引用(char &)，因此可以修改
    std::cout << s << std::endl;
    return 0;
}

