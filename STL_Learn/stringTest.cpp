//
// Created by Tiger on 2024/3/31.
//

#include <string>
#include <iostream>

using namespace std;

void test01() {
    //测试string的几个构造函数
    /*
     * * `string();`          				//创建一个空的字符串 例如: string str;
          `string(const char* s);`	        //使用字符串s初始化
        * `string(const string& str);`    //使用一个string对象初始化另一个string对象
        * `string(int n, char c);`           //使用n个字符c初始化
     */

//    string s1();// 这被解析为一个函数声明
//上边的写法是不对的
    string s1; // 最简洁的方式
//    string s1 = string(); // 使用等号初始化
//    string s1{}; // 使用花括号初始化（C++11及以后）

    char *str = "123456";
    string s2(str);
    //用一个对象初始化另一个对象(拷贝构造)
    string s3(s2);

    string s4(10, 'a');

    string s5("4567");

    string *s6 = new string(s3);
    string *s7 = new string(*s6);

    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;
    std::cout << s4 << std::endl;
    std::cout << s5 << std::endl;
    std::cout << *s6 << std::endl;
    std::cout << *s7 << std::endl;
}

int main() {

    test01();
    return 0;
}
