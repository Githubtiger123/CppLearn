//
// Created by Tiger on 2024/3/31.
//

#include <string>
#include <iostream>

using namespace std;

int main() {

    string s = string("abcde");
    s += "你好";//`string& operator+=(const char* str);`
    std::cout << s << std::endl;
    string s1 = string("世界");
    s += s1;//`string& operator+=(const string& str);
    std::cout << s << std::endl;
    s += 'c';//`string& operator+=(const char c);`
    std::cout << s << std::endl;

    s.append("12345");//`string& append(const char *s); `
    std::cout << s << std::endl;

    s.append(s1);//string& append(const string &s);`
    std::cout << s << std::endl;

    //添加前n个字符
    s.append("12345", 4);//`string& append(const char *s, int n);`
    std::cout << s << std::endl;

    //`string& append(const string &s, int pos, int n);`//字符串s中从pos开始的n个字符连接到字符串结尾
    string s2 = "c++";
    s1.append(s2, 1, 2);
    std::cout << s1 << std::endl;

    return 0;
}

