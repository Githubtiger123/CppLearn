#include <istream>
#include <iostream>
#include "string"
using namespace std;
class Build;//类的声名

class Build{
    friend class goodGay;//生命有缘类，一便可以访问私有属性

public:
    string sittingRoom;
private:
    string bedRoom;
public:
    Build(){
        sittingRoom = "客厅";
        bedRoom = "卧室";
    }
};
class goodGay{

public:
    Build* build;
    goodGay(){
        build = new Build();
    }

    void visit(){
        std::cout << "好基友正在访问:" << build->sittingRoom << std::endl;
        std::cout << "好基友正在访问:" << build->bedRoom << std::endl;//私有属性不能访问
    }
};



int main() {

    goodGay * goodgay = new goodGay();

    goodgay->visit();
    return 0;
}


