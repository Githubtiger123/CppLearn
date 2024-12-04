//
// Created by Tiger on 2024/3/31.
//

#include <string>
#include <iostream>

using namespace std;

int main() {

    string s = "abcd";
    string s1 = "bcde";
    std::cout << s.compare(s1) << std::endl;
    std::cout << s1.compare(s) << std::endl;

    //也可以传数组首元素地址
    std::cout << s.compare("abcd") << std::endl;
    return 0;
}
