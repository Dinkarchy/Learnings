#include <iostream>
using namespace std;

class Book{
    string name;
    string bookId;
    int price;

    Book(string k, string l, int m){
        name = k;
        bookId= l;
        price =m;
    }

    Book(Book &obj){
        name = obj.name;
        bookId = obj.bookId;
        price = obj.price;
    }
};

int main() {
    Book obj1("Great" , "B2411", 329);
    
    return 0;
}