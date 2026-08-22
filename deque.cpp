#include <iostream>
using namespace std;

class ArrayDeque{
private:
    int *arr;
    int capacity;
    int f, r;
    int count;
public:
    bool isEmpty(){
        if(count == 0){
            return 1;
        }
        else{
            return 0;
        }
    }

    bool isFull(){
        if(count == capacity){
            return 1;
        }
        else{
            return 0;
        }
    }

    void EnqueueFront(int x){
        if(isFull){
            cout<<"Overflow";
        }
        if(isEmpty){
            
        
        }
    }
};

int main() {
    
    return 0;
}