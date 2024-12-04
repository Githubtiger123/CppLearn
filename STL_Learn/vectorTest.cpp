//
// Created by Tiger on 2024/4/15.
//

#include <vector>
#include <iostream>

using namespace std;

//测试vector容器的几种创建方式

void print_vector(vector<int> v) {

    for (vector<int>::iterator start = v.begin(); start < v.end(); start++) {

        std::cout << *start << " ";
    }
    std::cout << "" << std::endl;

}

int main() {


    //方式一
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }

    print_vector(v);

    //方式二
    vector<int> v2(v.begin(), v.end() - 1); //左开右闭
    vector<int> v3 = vector(v.begin(), v.end() - 1); //左开右闭
    print_vector(v2);
    print_vector(v3);

    //方式三 vector(n, elem); //构造函数将n个elem拷贝给本身。

    vector<int> v4 = vector(10, 20);
    print_vector(v4);

    //方式四拷贝构造函数
    vector<int> v5 = vector(v4);
    print_vector(v5);

    return 0;
}

