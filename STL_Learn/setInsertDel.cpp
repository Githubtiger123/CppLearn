//
// Created by Tiger on 2024/4/26.
//

#include <set>
#include <iostream>

using namespace std;

void print_Set(set<int> &s) {

    for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << "" << std::endl;
}


int main() {

    set<int> s;
    s.insert(56);
    s.insert(53);
    s.insert(96);
    s.insert(15); //插入操作
    print_Set(s);

    int n = *(s.erase(s.begin())); //删除指定迭代器的数据返回下一个
    //次迭代器也不支持+ -的条约访问
    std::cout << n << std::endl;

    for (int i = 0; i < 5; ++i) {
        s.insert(i);
    }
    print_Set(s);

    //删除区间
    set<int>::iterator it = s.begin();
    for (int i = 0; i < 5; ++i) {
        it++;
    }
    s.erase(it, s.end());
    print_Set(s);

    //删除指定元素

    //返回是否删除成功
    std::cout << s.erase(2) << std::endl;
    print_Set(s);

    return 0;
}
