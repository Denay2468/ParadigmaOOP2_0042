#include <iostream>
using namespace std;

class RemoteLamp {
};

int main(){
    RemoteLamp lampHouse;

    lampHouse.setSwitchNo(0, "House Porch Lamp");
    lampHouse.setSwitchNo(1, "Living Room Lamp");
    lampHouse.setSwitchNo(2, "Bedroom Lamp");
    lampHouse.setSwitchNo(3, "Kitchen Lamp");
}