//
// Created by Tiger on 2024/3/31.
//
#include <string>
#include <iostream>

using namespace std;


int main() {

    string s = "hello";
//    * `string& insert(int pos, const char* s);  `                //插入字符串
    s.insert(1, "qqqq");
    std::cout << s << std::endl;
//    * `string& insert(int pos, const string& str); `        //插入字符串
    string s1 = "123456";
    s.insert(3, s1);
    std::cout << s << std::endl;

//    * `string& insert(int pos, int n, char c);`                //在指定位置插入n个字符c
    s.insert(1, 3, 'a');
    std::cout << s << std::endl;
//    * `string& erase(int pos, int n = npos);`                    //删除从Pos开始的n个字符
    s.erase(1, 13);
    std::cout << s << std::endl;
    return 0;
}
