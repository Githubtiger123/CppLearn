//
// Created by Tiger on 2024/4/20.
//对栈的构造函数测试

#include <stack>
#include <iostream>

using namespace std;

int main() {

    //construct1:默认构造函数
    stack<int> stk;
    for (int i = 0; i < 5; ++i) {
        stk.push(i); //向栈中添加数据
    }
    //查看栈顶数据
    std::cout << stk.top() << std::endl;

//    std::cout << stk.pop() << std::endl; //弹出数据(是void的无返回值)

    stk.pop();
    std::cout << stk.top() << std::endl;

    std::cout << stk.size() << std::endl;
    std::cout << stk.empty() << std::endl;

    return 0;
}
