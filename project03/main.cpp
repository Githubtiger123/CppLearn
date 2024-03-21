#include <iostream>
#include "Person.h"

//6.类Person是一个描述人员信息的数据结构体，包括姓名（不定长）、性别、年龄。利用该结构体创建数组emp[5]，
// 调用自身的Get()方法可以输入人员的信息，并通过Show()方法显示输入的信息。请编写程序完成上述功能。
int main() {
    std::cout << "程序开始运行" << std::endl;
    Person * arr[5];
    for (int i = 0; i < 5; ++i) {
        std::cout << "请输入姓名，年龄，性别" <<std::endl;
        string name;
        int age;
        int sex;
        std::cin >> name >> age >> sex;//返回std::cin这个对象,可以进行链式引用
        Person* p = new Person(name,age,sex);
        arr[i] = p;
    }

    for (int i = 0; i < 5; ++i) {
        arr[i]->show();
    }

////测试拷贝构造函数
//    Person *p1 = new Person("小明", 18, 1);
//    Person *p2 = new Person(*p1);
//    p2->show();

    return 0;
}
