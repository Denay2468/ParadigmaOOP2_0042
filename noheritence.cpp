#include <iostream>
using namespace std;

class BaseClass final {
public:
    virtual void introduction() {
        cout << "Hello I am a Function from base class";
    }
};