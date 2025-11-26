#include <iostream>
using namespace std;

int main() {
    int year;
    cout<<"Year: ";
    cin>>year;

    if(year%400==0){
        cout<<"Leap Year"<<endl;
    }

    else if(year%100==0){
        cout<<"Not A Leap Year"<<endl;
    }

    else if(year%4==0){
        cout<<"Leap Year"<<endl;
    }

    else{
        cout<<"Not A Leap Year"<<endl;
    }
    return 0;
}