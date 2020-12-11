//using unordered_map
#include<unordered_map>
#include<string>
#include<iostream>
using namespace std;

template<typename t1, typename t2>
void DisplayUnorderedMap(unordered_map<t1, t2>& cont) {
    cout << "Unordered Map contains: " << endl;
    for (auto i=cont.begin(); i!=cont.end(); ++i) {
        cout << i->first << " -> " << i->second << endl;
    }
    cout << "Number of pairs, size(): " << cont.size() << endl;
    cout << "Bucket count = " << cont.bucket_count() << endl;
    cout << "Current load factor: " << cont.load_factor() << endl;
    cout << "Max load factor = " << cont.max_load_factor() << endl;
}

int main() {
    unordered_map<int, string> umapIntToStr;
    umapIntToStr.insert(make_pair(1, "One"));
    umapIntToStr.insert(make_pair(45, "Forty Five"));
    umapIntToStr.insert(make_pair(1001, "Thousand One"));
    umapIntToStr.insert(make_pair(-2, "Minus Two"));
    umapIntToStr.insert(make_pair(-1000, "Minus One Thousand"));
    umapIntToStr.insert(make_pair(100, "One Hundred"));
    umapIntToStr.insert(make_pair(12, "Twelve"));
    umapIntToStr.insert(make_pair(-100, "Minus One Hundred"));

    DisplayUnorderedMap<int, string>(umapIntToStr);

    cout << "Inserting one more element" << endl;
    umapIntToStr.insert(make_pair(300, "Three Hundred"));
    DisplayUnorderedMap<int, string>(umapIntToStr);

    cout << "Enter key to find for: ";
    int Key = 0;
    cin >> Key;

    auto element = umapIntToStr.find(Key);
    if (element != umapIntToStr.end())
        cout << "Found! Key pairs with value " << element->second << endl;
    else
        cout << "Key has no corresponding pair value!" << endl;

    return 0;
}