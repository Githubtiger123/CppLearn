#include <iostream>
#include <cstring>

template<typename T, typename L>
void sort(T arr[], L length);

template<typename T>
void temp(T &a, T &b) {

    T tmp = a;
    a = b;
    b = tmp;
}

//2.模板必须确定T的类型才可以使用
template<typename T>
void func() {

}

//打印数组模板
template<typename T>
void printArray(T arr[], int len) {

    for (int i = 0; i < len; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    double a = 10.333;
    double b = 20;
    //1.自动类型推导
    temp(a, b);
    std::cout << "a:" << a << ",b:" << b << std::endl;

    //2.显式指定数据类型
    temp<double>(a, b);
    std::cout << "a:" << a << ",b:" << b << std::endl;

    //注意事项
    //1.自动类型推到,数据类型必须一致
//    temp((double )a, (int)b);
//    func();

    func<int>();
    //测试排序数组

    char arr[] = "sfhuhudsiojfposfads";
    sort(arr, strlen(arr));
//    std::string str(arr);
//    std::cout << str << std::endl;
    int len = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, len);
    return 0;
}

//案例一:函数模板堆不同数组排序
template<typename T, typename L>
void sort(T arr[], L length) {
    for (int i = 0; i < length - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < length; ++j) {
            if (arr[min_idx] > arr[j]) {
                min_idx = j;
            }
        }

        T t = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = t;
    }
}
