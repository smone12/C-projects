#include <bits/stdc++.h>
using namespace std;

string title;
string author;
bool isBorrowed;
int wtd; // Variable to store the user's choice

void menu();
void addBook();
void delBook();
void searchBook();
void borrowBook();
void returnBook();
void displayBook();
void saveLoadBook();
void handleChoice(); // Renamed function

int main(){
    while(true){
        menu();
    }
}

void menu(){
    cout << "\n\n" << "======= Menu =======" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Delete Book" << endl;
    cout << "3. Search For Books" << endl;
    cout << "4. Borrow Book" << endl;
    cout << "5. Return Book" << endl;
    cout << "6. Display All Books" << endl;
    cout << "7. Save and Load Books From a File" << endl;
    cout << "8. Exit" << endl;
    cout << "====================" << endl;
    cout << "What to do (1-8): ";
    cin >> wtd;

    handleChoice(); // Call the function to handle the user's choice
}

void handleChoice() {
    
}

// Dummy function definitions
void addBook() { cout << "Adding book..." << endl; }
void delBook() { cout << "Deleting book..." << endl; }
void searchBook() { cout << "Searching book..." << endl; }
void borrowBook() { cout << "Borrowing book..." << endl; }
void returnBook() { cout << "Returning book..." << endl; }
void displayBook() { cout << "Displaying books..." << endl; }
void saveLoadBook() { cout << "Saving and loading books..." << endl; }