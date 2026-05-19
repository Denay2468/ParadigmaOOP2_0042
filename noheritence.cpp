#include <iostream>
using namespace std;

class BaseClass final {
public:
    virtual void introduction() {
        cout << "Hello I am a Function from base class";
    }
};

class BaseClass1 {
public:
    virtual void introduction() {
        cout << "Hello I am a Function from base class";
    }
};

class DerivedClass : public BaseClass1 {
public:
    void introduction() {
        cout << "Hello I am a Function from derived Class";
    }
};

int main(){
    DerivedClass a;
    a.introduction();

    return 0;
}