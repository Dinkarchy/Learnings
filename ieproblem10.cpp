#include <iostream>
using namespace std;

int main() {
    int a,b,c;

    cout<<"Enter First Side: ";
    cin>>a;
    cout<<"Enter Second Side: ";
    cin>>b;
    cout<<"Enter Third Side: ";
    cin>>c;

    if(a+b>c && a+c>b && b+c>a ){

        if(a==b&&a==c){
        cout<<"Equilateral";
        }

        else if(a==b&&a!=c || a==c&&c!=b || b==c&&c!=a ){
        cout<<"Isoceles";
        }

        else if(a!=b!=c){
        cout<<"Scalene";
        }

    }

    
    else{
        cout<<"Not A Triangle";
    }

    
    return 0;
}