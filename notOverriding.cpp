#include <iostream>
using namespace std;

class BaseClass {
public:
    virtual void introduction() final {
        cout << "Hello I am a Function from base class";
    }
};