#include <iostream>
using namespace std;


const int MAX_SIZE = 10;


struct StaticList {
    int data[MAX_SIZE];
    int size;           
   
    StaticList() : size(0) {}

  
    void insert(int value) {
        if (size < MAX_SIZE) {
            data[size++] = value;
            cout << "Element inserted successfully." << endl;
        } else {
            cout << "Cannot insert. List is full." << endl;
        }
    }

   
    void remove(int value) {
        bool found = false;
        for (int i = 0; i < size; ++i) {
            if (data[i] == value) {
               
                for (int j = i; j < size - 1; ++j) {
                    data[j] = data[j + 1];
                }
                size--;
                cout << "Element removed successfully." << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Element not found in the list." << endl;
        }
    }

  
    void search(int value) const {
        bool found = false;
        for (int i = 0; i < size; ++i) {
            if (data[i] == value) {
                cout << "Element " << value << " found in the list." << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Element " << value << " not found in the list." << endl;
        }
    }

  
    void display() const {
        cout << "List Elements: ";
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    StaticList myList;


    myList.insert(10);
    myList.insert(20);
    myList.insert(30);

 
    myList.display(); 

   
    int searchValue = 20;
    myList.search(searchValue); 

  
    int removeValue = 20;
    myList.remove(removeValue); 
  
    myList.display(); 

  
    myList.insert(40);
    myList.insert(50);
    myList.insert(60);

  
    myList.display(); 
    return 0;
}
