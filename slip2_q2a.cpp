#include <iostream>
#include <string>
using namespace std;

class Media {
protected:
    int id;
    string title;

public:
    Media(int id, string title) {
        this->id = id;
        this->title = title;
    }

    virtual void display() = 0;
};

class Book : public Media {
private:
    string isbn;

public:
    Book(int id, string title, string isbn) : Media(id, title) {
        this->isbn = isbn;
    }

    void display() {
        cout << "Book ID: " << id << endl;
        cout << "Title: " << title << endl;
        cout << "ISBN: " << isbn << endl;
    }
};

class CD : public Media {
private:
    double data_capacity;

public:
    CD(int id, string title, double data_capacity) : Media(id, title) {
        this->data_capacity = data_capacity;
    }

    void display() {
        cout << "CD ID: " << id << endl;
        cout << "Title: " << title << endl;
        cout << "Data Capacity: " << data_capacity << endl;
    }
};

int main(void) {
    Media *mediaList[3];

    for (int i = 0; i < 3; i++) {
        int id;
        string title;
        int choice;

        cout << "Enter the ID for media item #" << i+1 << ": ";
        cin >> id;
        cout << "Enter the title for media item #" << i+1 << ": ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter the type of media item (1 for Book, 2 for CD): ";
        cin >> choice;

        if (choice == 1) {
            string isbn;
            cout << "Enter the ISBN for the book: ";
            cin >> isbn;

            mediaList[i] = new Book(id, title, isbn);
        } else {
            double data_capacity;
            cout << "Enter the data capacity for the CD: ";
            cin >> data_capacity;

            mediaList[i] = new CD(id, title, data_capacity);
        }
    }

    cout << endl << "List of Books:" << endl;
    for (int i = 0; i < 3; i++) {
        if (dynamic_cast<Book*>(mediaList[i])) {
            mediaList[i]->display();
        }
    }

    cout << endl << "List of CDs:" << endl;
    for (int i = 0; i < 3; i++) {
        if (dynamic_cast<CD*>(mediaList[i])) {
            mediaList[i]->display();
        }
    }
}
