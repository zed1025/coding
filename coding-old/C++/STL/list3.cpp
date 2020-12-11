//reversing elements in a list
#include<iostream>
#include<list>
using namespace std;

//function to display containers like vectors, list and deque
template<typename t>
void displayContents(const t& container) {
    for(auto i=container.cbegin(); i != container.cend(); ++i) {
        cout << *i << " ";
    }cout << endl;
}
int main() {
    std::list<int> linkInts{ 0, 1, 2, 3, 4, 5 };

    cout << "Initial contents of list:" << endl;
    displayContents(linkInts);

    linkInts.reverse();

    cout << "Contents of list after using reverse():" << endl;
    displayContents(linkInts);

    return 0;
}