//
// Created by Tiger on 2024/3/31.
//

#include <string>
#include <iostream>

using namespace std;

int main() {


    string s = string("abcdefgabcdefgabcdefg");

//    * `int find(const string& str, int pos = 0) const;`              //查找str第一次出现位置,从pos开始查找
    string s1 = "def";
    std::cout << s.find(s1) << std::endl;
    std::cout << s.find(s1, 4) << std::endl;
//    * `int find(const char* s, int pos = 0) const; `                     //查找s第一次出现位置,从pos开始查找
    std::cout << s.find("cde") << std::endl;//有默认值
    std::cout << s.find("cde", 4) << std::endl;
//    * `int find(const char* s, int pos, int n) const; `               //从pos位置查找s的前n个字符第一次位置
    std::cout << s.find("abcdefgh", 2, 7) << std::endl;
//    * `int find(const char c, int pos = 0) const; `                       //查找字符c第一次出现位置
    std::cout << s.find('g', 8) << std::endl;//也有默认值0
//    * `int rfind(const string& str, int pos = npos) const;`      //查找str最后一次位置,从pos开始查找
    string s2 = "fga";
    std::cout << s.rfind(s2) << std::endl;
    std::cout << s.rfind(s2, 11) << std::endl;
//    * `int rfind(const char* s, int pos = npos) const;`              //查找s最后一次出现位置,从pos开始查找
    std::cout << s.rfind("gab") << std::endl;//也有默认值
    std::cout << s.rfind("gab", 12) << std::endl;
//    * `int rfind(const char* s, int pos, int n) const;`              //从pos查找s的前n个字符最后一次位置
    std::cout << s.rfind("abcdefgh", 13, 7) << std::endl;//在第二个参数往前找，找目标字符串的前count个
    string s3 = "abcdefgh";
//    std::cout << s.rfind(s3, 13, 7) << std::endl;//在第二个参数往前找，找目标字符串的前count个
    //使用引用方式不可以,没有这样用
//    * `int rfind(const char c, int pos = 0) const;  `                      //查找字符c最后一次出现位置
    std::cout << s.rfind('a') << std::endl;
    std::cout << s.rfind('a', 13) << std::endl;
//    * `string& replace(int pos, int n, const string& str); `       //替换从pos开始n个字符为字符串str
//    * `string& replace(int pos, int n,const char* s); `                 //替换从pos开始的n个字符为字符串s
    string s4 = "QWERTYUIOP";
    string s5 = "AAAAA";
    s4.replace(3, 4, s5);//第一个参数开始,一直往后替换4个
    s4.replace(3, 88, s5);//超过长度数值无效按照最长的来替换

    std::cout << s4 << std::endl;
    s4.replace(6, 7, "CCCC");//不光是引用,指针也可以
    std::cout << s4 << std::endl;
    s4.replace(0, 66, "CCCC");//
//    s4.replace(66, 66, "CCCC");//第一个参数填错会报错



    std::cout << "—————————————测试找不到的情形——————————————" << std::endl;
    string s6 = "qwertyuiop";
    std::cout << s6.find("1") << std::endl;
    /*
     * 在C++的标准字符串类中，find 成员函数用来查找子串。如果找到了子串，它会返回子串首字符在原字符串中的索引；如果没有找到子串，它不会返回 -1，而是返回一个特殊的常量 std::string::npos。
std::string::npos 是 size_t 类型的最大值，用来表示没有找到子串的情况。由于 size_t 是无符号类型，它不能表示负值，因此 npos 实际上是最大的可能无符号数，根据平台和编译器通常是 4294967295 在32位系统上，或者是更大的数值在64位系统上。
在你的例子中，当你尝试找寻 s6 中的 "1" 时，字符串 "qwertyuiop" 中确实没有字符 "1"，所以 find 方法会返回 std::string::npos。当你把这个值打印出来的时候，因为 npos 是一个很大的数，你看到的会是这个很大的数，而不是 -1。
     */
    int i = s6.find("1");
    if (i != string::npos) {
        std::cout << "找到了:" << i << std::endl;
    } else {
        std::cout << "没有找到" << std::endl;
    }

    return 0;
}
