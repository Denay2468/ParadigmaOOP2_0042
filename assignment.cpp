#include <iostream>
using namespace std;


class BankAccount {
protected:
    string ownerName;
    double balance;

public:
    BankAccount(string name, double balance) {
        this->ownerName = name;
        this->balance = balance;
    }

    virtual void cutAdmin() = 0;

    void displayInfo() {
        cout << "Account Owner : " << ownerName << endl;
        cout << "Balance       : Rp " << balance << endl;
    }

    virtual ~BankAccount() {}
};

class ShariaAccount : public BankAccount {
public:
    ShariaAccount(string name, double balance)
        : BankAccount(name, balance) {}

    void cutAdmin() override {
        cout << "[Sharia Account] No admin fee deducted. "
             << "Balance remains intact." << endl;
    }
};

class ConventionalAccount : public BankAccount {
private:
    const double ADMIN_FEE = 15000;

public:
    ConventionalAccount(string name, double balance)
        : BankAccount(name, balance) {}

    void cutAdmin() override {
        balance -= ADMIN_FEE;
        cout << "[Conventional Account] Admin fee of Rp 15,000 deducted." << endl;
    }
};

class PremiumAccount : public BankAccount {
private:
    const double THRESHOLD  = 10000000;
    const double ADMIN_FEE  = 50000;

public:
    PremiumAccount(string name, double balance)
        : BankAccount(name, balance) {}

    void cutAdmin() override {
        if (balance > THRESHOLD) {
            cout << "[Premium Account] Balance above Rp 10,000,000. "
                 << "No admin fee deducted." << endl;
        } else {
            balance -= ADMIN_FEE;
            cout << "[Premium Account] Balance <= Rp 10,000,000. "
                 << "Admin fee of Rp 50,000 deducted." << endl;
        }
    }
};

int main() {

    BankAccount* accounts[4];

    accounts[0] = new ShariaAccount("Ahmad Fauzi", 5000000);
    accounts[1] = new ConventionalAccount("Budi Santoso", 2000000);
    accounts[2] = new PremiumAccount("Citra Dewi", 15000000); 
    accounts[3] = new PremiumAccount("Doni Pratama", 8000000); 

    cout << "===== BANK GIBRAN JAYA =====" << endl;
    cout << "  End-of-Month Admin Processing" << endl;
    cout << "================================" << endl;

    for (int i = 0; i < 4; i++) {
        cout << "\n--- Processing Account " << i + 1 << " ---" << endl;
        accounts[i]->displayInfo();
        accounts[i]->cutAdmin();
        cout << "Balance After : Rp " << endl;
        accounts[i]->displayInfo();
    }

    for (int i = 0; i < 4; i++) {
        delete accounts[i];
    }

    return 0;
}