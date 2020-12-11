//implementing a linked list
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};

int main() {
    char con = 'y';
    int data;
    cout << "Enter data: ";
    cin >> data;
    node* n = new node(data);
    node* x = n;
    cout << "Continue?(y/n): ";
    cin >> con;
    while(con == 'y') {
        cout << "Enter data: ";
        cin >> data;
        node* t = new node(data);
        x->next = t;
        x = t;
        cout << "Continue?(y/n): ";
        cin >> con;
    }

    //printing the linked list
    cout << "\n\nThe linked list has the following items: ";
    x = n;
    do {
        cout << x->data << " ";
        x = x->next;
    } while (x != NULL);
    cout << endl;
    return 0;
}