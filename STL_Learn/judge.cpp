//
// Created by Tiger on 2024/4/20.
//

#include <vector>
#include <string>
#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

class Person {
public:
    Person(string name, int score) {
        this->m_Name = name;
        this->m_Score = score;
    }

    string m_Name; //姓名
    double m_Score;  //平均分
};

void createPerson(vector<Person> &persons) {

    string s = "ABCDE";
    string t = "选手:";
    for (int i = 0; i < 5; ++i) {

        persons.push_back(Person(t + s[i], 0));
    }
}

void print_vector(const vector<Person> &v) {

    for (vector<Person>::const_iterator it = v.begin(); it != v.end(); it++) {
        std::cout << (*it).m_Name << "成绩:" << (*it).m_Score << std::endl;
    }
}

void set_score(vector<Person> &v) {

    std::cout << "现在为几位选手打分:" << std::endl;
    for (int i = 0; i < v.size(); ++i) {
        deque<int> d;
        int sum = 0;
        std::cout << "现在为第" << i + 1 << "位同学打分" << std::endl;
        for (int j = 0; j < 5; ++j) {
            std::cout << "第" << j + 1 << "位评委打分:" << std::endl;
            int score = 0;
            std::cin >> score;
            d.push_back(score);
        }
        sort(d.begin(), d.end());
        //弹出最高分和最低分
        d.pop_front();
        d.pop_back();
        for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
            sum += *it;
        }
        v[i].m_Score = sum / 3.0;
    }
}

int main() {

    vector<Person> v;
    createPerson(v);
    set_score(v);

    print_vector(v);
    return 0;
}
