#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter The Number: ";
    cin>>n;

    int fact=1;

    for(int i=n; i>0; i-- ){
        fact*=i;
    }

    cout<<"The Factorial Of "<<n <<" Is: "<< fact;
    return 0;
}