#include <iostream>
using namespace std;

class RemoteLamp {
private:
    string switchNames[4];

public:
    void setSwitchNo(int no, string name) {
        switchNames[no] = name;
    }

    string getSwitchNo(int no) {
        return switchNames[no];
    }
};

int main(){
    RemoteLamp lampHouse;

    lampHouse.setSwitchNo(0, "House Porch Lamp");
    lampHouse.setSwitchNo(1, "Living Room Lamp");
    lampHouse.setSwitchNo(2, "Bedroom Lamp");
    lampHouse.setSwitchNo(3, "Kitchen Lamp");

    cout << lampHouse.getSwitchNo(0) << endl;
    cout << lampHouse.getSwitchNo(1) << endl;
    cout << lampHouse.getSwitchNo(2) << endl;
    cout << lampHouse.getSwitchNo(3) << endl;

    return 0;
}