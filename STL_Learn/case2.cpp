//
// Created by Tiger on 2024/4/27.
//
/**
* 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
* 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
* 随机给10名员工分配部门和工资
* 通过multimap进行信息的插入  key(部门编号) value(员工)
* 分部门显示员工信息

1. 创建10名员工，放到vector中
2. 遍历vector容器，取出每个员工，进行随机分组
3. 分组后，将员工部门编号作为key，具体员工作为value，放入到multimap容器中
4. 分部门显示员工信息
 */

#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;


class employee {

    string name;
    int employee_id;
    int department_id;

public:
    employee(const string &name, int employeeId, int departmentId) : name(name), employee_id(employeeId),
                                                                     department_id(departmentId) {}

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        employee::name = name;
    }

    int getEmployeeId() const {
        return employee_id;
    }

    void setEmployeeId(int employeeId) {
        employee_id = employeeId;
    }

    int getDepartmentId() const {
        return department_id;
    }

    void setDepartmentId(int departmentId) {
        department_id = departmentId;
    }
};

class department {

public:
    int department_id;
    string department_name;
    int count; //部门人数

public:
    explicit department(string name, int departmentId) : department_name(name),
                                                         department_id(departmentId) { count = 0; }

};

class MyCompare {

public:
    bool operator()(const department &d1, const department &d2) const {
        return d1.department_id < d2.department_id;
    }
};

void printMap(const multimap<department, employee, MyCompare> m) {

    for (multimap<department, employee, MyCompare>::const_iterator it = m.begin(); it != m.end(); it++) {
        std::cout << "department_Name:" << it->first.department_name << ",employee_Name:" << it->second.getName()
                  << std::endl;
    }
}

int main() {

    vector<employee> employees;
    vector<department> departments;
    departments.push_back(department("策划", 1));
    departments.push_back(department("美术", 2));
    departments.push_back(department("研发", 3));

    srand(time(0));
    for (int i = 0; i < 50; ++i) {
        int id = rand() % 3;
        departments[id].count++;
        string name = "e_" + to_string(i);
//        cin >> name;
        employees.push_back(employee(name, i + 1, id + 1));
    }

    multimap<department, employee, MyCompare> m;

    for (int i = 0; i < 50; ++i) {
        m.insert({departments[employees[i].getDepartmentId() - 1], employees[i]});
    }

    std::cout << "--------打印输出--------" << std::endl;
    printMap(m);

    return 0;
}
