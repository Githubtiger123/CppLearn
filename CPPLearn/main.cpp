#include <iostream>

int func1(int x = 10, int y = 20, int z = 30);//����ԭ�Ͷ�������Ĭ�ϲ����ĺ���,������ʵʱ�Ͳ��ü�Ĭ��ֵ
int func1(int x, int y, int z) {
    return x + y + z;
}

int func(int x = 10, int y = 20, int z = 30) {
    return x + y + z;
}
//int func(int x = 10, int y = 20, int z) {
//    return x + y + z;
//}
//����Ĭ�ϲ����ĺ������뿿��,��Ϊ����������������ҵ�

void func_overload() {
    std::cout << "��������" << std::endl;
}

void func_overload(int a) {
    std::cout << "��������" << std::endl;
}

void func_overload(int a, int b) {
    std::cout << "��������" << std::endl;
}

void func_overload(long a, long b) {
    std::cout << "��������" << std::endl;
}

//����ֵ���Ͳ���Ϊ���ֺ����Ƿ����ص�һ��==����
//int func_return(){
//    return 0;
//}
//
//double func_return(){
//    return 0;
//}

void func_default(int a) {

}

void func_default(int a = 10, int b = 20) {

}

void different_const(){
    int const c = 10;
    int b = 10;//����

    const int num = 10;
    // num = 20;  /��num��const����֮���ǲ��ܱ��޸ĵģ���������ᱨ��

    int a = 10;
    const int * p = &a;//ָ������ָ��
    /* const ����*����ߣ����ε���*p����ʾ����ָ��ָ������ݣ�����ͨ��ָ�����ı�
     ����ָ����������ǿ��Ա��޸ĵ�*/
    int n = 20;
//    *p = n; // ����  ָ��ָ������ݲ��ܱ��޸�
    p = &n; // ָ�����p�����޸�


    int aa = 10;
    int * const pp = &aa;//��ָ��
    /*const ����*���ұߣ����ε���ָ�����p������ʾָ������ǲ����Ա��޸ĵ�
    ���� ָ��ָ������ݿ��Ա��޸�*/
    int nn = 20;
    *pp = nn; // ָ��ָ������ݿ����޸�
//    pp = &n; //���� ָ�����p���ܱ��޸�

    const int * const ppp = &aa;//ָ�����ĳ�ָ��

}

int global = 20;
int a = 10;

int main() {
    std::cout << func() << std::endl;
    std::cout << func(0) << std::endl;
    std::cout << func(0, 0) << std::endl;
//    std::cout << func(, , 10) << std::endl;//������һ������ʡ���������Ĳ���ȫ��ʡ��,������������
    std::cout << "Hello, World!" << std::endl;

    func_overload();
    func_overload(10);
    func_overload(10, 20);
//    func_overload(10.2, 10.3); //�漰��ǿ��ת���ı������޷�ȷ�������ĸ�����

//    func_default(10);ע�ⲻ�ܺ���Ĭ��ֵ�ĺ������أ�������������

    int a = 20;
    std::cout << a << std::endl;//ͬ��ʱ���ȵ��þֲ�������
    std::cout << ::a << std::endl;//::���Ե���ȫ�ֱ���

    //���е�ǿ������ת����
    double d = double(a);
    std::cout << d << std::endl;

    int *num = new int;
    *num = 20;
    int *num1 = new int(10);//��Ĭ��ֵ��new
    std::cout << *num << std::endl;
    std::cout << *num1 << std::endl;
    int *p1 = new int[20];//����ʹ��new����һ�����飬����ָ������Ĵ�С
    //�ͷŶѱ���
    delete num;
    delete num1;
    delete[] p1;
    int *p = new int;
    if (p != NULL) {
        delete p;
    } else {
        std::cout << "��������ʧ�ܣ������´���" << std::endl;
    }

    int aa = 10;
    int &bb = aa;//bbָ��aa������
//    int &cc;
//    cc = aa;�������͵ı����������ȶ��������
    int q = 10, b = 20;
    int &j = q;
    j = b;//��ֵ������������ָ����

//    int arr[10];
//    int &arr1[10] = arr;���鲻�ܱ�����

    int n = 3;
    int *pp = &n;
//    int &&u = n;//���ܴ������õ�����
//    int &*u = pp;//���ܴ���ָ�������

//���Խ����õ�ַ���Ƹ�һ��ָ��
    *pp = j;
    std::cout << "____________________________" << std::endl;
    different_const();

    return 0;
}
