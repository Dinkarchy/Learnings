#include <iostream>
using namespace std;


class count{
    public: 
    int normalcount =0;
    static int scount;

    count(){
        normalcount++;
        scount++;
    }

    static void display(){
        
        cout<<"Static count: "<<scount<<endl  ;
    }
};
int count :: scount=0;

int main() {
    count obj,obj1, obj2, obj3;

    obj.display();
    count :: display();
    return 0;
}