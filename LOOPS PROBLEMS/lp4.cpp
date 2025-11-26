#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"N:";
    cin>>n;

    int count=0;
    if(n<0){
        n=-n;
    }

    if(n==0){
        count=1;
    }

    else{
        for(; n>0; n=n/10){
            count++;
        }
    }

    cout<<"The Number Of Digits: "<<count;
    return 0;
}