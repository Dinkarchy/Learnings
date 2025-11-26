#include <iostream>
using namespace std;

int main() {
    int n, original, rev=0;
    cout<<"Enter a number:" ;
    cin>>n;

    original=n;

    for(; n!=0; n=n/10){
        int digit= n%10;
        rev=rev*10+digit;

    }

    if(original==rev)
    cout<<original<<" is palindrome number";
    else
    cout<<original<< " is not a palindrome";
    return 0;
}