//
// Created by Tiger on 2024/3/18.
//

#include <iostream>
#include "string"

class Calculator {

public:
    int num1;
    int num2;

    Calculator(int num1, int num2) : num1(num1), num2(num2) {
    }

    int Addition() {
        return num1 + num2;
    }

    int Subtraction() {
        return num1 - num2;
    }

    int Multiplication() {
        return num1 * num2;
    }

    int Division() {
        return num1 / num2;
    }

    int getResult(std::string oper) {

        if (oper == "+") {
            return Addition();
        } else if (oper == "-") {
            return Subtraction();
        } else if (oper == "*") {
            return Multiplication();
        } else if (oper == "/") {
            return Division();
        }
        return 0;
    }
};

class AbstractCalculator {

public:
    int num1 = 0;
    int num2 = 0;

    AbstractCalculator(int num1, int num2) : num1(num1), num2(num2) {}

    virtual int getResult() {

    }
};


class AddCalculator : public AbstractCalculator {
public:
    //必须显式调用构造函数
    //一个子类没有任何属性时也要显示调用弗雷德构造方法
    AddCalculator(int num1, int num2) : AbstractCalculator(num1, num2) {}

    int getResult() override {
        return num1 + num2;
    }
};

class SubCalculator : public AbstractCalculator {
public:
    SubCalculator(int num1, int num2) : AbstractCalculator(num1, num2) {}

    int getResult() override {
        return num1 - num2;
    }
};


class MulCalculator : public AbstractCalculator {
public:
    MulCalculator(int num1, int num2) : AbstractCalculator(num1, num2) {}

    int getResult() override {
        return num1 * num2;
    }
};

class DivCalculator : public AbstractCalculator {
public:
    DivCalculator(int num1, int num2) : AbstractCalculator(num1, num2) {}

    int getResult() override {
        return num1 / num2;
    }
};


int main() {

    Calculator calculator(20, 10);
    std::cout << calculator.Addition() << std::endl;
    std::cout << calculator.Subtraction() << std::endl;
    std::cout << calculator.Multiplication() << std::endl;
    std::cout << calculator.Division() << std::endl;


    //通过多态的方式实现计算器有利于，添加代码方便，结构清晰
    AbstractCalculator *addCalculator = new AddCalculator(20, 10);
    AbstractCalculator *subCalculator = new SubCalculator(20, 10);
    AbstractCalculator *mulCalculator = new MulCalculator(20, 10);
    AbstractCalculator *divCalculator = new DivCalculator(20, 10);
    int res = addCalculator->getResult();
    std::cout << res << std::endl;
    std::cout << subCalculator->getResult() << std::endl;
    std::cout << mulCalculator->getResult() << std::endl;
    std::cout << divCalculator->getResult() << std::endl;
    delete addCalculator;
    delete subCalculator;
    delete mulCalculator;
    delete divCalculator;
    return 0;
}

