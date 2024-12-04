//
// Created by Tiger on 2024/4/20.
//

#include <list>
#include <iostream>

using namespace std;

void print_list(const list<int> &l) {

    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {

        std::cout << *it << " ";
    }
    std::cout << "" << std::endl;
}

int main() {


    list<int> l; //默认构造函数创建list
    for (int i = 0; i < 5; ++i) {
        l.push_back(i);
    }
    print_list(l);

    //因为 std::list 的迭代器不支持 operator-。
    /*
     * std::list 容器的迭代器不支持随机访问。std::list 是一个双向链表，
     * 它的迭代器属于双向迭代器（Bidirectional Iterator）类别。
     * 这意味着 std::list 的迭代器仅支持向前（++）和向后（--）操作，
     * 但不支持像随机访问迭代器一样的跳跃式访问（例如通过 +、-、+=、-= 跳跃多个位置）
     * 或直接通过下标访问。
     */
//    list<int> l1(l.begin(), l.end()-1); //通过指定迭代器方式创建

    list<int> l1(l.begin(), l.end());

    print_list(l1);

    // k 个elem的方式赋值
    list<int> l2(5, 100);
    print_list(l2);

    //拷贝构造函数方式进行赋值
    list<int> l3(l2);
    print_list(l3);

    return 0;
}

