//
// Created by Tiger on 2024/4/19.
//

/*
 * * `deque<T>` deqT;          //默认构造形式
* `deque(beg, end);`           //构造函数将[beg, end)区间中的元素拷贝给本身。
* `deque(n, elem);`            //构造函数将n个elem拷贝给本身。
* `deque(const deque &deq);`   //拷贝构造函数
 */
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

    deque<int> d; //默认构造函数
    for (int i = 0; i < 10; ++i) {
        d.push_back(i);
    }

    print_deque(d);

    // `deque(beg, end);`
    deque<int> d1(d.begin(), d.end());
    print_deque(d1);

    deque<int> d2(10, 100);
    print_deque(d2);

    //拷贝构造函数
    deque<int> d3(d2);
    print_deque(d3);


    return 0;
}
