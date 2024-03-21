#include <iostream>

int func1(int x = 10, int y = 20, int z = 30);//函数原型定义了有默认参数的函数,则是现实时就不用加默认值
int func1(int x, int y, int z) {
    return x + y + z;
}

int func(int x = 10, int y = 20, int z = 30) {
    return x + y + z;
}
//int func(int x = 10, int y = 20, int z) {
//    return x + y + z;
//}
//带有默认参数的函数必须靠右,因为参数结合是自左向右的

void func_overload() {
    std::cout << "函数重载" << std::endl;
}

void func_overload(int a) {
    std::cout << "函数重载" << std::endl;
}

void func_overload(int a, int b) {
    std::cout << "函数重载" << std::endl;
}

void func_overload(long a, long b) {
    std::cout << "函数重载" << std::endl;
}

//返回值类型不作为区分函数是否重载的一句==依据
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
    int b = 10;//常量

    const int num = 10;
    // num = 20;  /当num被const修饰之后，是不能被修改的，所以这里会报错

    int a = 10;
    const int * p = &a;//指向常量的指针
    /* const 放在*的左边，修饰的是*p，表示的是指针指向的内容，不能通过指针来改变
     但是指针变量本身是可以被修改的*/
    int n = 20;
//    *p = n; // 报错  指针指向的内容不能被修改
    p = &n; // 指针变量p可以修改


    int aa = 10;
    int * const pp = &aa;//常指针
    /*const 放在*的右边，修饰的是指针变量p本身，表示指针变量是不可以被修改的
    但是 指针指向的内容可以被修改*/
    int nn = 20;
    *pp = nn; // 指针指向的内容可以修改
//    pp = &n; //报错 指针变量p不能被修改

    const int * const ppp = &aa;//指向常量的常指针

}

int global = 20;
int a = 10;

int main() {
    std::cout << func() << std::endl;
    std::cout << func(0) << std::endl;
    std::cout << func(0, 0) << std::endl;
//    std::cout << func(, , 10) << std::endl;//若其中一个参数省略则他其后的参数全部省略,不能这样调用
    std::cout << "Hello, World!" << std::endl;

    func_overload();
    func_overload(10);
    func_overload(10, 20);
//    func_overload(10.2, 10.3); //涉及到强制转换的编译器无法确定调用哪个函数

//    func_default(10);注意不能和有默认值的函数重载，这样会有歧义

    int a = 20;
    std::cout << a << std::endl;//同名时优先调用局部变量；
    std::cout << ::a << std::endl;//::可以调用全局变量

    //特有的强制类型转换符
    double d = double(a);
    std::cout << d << std::endl;

    int *num = new int;
    *num = 20;
    int *num1 = new int(10);//有默认值的new
    std::cout << *num << std::endl;
    std::cout << *num1 << std::endl;
    int *p1 = new int[20];//可以使用new创建一个数组，必须指定数组的大小
    //释放堆变量
    delete num;
    delete num1;
    delete[] p1;
    int *p = new int;
    if (p != NULL) {
        delete p;
    } else {
        std::cout << "创建变量失败，请重新创建" << std::endl;
    }

    int aa = 10;
    int &bb = aa;//bb指向aa的引用
//    int &cc;
//    cc = aa;引用类型的变量不可以先定义后声明
    int q = 10, b = 20;
    int &j = q;
    j = b;//赋值操作，并不是指向别的

//    int arr[10];
//    int &arr1[10] = arr;数组不能被引用

    int n = 3;
    int *pp = &n;
//    int &&u = n;//不能创建引用的引用
//    int &*u = pp;//不能创建指针的引用

//可以将引用地址复制给一个指针
    *pp = j;
    std::cout << "____________________________" << std::endl;
    different_const();

    return 0;
}
