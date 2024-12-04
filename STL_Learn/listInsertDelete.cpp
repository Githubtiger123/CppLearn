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

    list<int> l;
//    * push_back(elem);//在容器尾部加入一个元素
    l.push_back(4);
    l.push_back(5);
    print_list(l);
//    * pop_back();//删除容器中最后一个元素
    l.pop_back();
    print_list(l);
//    * push_front(elem);//在容器开头插入一个元素
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);
    print_list(l);
//    * pop_front();//从容器开头移除第一个元素
    l.pop_front();
    print_list(l);
//    * insert(pos,elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
    l.insert(l.begin(), 6); //在指定位置插入数值,因为迭代器不支持加减操作,因此只能在头尾插入,比较积累
    print_list(l);
//    * insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
    l.insert(l.end(), 10, 5);
    print_list(l);
//    * insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
    list<int> l1;
    l1.push_back(99);
    l1.push_back(100);
    l1.push_back(101);
    l.insert(l.end(), l1.begin(), l1.end());
    print_list(l);
//    * clear();//移除容器的所有数据
//    * erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
    list<int>::iterator it1 = l.begin();
    it1++; //重载了++操作符
    it1++;
    std::cout << *(l.erase(l.begin(), it1)) << std::endl; //返回指向下一个的迭代器
    print_list(l);
//    * erase(pos);//删除pos位置的数据，返回下一个数据的位置。
//    * remove(elem);//删除容器中所有与elem值匹配的元素。
    l.remove(5); //删除所有为5的元素
    print_list(l);


    return 0;
}

