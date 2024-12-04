//
// Created by Tiger on 2024/3/31.
//对string赋值操作进行测试

#include <string>
#include <iostream>

using namespace std;

int main() {


    string s;
    s = "aaaa"; //string& operator=(const char* s);
    std::cout << s << std::endl;
    string s1 = string("abc");
    s = s1;//`string& operator=(const string &s);`
    std::cout << s << std::endl;
    //将单个字符赋值给字符串
    s = 'a';
    std::cout << s << std::endl;
    //通过调用assign方法进行赋值
    s.assign("qwe");//`string& assign(const char *s);`
    std::cout << s << std::endl;
    //将字符串前n个字符赋值给字符串
    s.assign("hello!!!!", 5);//string& assign(const char *s, int n);
    std::cout << s << std::endl;
    s.assign(s1);//`string& assign(const string &s);`
    //`string& assign(int n, char c);`                  //用n个字符c赋给当前字符串
    s.assign(10, 'v');
    std::cout << s << std::endl;
    return 0;
}
