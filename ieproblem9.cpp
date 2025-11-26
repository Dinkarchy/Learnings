#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Cost Price: ";
    cin>>a;

    cout<<"Selling Price: ";
    cin>>b;

    if(a>b){
        cout<<"Loss";
    }

    else if(a<b){
        cout<<"Profit";
    }

    else{
        cout<<"No Profit No Loss";
    }
    return 0;
}