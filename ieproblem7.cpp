#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter The Marks: ";
    cin>>n;

    if(n>=90&&n<=100){
        cout<<"A";
    }

    else if(n>=75&&n<=89){
        cout<<"B";
    }

    else if(n>=60&&n<=74){
        cout<<"C";
    }

    else if(n>=45 && n<=59){
        cout<<"D";
    }

    else{
        cout<<"Fail";
    }
    return 0;
}