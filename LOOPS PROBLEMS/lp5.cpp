#include <iostream>
using namespace std;

int main() {
    int n, rev=0;
    cout<<"Enter A Number:";
    cin>>n;

    for(; n!=0; n/=10){
        int digit = n%10;
        rev=rev*10+digit;
    }

    cout<<"The Reversed Number Is:"<<rev<<endl;

    return 0;
}