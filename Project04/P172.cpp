//
// Created by lenovo on 2024/1/12.
//
//P172 06 ģ��-��ͨ�����뺯��ģ����ù���
/**
 * 1.�������ģ�����ͨ����������ʵ��,���ȵ�����ͨ����
 * 2.����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
 * 3. ����ģ��Ҳ���Է�������
 * 4,�������ģ����Բ������õ�ƥ��,���ȵ��ú���ģ��
 *
 * ����:ֻ������һ
 */
#include <iostream>

void myPrint(int a, int b) {

    std::cout << "��ͨ����" << std::endl;
}

template<typename T>
void myPrint(T a, T b) {

    std::cout << "����ģ��" << std::endl;
}

template<typename T>
void myPrint(T a, T b, T c) {
    std::cout << "���غ���ģ��" << std::endl;
}


int main() {

    myPrint(10, 20);//��ͨ�����ͺ���ģ�����غ����ȵ�����ͨ����
    myPrint<int>(10, 20);//����ͨ����ģ������б� ǿ�Ƶ��� ����ģ��
    myPrint(10, 20, 50);//����ģ������
    myPrint('a', 'b');//.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
    return 0;
}