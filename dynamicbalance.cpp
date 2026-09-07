#include <iostream>
#include <string>
using namespace std;

class Balance {
    double current_balance;
    string name;
public:
    void set(string n, double bal) {
        name = n;
        current_balance = bal;
    }
    double get_balance() {
        return current_balance;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Current Balance: " << current_balance << endl;
    }
};

int main() {
    Balance *obj = new Balance;
    obj->set("Arun", 2500.75);
    cout << "Balance of Arun is: " << obj->get_balance() << endl;
    obj->display();
    delete obj;
    return 0;
}
