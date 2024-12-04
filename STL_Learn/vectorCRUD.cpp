//
// Created by Tiger on 2024/4/15.
// vector的增删改查

#include <vector>
#include <iostream>

using namespace std;

void print_vector(vector<int> v) {

    for (vector<int>::iterator start = v.begin(); start < v.end(); start++) {

        std::cout << *start << " ";
    }
    std::cout << "" << std::endl;

}

/*
 ** `push_back(ele);`                                         //尾部插入元素ele
* `pop_back();`                                                //删除最后一个元素
* `insert(const_iterator pos, ele);`        //迭代器指向位置pos插入元素ele
* `insert(const_iterator pos, int count,ele);`//迭代器指向位置pos插入count个元素ele
* `erase(const_iterator pos);`                     //删除迭代器指向的元素
* `erase(const_iterator start, const_iterator end);`//删除迭代器从start到end之间的元素
* `clear();`                                                        //删除容器中所有元素
 */

int main() {

    vector<int> v;
    //尾插
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    print_vector(v);

    //尾删
    v.pop_back();
    v.pop_back();
    print_vector(v);

    //插入
//    v.insert(v.begin() + 4, 10);  越界了不能插入
    v.insert(v.begin() + 1, 100);
    print_vector(v);

    v.insert(v.begin(), 2, 1000);
    print_vector(v);

    //删除
    v.erase(v.begin() + 2);
    print_vector(v);

    v.erase(v.begin(), v.begin() + 2);
    print_vector(v);

    //清除所有元素
    v.clear();
    std::cout << v.size() << std::endl;
    std::cout << v.capacity() << std::endl;

    return 0;
}

