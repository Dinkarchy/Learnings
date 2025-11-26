#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter The Time: ";
    cin>>n;

    if(n>=5&&n<=11){
        cout<<"Morning";
    }

    else if(n>=12&&n<=16){
        cout<<"Afternoon";
    }

    else if(n>=17&&n<=20){
        cout<<"Evening";
    }

    else{
        cout<<"Night";
    }
    return 0;
}