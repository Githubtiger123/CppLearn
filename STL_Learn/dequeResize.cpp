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

//deque容器的大小和容量操作
/*
 * **函数原型：**

* `deque.empty();`                       //判断容器是否为空

* `deque.size();`                         //返回容器中元素的个数

* `deque.resize(num);`                //重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
	                             //如果容器变短，则末尾超出容器长度的元素被删除。

* `deque.resize(num, elem);`     //重新指定容器的长度为num,若容器变长，则以elem值填充新位置。
 //如果容器变短，则末尾超出容器长度的元素被删除。
 */
int main() {

    deque<int> d;
    for (int i = 0; i < 5; ++i) {
        d.push_back(i);
    }

    std::cout << d.empty() << std::endl;
    std::cout << d.size() << std::endl;

    d.resize(10);
    std::cout << d.size() << std::endl;
    print_deque(d);

    d.resize(20, 50);
    std::cout << d.size() << std::endl;
    print_deque(d);

    d.resize(5, 50);
    std::cout << d.size() << std::endl;
    print_deque(d);

    return 0;
}
