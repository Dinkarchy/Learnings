#include <iostream>
using namespace std;

class CircularQueue{
    private:
    int *arr;
    int capacity;
    int f,r;
    int count;  
    
    public:
    CircularQueue(int size){
        capacity = size;
        arr = new int[capacity];
        f=0;
        r=-1;
        count = 0;
    }
    bool isFull(){
        if(count == capacity){
            return 1;
        }
        else{
            return 0;
        }
    }
    bool isEmpty(){
        if(count == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    void Enqueue(int x){
        if(isFull){
            cout<<"Overflow";
        }

        r=(r+1)%capacity;
        arr[r] =x;
        count++;
    }
    int Dequeue(int x){
        if(isEmpty){
            cout<<"Underflow";
        }
        
        int temp = arr[f];
        f = (f+1)%capacity;
        if(f>r){
            f=0;
            r = -1;
        }
        count--;
        return temp;
        }


};



int main() {
    
    return 0;
}