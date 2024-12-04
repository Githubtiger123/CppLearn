
#include <iostream>
#include <map>

using namespace std;

void printMap(const map<string, int> m) {

    for (map<string, int>::const_iterator it = m.begin(); it != m.end(); it++) {
        std::cout << "Key:" << it->first << ",Valve:" << it->second << std::endl;
    }
}

int main() {

    map<string, int> m; //默认构造函数,按照key排序
    m.insert(pair<string, int>("xaioming", 16));
    m.insert(pair<string, int>("xaioming", 18)); //对于已经有的直接略过
    m.insert(pair<string, int>("xiaozhang", 20));
    m.insert(pair<string, int>("wangfang", 22));
    m.insert(pair<string, int>("zahngsan", 18));
    m.insert(pair<string, int>("lili", 23));
    printMap(m);

    //拷贝构造
    map<string, int> m1(m);
    printMap(m1);
    //赋值操作
    std::cout << "________________" << std::endl;
    map<string, int> m2;
    m2 = m;
    m2.insert({"123", 10}); //新版本也可以这样写
    printMap(m2);

    std::cout << "——————————————————大小和交换——————————————————" << std::endl;
    map<string, int> m3;
    m3.insert({"abc", 19});
    m3.insert({"xyz", 20});
    m3.insert({"abd", 22});
    std::cout << m3.size() << std::endl;

    map<string, int> m4;
    std::cout << m4.empty() << std::endl;
    m4.insert({"&*(", 56});
    m4.insert({"#@$", 26});
    m4.insert({"^&*", 45});

    m4.swap(m3);
    std::cout << "m3:" << std::endl;
    printMap(m3);
    std::cout << "m4:" << std::endl;
    printMap(m4);

    return 0;
}

