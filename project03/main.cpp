#include <iostream>
#include "Person.h"

//6.��Person��һ��������Ա��Ϣ�����ݽṹ�壬���������������������Ա����䡣���øýṹ�崴������emp[5]��
// ���������Get()��������������Ա����Ϣ����ͨ��Show()������ʾ�������Ϣ�����д��������������ܡ�
int main() {
    std::cout << "����ʼ����" << std::endl;
    Person * arr[5];
    for (int i = 0; i < 5; ++i) {
        std::cout << "���������������䣬�Ա�" <<std::endl;
        string name;
        int age;
        int sex;
        std::cin >> name >> age >> sex;//����std::cin�������,���Խ�����ʽ����
        Person* p = new Person(name,age,sex);
        arr[i] = p;
    }

    for (int i = 0; i < 5; ++i) {
        arr[i]->show();
    }

////���Կ������캯��
//    Person *p1 = new Person("С��", 18, 1);
//    Person *p2 = new Person(*p1);
//    p2->show();

    return 0;
}
