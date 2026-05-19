#include <iostream>
using namespace std;

class Person {
public:
    virtual void message() {
        cout << "Message from person" << endl;
    }
};

class Joko : public Person {
public:
    void message() {
        cout << "Message from Joko" << endl;
    }
};

class Lia : public Person {
public:
    void message() {
        cout << "Message from Lia" << endl;
    }
};

int main(){
    
}