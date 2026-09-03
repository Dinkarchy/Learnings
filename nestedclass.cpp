#include <iostream>
using namespace std;

class A{
    int pin = 123;

    class B{
        float p;
        string name;

        public:
        void getData(float price, string n){
            p = price;
            name = n;
        }

        void display(A &obj){
            cout<<p<<endl<<name<<endl;
            cout<<obj.pin;
        }
    };

    public:
    void access(){
        B obj;
        obj.getData(24.3, "abcd");
        obj.display(*this);
    }
};

int main() {
    A a;
    a.access();
    return 0;
}