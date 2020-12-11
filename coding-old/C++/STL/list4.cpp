//sorting elemets in a list
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

bool SortPredicate_Descending (const int& lhs, const int& rhs) {
    // define criteria for list::sort: return true for desired order
    return (lhs > rhs);
}


int main() {
    list <int> linkInts{ 0, -1, 2011, 444, -5 };

    cout << "Initial contents of the list are - " << endl;
    displayContents(linkInts);

    linkInts.sort ();

    cout << "Order after sort():" << endl;
    displayContents(linkInts);

    linkInts.sort (SortPredicate_Descending);
    cout << "Order after sort() with a predicate:" << endl;
    displayContents(linkInts);

    return 0;
}