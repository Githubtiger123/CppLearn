//
// Created by Tiger on 2024/3/19.
//
//测试写文件
#include "fstream"

int main() {


    std::ofstream ofs;

    ofs.open("../hello.txt", std::ios::app);
    ofs << "张三1" << std::endl;
    ofs.close();

    return 0;
}

