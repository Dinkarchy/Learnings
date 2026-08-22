#include <iostream>
using namespace std;

struct ele{
    int data;
    int prior;
};

ele val;

class priorityQue{
    private: 
    ele *arr;
    int capacity;
    int count;

    public:
    priorityQue(int size){
        capacity = size;
        arr = new ele[capacity];
        count =0;
    }

    bool isFull(){
        if(count == capacity -1){
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

    void Enqueue(int x, int y){
        if(isFull()){
            cout<<"Overflow Cond.";
        }

        int i = count-1;

        while(i>=0 && arr[i].prior>y){
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1].data = x;
        arr[i+1].prior = y;
        count++;
    }

    ele Dequeue(){
        if(isEmpty()){
            cout<<"Underflow";
        }
        ele temp = arr[count-1];
        count--;
        return temp;
    }

    int peak(){
        return (arr[count-1].data);
    }
};



int main() {
    priorityQue pque(4);
    pque.Enqueue(10,4);
    pque.Enqueue(20,1);
    pque.Enqueue(30,4);
    cout << pque.Dequeue().data<<endl;
    cout<< pque.peak();


    return 0;
}