//
// Created by Tiger on 2024/3/19.
//

#include <iostream>

class AbstractDrink {

public:
    virtual void Boil() = 0;

    virtual void Brew() = 0;

    virtual void PourInCup() = 0;

    virtual void PutSomething() = 0;

    void getDrink() {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};

class MakeCoffe : public AbstractDrink {
public:
    void Boil() override {

        std::cout << "咖啡煮水" << std::endl;
    }

    void Brew() override {

        std::cout << "冲泡咖啡" << std::endl;
    }

    void PourInCup() override {

        std::cout << "导入咖啡杯" << std::endl;
    }

    void PutSomething() override {
        std::cout << "放入牛奶" << std::endl;
    }
};


class MakeTea : public AbstractDrink {
public:
    void Boil() override {

        std::cout << "茶煮水" << std::endl;
    }

    void Brew() override {

        std::cout << "冲泡茶叶" << std::endl;
    }

    void PourInCup() override {

        std::cout << "导入茶壶" << std::endl;
    }

    void PutSomething() override {
        std::cout << "放入枸杞" << std::endl;
    }
};

void doWork(AbstractDrink *abstractDrink) {

    abstractDrink->getDrink();
    delete abstractDrink;
}


int main() {


    MakeCoffe *makeCoffe = new MakeCoffe();
    MakeTea *makeTea = new MakeTea();
    doWork(makeCoffe);
    std::cout << "_________________________" << std::endl;
    doWork(makeTea);
    return 0;
}
