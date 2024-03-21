#include "iostream"

using namespace std;

class Person {
public:
    int age;
    int *score;

    Person(int a, int s) {
        cout << "Person的有参构造函数执?了" << endl;
        age = a;
        score = new int(s);
    }

    Person(const Person &p) {
        cout << "拷?构造函数" << endl;
        // 拷?构造函数的默认实现，是直接进?属性值的拷?
        age = p.age;
        score = new int(*(p.score));
    }

    ~Person() {
        cout << "析构函数执?了" << endl;
// 将score指向的堆空间销毁
        if (score != NULL) {
            delete score;
            score = NULL;
        }
    }
};


int main() {
// 创建?个对象
    Person p1(18, 99);
// 通过拷?构造函数，拷?出?个新的对象
    Person p2(p1);
// 在刚才的拷?构造函数中，属性值直接进?值的拷?，这个过程就是?个浅拷?
// 对?两个对象的score地址，完全相同
    cout << p1.score << endl;
    cout << p2.score << endl;

    return 0;
}