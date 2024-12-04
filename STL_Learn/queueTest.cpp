//
// Created by Tiger on 2024/4/20.
//queue 的方法测试

#include <queue>
#include <iostream>

using namespace std;

int main() {

    //构造方法:
    queue<int> q;
    for (int i = 0; i < 5; ++i) {
        q.push(i); //队尾添加元素
    }

    //拷贝构造
    queue<int> q1(q);

    //队列的赋值操作
    queue<int> d2 = q;
    //返回第一个元素和最后一个元素
    std::cout << d2.front() << std::endl;
    std::cout << d2.back() << std::endl;

    //从队头弹出
    d2.pop(); //无返回值
    std::cout << d2.front() << std::endl;
    std::cout << d2.back() << std::endl;

    //判断大小和是否为空
    std::cout << q1.size() << std::endl;
    std::cout << q1.empty() << std::endl;

//    queue<int> q3;
//    q3.pop(); //弹出前先看看是否为空

    std::cout << "_________________" << std::endl;
    while (q1.empty() == 0) {

        std::cout << q1.front() << std::endl;
        q1.pop();
    }

    return 0;
}
