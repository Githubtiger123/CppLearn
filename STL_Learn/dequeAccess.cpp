//
// Created by Tiger on 2024/4/19.
//
#include <deque>
#include <iostream>

using namespace std;

void print_deque(const deque<int> &d) {

    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {

        std::cout << *it << " ";
    }
    std::cout << "" << std::endl;
}

int main() {


    deque<int> d;
    for (int i = 0; i < 3; ++i) {
        d.push_back(i);//尾插
    }
    print_deque(d);

    //头插
    d.push_front(4);
    d.push_front(5);
    print_deque(d);

    //尾删
    d.pop_back();
    //头删
    d.pop_front();
    print_deque(d);

    //在指定位置插入
    d.insert(d.begin() + 1, 3);
    print_deque(d);
    //指定位置擦如多个
    d.insert(d.begin() + 2, 3, 2);
    print_deque(d);

    deque<int> d1;
    for (int i = 0; i < 5; ++i) {
        d1.push_back(i);
    }
    d.insert(d.begin() + 2, d1.begin() + 1, d1.end());
    print_deque(d);
    //清楚区间位置,返回删除后的位置
    std::cout << *(d.erase(d.begin() + 2, d.end() - 3)) << std::endl;
    print_deque(d);

    //删除一个元素,返回下一个元素
    std::cout << *(d.erase(d.begin() + 3)) << std::endl;
    print_deque(d);

    //晴空
    d.clear();
    std::cout << d.size() << std::endl;

    return 0;
}
