#include <iostream>
using namespace std;

int main() {
    int temp;
    cout<<"Temperature: ";
    cin>>temp;

    if(temp>0){
        cout<<"Positive"<<endl;
    }

    else if(temp==0){
        cout<<"Zero"<<endl;
    }

    else{
        cout<<"Negative"<<endl;
    }
    return 0;
}