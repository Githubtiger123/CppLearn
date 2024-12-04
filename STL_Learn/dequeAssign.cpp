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
    for (int i = 0; i < 5; i++) {
        d.push_back(i);
    }
    //方式一 operator=的方式
    deque<int> d1 = d;
    print_deque(d1);

    //方式二：`assign(beg, end);`
    deque<int> d2;
    d2.assign(d.begin(), d.end());
    print_deque(d2);

    //方式三
    deque<int> d3;
    d3.assign(10, 500);
    print_deque(d3);

    return 0;
}
