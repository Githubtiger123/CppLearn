//
// Created by Tiger on 2024/3/9.
//


#include "string"
#include "iostream"

using namespace std;

//class Building;
//class GoodGay {
//
//    Building *building;
//public:
//    GoodGay() {
//        building = new Building();
//    }
//
//    void visit1() {
//
//        std::cout << "visit1函数访问" << building->SittingRoom << std::endl;
//        std::cout << "visit1函数访问" << building->BedRoom << std::endl;
//    }
//
//    void visit2() {
//        std::cout << "visit2函数访问" << building->SittingRoom << std::endl;
////        std::cout << "visit2函数访问" << building->BedRoom << std::endl;
//    }
//
//};
//class Building {
//
//    friend void GoodGay::visit1();
//
//private:
//    string BedRoom;
//public:
//    string SittingRoom;
//
//    Building() {
//        BedRoom = "卧室";
//        SittingRoom = "客厅";
//    }
//};

class Building;

class GoodGay {
    Building *building;
public:
    void visit1();

    void visit2();


    GoodGay();
};

class Building {

    friend void GoodGay::visit1();//成员函数做友元

private:
    string BedRoom;
public:
    string SittingRoom;

    Building();

};

Building::Building() {

    BedRoom = "卧室";
    SittingRoom = "客厅";
}

void GoodGay::visit1() {

    std::cout << "visit1函数访问" << building->SittingRoom << std::endl;
    std::cout << "visit1函数访问" << building->BedRoom << std::endl;//可以访问私有
}

void GoodGay::visit2() {
    std::cout << "visit2函数访问" << building->SittingRoom << std::endl;
//    std::cout << "visit2函数访问" << building->BedRoom << std::endl;

}

GoodGay::GoodGay() {
    building = new Building();
}


int main() {


    GoodGay *goodGay = new GoodGay();
    goodGay->visit1();
    goodGay->visit2();
    delete goodGay;
    return 0;
}

