#include <iostream>
using namespace std;

int main() {
    int n,i;
    cout<<"N:";
    cin>>n;

    cout << "The Multiplication Table Of "<<n<<endl;
    for( i=1; i<=10; i++){
    cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }

    return 0;
}