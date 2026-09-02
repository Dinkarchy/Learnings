#include <iostream>
using namespace std;

class bankAccount{
    private:
    long acNum ;
    string holderName;
    double balance = 0 ;
    public:
    bankAccount (long a, string b, double c){
        acNum = a;
        holderName = b;
        balance = c;
    }

    void deposit(double x){
        if(x<0 || x ==0){
            cout<<"Inappropriate Amount! Amount Must Be Positive"<<endl;
        }
        else{
            balance += x;
            cout<<x<<" Rs. Credited Available balance "<< balance<<endl;
        }
    }

    void withdraw(double x){
        if(x<0 || x ==0){
            cout<<"Inappropriate amount! Amount Must Be Positive"<<endl;
        }
        else if(x > balance){
            cout<<"Low balance";
        }
        else{
            balance -= x;
            cout<<x<<" Rs. debited Available balance "<< balance<<endl;
        }
    }

    void displayDetails(){
        cout<<"Account No:"<<acNum<<endl;
        cout<<"Account holder Name:"<<holderName<<endl;
        cout<<"Account Balance:"<<balance<<endl;
    }

    ~ bankAccount() {
        cout<<"Account Of: "<< holderName << " Account No: "<< acNum << " Is Closed Now"<<endl;
    }
};


int main() {
    bankAccount acc(26035,"Arun", 20342.30 );
    bankAccount acc1(26039,"Arush", 320342.30 );
    bankAccount acc2(26051,"karm", 9342.30 );

    acc1.deposit(1200);
    acc.deposit(-200);
    acc.deposit(20309);

    acc.withdraw(200);
    acc1.withdraw(500);

    acc.displayDetails();
    acc1.displayDetails();

    

    return 0;
}