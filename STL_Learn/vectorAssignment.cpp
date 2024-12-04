//
// Created by Tiger on 2024/4/15.
//
//对vector进行赋值测试

#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<double> v) {

    for (vector<double>::iterator start = v.begin(); start < v.end(); start++) {

        std::cout << *start << " ";
    }
    std::cout << "" << std::endl;

}

int main() {


    vector<double> v;
    for (double i = 0; i < 3; i += 0.1) {
        v.push_back(i);
    }

    print_vector(v);

    //方式一:重载operator方式
    vector<double> v1 = v;
    print_vector(v1);

    //方式二:assign方法
    vector<double> v2;
    v2.assign(v.begin(), v.end() - 10); //左开右闭
    print_vector(v2);

    //方式三:assign赋值重复元素
    v2.assign(10, 5); //assign是覆盖操作
    print_vector(v2);

    return 0;
}
