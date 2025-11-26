#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"N: ";
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++)
    sum+=i;
    cout<<"The Sum Of N Digits Is: "<<sum<<endl;

    return 0;
}