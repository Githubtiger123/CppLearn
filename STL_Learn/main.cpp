#include <iostream>
#include <vector>
#include "algorithm"

using namespace std;

void MyPrint(int val) {
    std::cout << val << std::endl;
}

class Person {

private:
    string name;
    int age;
public:
    Person() {}

    Person(const string &name, int age) : name(name), age(age) {}

    };

int main() {


    vector<int> v;
    for (int i = 10; i < 20; ++i) {
        v.push_back(i);
    }
    //对vector进行遍历//方式1:
//    vector<int>::iterator pBegin = v.begin();
//    vector<int>::iterator pEnd = v.end();//指向最后一个下标的最后一个
//    while (pBegin != pEnd) {
//        std::cout << *pBegin << std::endl;
//        pBegin++;
//    }

    //第二种方式:
//    for (vector<int>::iterator it = v.begin(); it < v.end(); ++it) {
//
//        std::cout << *it << std::endl;
//    }

    //第三种方式
    for_each(v.begin(), v.end(), MyPrint);

    //可以用lambda表达式作为第三个参数
    int multiplier = 2;
    for_each(v.begin(), v.end(), [multiplier](int i) {
        std::cout << i << std::endl;
    });

    std::cout << "________vector存放自定义数据类型________" << std::endl;
    vector<Person> v1;
    Person p1("张三", 12);
    Person p2("里斯", 32);
    Person p3("王五", 25);
    Person p4("小李", 24);
    Person p5("刘琦", 19);
    v1.push_back(p1);
    v1.push_back(p2);
    v1.push_back(p3);
    v1.push_back(p4);
    v1.push_back(p5);
    for (vector<Person>::iterator it = v1.begin(); it < v1.end(); it++) {

        std::cout << *it;
    }

    vector<Person *> v2;

    Person *p6 = new Person("张一", 31);
    Person *p7 = new Person("张二", 25);
    Person *p8 = new Person("张三", 11);
    Person *p9 = new Person("孙悟空", 112);
    Person *p0 = new Person("猪八戒", 124);
    v2.push_back(p6);
    v2.push_back(p7);
    v2.push_back(p8);
    v2.push_back(p9);
    v2.push_back(p0);
    for (vector<Person *>::iterator it = v2.begin(); it < v2.end(); it++) {

        std::cout << "*****" << **it;
    }
    std::cout << "——————————————————容器的嵌套使用——————————————————" << std::endl;
    vector<vector<int>> v3;
    vector<int> v11;
    vector<int> v12;
    vector<int> v13;
    vector<int> v14;
    vector<int> v15;
    for (int i = 0; i < 5; ++i) {
        v11.push_back(1 + i);
        v12.push_back(2 + i);
        v13.push_back(3 + i);
        v14.push_back(4 + i);
        v15.push_back(5 + i);
    }
    v3.push_back(v11);
    v3.push_back(v12);
    v3.push_back(v13);
    v3.push_back(v14);
    v3.push_back(v15);

    for (vector<vector<int>>::iterator it = v3.begin(); it < v3.end(); it++) {

        for (vector<int>::iterator vit = (*it).begin(); vit < (*it).end(); vit++) {
            std::cout << *vit << " ";
        }
        std::cout << "" << std::endl;
    }
    return 0;
}
