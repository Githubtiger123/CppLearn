//
// Created by lenovo on 2024/3/3.
//
/**
 * ������ cylinder,cylinder �Ĺ��캯�������������� doubleֵ,
 * �ֱ��ʾԲ����İ뾶�͸߶ȡ����� cylinder ����Բ��������,
 * ���洢��һ�� double �����С�
 * ���� cylinder �а���һ����Ա����vol,������ʾÿ�� cylinder ����������
 * @return
 */

#include <iostream>
#include "cylinder.h"

int main(){

    std::cout << "������Բ���İ뾶�͸�" << std::endl;
    double high,radius;
    std::cin >> radius >> high;
    (new cylinder(radius,high))->print_volume();
//    c->print_volume();
    return 0;
}
