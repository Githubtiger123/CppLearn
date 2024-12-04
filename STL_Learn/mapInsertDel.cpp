//
// Created by Tiger on 2024/4/27.
//
#include <iostream>
#include <map>

using namespace std;

void printMap(const map<int, int> m) {

    for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++) {
        std::cout << "Key:" << it->first << ",Valve:" << it->second << std::endl;
    }
}

int main() {

    map<int, int> m;
    //第一种
    m.insert(pair<int, int>(10, 20));

    //第二种
    m.insert(make_pair(50, 60));

    //第三种
    m.insert(map<int, int>::value_type(40, 60));

    //第四种只接受用重载过的[]进行赋值里为key外为value
    m[6] = 10;

    //不推荐使用第四种
    //因为m[一个没有的]，这样访问时会默认赋值为0
    //常用于知道元素存在的时候获取value值
    std::cout << m[7] << std::endl; //会输出0在访问的同时就赋值了
    //Key:7,Valve:0
    printMap(m);

    std::cout << "------" << std::endl;
    //删除
    m.erase(m.begin());//迭代器删除

    m.erase(40);//找key删除

//    m.erase(m.begin()+2,m.end()); 这的迭代器同样也不支持+-等随机访问，因为他不是线性的

    printMap(m);

    m.erase(m.begin(), m.end());

    printMap(m);

    return 0;
}
