#include<iostream>
#include<iterator>
#include<list>

using namespace std;

//function for printing the elements in a list
void showlist(list<int> g)
{
    list<int>::iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main(){
    list<int> l1, l2;
    for(int i=0; i<10; i++){
        l1.push_back(i*2);
        l2.push_back(i*3);
    }

    cout << "List 1 is: "; showlist(l1); cout << endl;
    cout << "List 2 is: "; showlist(l2); cout << endl << endl;

    cout << "l1.front(): " << l1.front() << endl;
    cout << "l1.back(): " << l1.back() << endl << endl;

    showlist(l1);
    cout << "l1.pop_front(): " << endl;
    l1.pop_front();
    showlist(l1);
    cout << "l1.pop_back(): "<< endl;
    l1.pop_back();
    showlist(l1);
    cout << endl << endl;

    showlist(l1);
    cout << "l1.reverse(): ";
    l1.reverse();
    showlist(l1);

    cout << "l1.sort(): ";
    l1.sort();
    showlist(l1);
}
