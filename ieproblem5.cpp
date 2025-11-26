#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Age: ";
    cin>>age;

    if(age>=18){
        cout<<"Eligible To Vote"<<endl;
    }

    else{
        cout<<"Not Eligible To Vote";
    }
    return 0;
}