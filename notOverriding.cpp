#include <iostream>
using namespace std;

class BaseClass {
public:
    virtual void introduction() final {
        cout << "Hello I am a Function from base class";
    }
};

class DerivedClass : public BaseClass {
public:
    void introduction1() {
        cout << "Hello I am a Function from derived Class";
    }
};

int main (){
    
}