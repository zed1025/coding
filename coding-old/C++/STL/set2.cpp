//inserting elements in set or multiset
#include<set>
#include<iostream>
using namespace std;

template<typename t>
void DisplayContainer(const t& c) {
    for(auto i=c.cbegin(); i != c.cend(); ++i) {
        cout << *i << " ";
    } cout << endl;
}

int main() {
    // both set and multiset use insert for insertion.
    // there is no push_back() or push_front() as elements will be sorted once inserted
    set<int> setInts {202, 151, -999, -1};
    setInts.insert(-1); //duplicate, sso wont be inserted
    cout << "Contents of the set are: " << endl;
    DisplayContainer(setInts);

    multiset<int> msetInts;
    msetInts.insert(setInts.begin(), setInts.end());
    msetInts.insert(-1); //duplicate

    cout << "Contents of the multiset: " << endl;
    DisplayContainer(msetInts);

    cout << "Number of instances of '-1' in the multiset are: '";
    cout << msetInts.count(-1) << "'" << endl;

    return 0;
}
