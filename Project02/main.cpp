#include "iostream"

using namespace std;

class Person {
public:
    int age;
    int *score;

    Person(int a, int s) {
        cout << "Person���вι��캯��ִ?��" << endl;
        age = a;
        score = new int(s);
    }

    Person(const Person &p) {
        cout << "��?���캯��" << endl;
        // ��?���캯����Ĭ��ʵ�֣���ֱ�ӽ�?����ֵ�Ŀ�?
        age = p.age;
        score = new int(*(p.score));
    }

    ~Person() {
        cout << "��������ִ?��" << endl;
// ��scoreָ��Ķѿռ�����
        if (score != NULL) {
            delete score;
            score = NULL;
        }
    }
};


int main() {
// ����?������
    Person p1(18, 99);
// ͨ����?���캯������?��?���µĶ���
    Person p2(p1);
// �ڸղŵĿ�?���캯���У�����ֱֵ�ӽ�?ֵ�Ŀ�?��������̾���?��ǳ��?
// ��?���������score��ַ����ȫ��ͬ
    cout << p1.score << endl;
    cout << p2.score << endl;

    return 0;
}