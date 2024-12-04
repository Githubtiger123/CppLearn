//
// Created by Tiger on 2024/3/31.
//

#include <string>
#include <iostream>

using namespace std;

int main() {

    //`string substr(int pos = 0, int n = npos) const;`   //返回由pos开始的n个字符组成的字符串
    string s = "abcdefg";
    std::cout << s.substr() << std::endl;//有默认参数
    std::cout << s.substr(4, 3) << std::endl;//有默认参数

    //有电子邮件地址,将地址分离
    string email = "12358412584@qq.com";
    std::cout << email.substr(0, email.find('@')) << std::endl;
    return 0;
}
