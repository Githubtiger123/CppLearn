//
// Created by Tiger on 2024/3/19.
//

#include <iostream>

class CPU {

public:
    virtual void calculate() = 0;

    virtual ~CPU() {

    }
};

class GPU {

public:
    virtual void display() = 0;

    virtual ~GPU() {


    }
};

class Memory {

public:
    virtual void IO() = 0;

    virtual ~Memory() {

    }
};

class Intel : public GPU, public CPU, public Memory {

public:
    void calculate() override {

        std::cout << "Intel CPU 正在进行逻辑运算" << std::endl;
    }

    void display() override {

        std::cout << "Intel GPU 正在进行图像处理" << std::endl;

    }

    void IO() override {

        std::cout << "Intel Memory 正在进行IO存取" << std::endl;
    }

    ~Intel() override {

    }

};

class Lenovo : public GPU, public CPU, public Memory {
public:
    void calculate() override {

        std::cout << "Lenovo CPU 正在进行逻辑运算" << std::endl;
    }

    void display() override {

        std::cout << "Lenovo GPU 正在进行图像处理" << std::endl;

    }

    void IO() override {

        std::cout << "Lenovo Memory 正在进行IO存取" << std::endl;
    }

    ~Lenovo() override {

    }
};


class Asus : public GPU, public CPU, public Memory {
public:
    void calculate() override {

        std::cout << "Asus CPU 正在进行逻辑运算" << std::endl;
    }

    void display() override {

        std::cout << "Asus GPU 正在进行图像处理" << std::endl;

    }

    void IO() override {

        std::cout << "Asus Memory 正在进行IO存取" << std::endl;
    }

    ~Asus() override {

    }
};

class Computer {

public:

    CPU *cpu;
    GPU *gpu;
    Memory *memory;

    void assembleComputer(CPU *cpu, GPU *gpu, Memory *memory) {

        this->cpu = cpu;
        this->gpu = gpu;
        this->memory = memory;
    }

    void doWork() {
        cpu->calculate();
        gpu->display();
        memory->IO();
    }

    virtual ~Computer() {

        std::cout << "coputer析构函数" << std::endl;
        if (cpu != nullptr) {
            delete cpu;
            cpu = nullptr;
        }

        if (gpu != nullptr) {
            delete gpu;
            gpu = nullptr;
        }

        if (memory != nullptr) {
            delete memory;
            memory = nullptr;
        }
    }
};

int main() {

    Computer *computer = new Computer();

    computer->assembleComputer(new Intel, new Asus, new Lenovo);
    computer->doWork();

    delete computer;

    return 0;
}
