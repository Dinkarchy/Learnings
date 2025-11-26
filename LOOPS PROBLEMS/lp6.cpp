#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter The Number:";
    cin>>n;
    int sum=0;

    for(; n>0; n=n/10){
        int digit= n%10;
        sum+= digit;
    }
    
    cout<<"The Sum Of Digits Is: "<<sum;
    return 0;
}