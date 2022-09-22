#include <iostream>
using namespace std;

struct Book {
    string tittle, author, publisher;
    int yearOfPublishing;

};

int main() {
    int n;
    cin >> n;
    Book books[n];

    for (int i = 0; i < n; i++)
    {
        cin >> books[i].tittle >> books[i].author >> books[i].publisher >> books[i].yearOfPublishing;    
    }

    int year;
    cin >> year;

    for (int i = 0; i < n; i++)
    {
        if(books[i].yearOfPublishing == year) {
            cout << books[i].tittle << " ";
        }
    }
}