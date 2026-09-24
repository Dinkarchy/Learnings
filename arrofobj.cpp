#include <iostream>
using namespace std;

class AB {
    int i;
public: 
    AB(int j) {
        i = j;
    }

    int get_i() {
        return i;
    }
};

int main() {
    AB obj[3] = {1, 2, 3};
    AB *p = obj1;

    for(int i = 0; i < 3; i++) {
        cout << obj[i].get_i() << " ";
    }
    cout << endl;

    for(int i = 0; i < 3; i++) {
        cout << (p+i)->get_i() << " ";
    }
    cout << endl;

    return 0;
}
