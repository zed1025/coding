#include<iostream>
#include<vector>

#define pb push_back

using namespace std;

// struct plain{
//     int x, y;

//     plain(int a, int b) {
//         x = a; y = b;
//     }
//     bool operator < (const plain &p) {
//         if (x != p.x) return x < p.x;
//         else return y < p.y;
//     }
// };

struct point{
    int x, y;
    point(int a, int b):x(a), y(b) {}
};

//NOTE the comparison operator could be a member of the class as shown in the commented code above
bool comparator(point a, point b) { //comparison operator >
    if(a.x != b.x) return a.x < b.x;
    else return a.y < b.y;  
}

int main() {
    vector<point> p;
    p.pb(point(2, 3));
    p.pb(point(1, 4));
    p.pb(point(3, 5));
    p.pb(point(3, 8));
    cout << "Before sorting the points are: \n";
    for(int i=0; i<4; i++) {
        cout << "(" << p[i].x << ", " << p[i].y << ")\n";
    }

    //sorting
    sort(p.begin(),p.end(), comparator);

    cout << "\nAfter Sorting: \n";
    for(int i=0; i<4; i++) {
        cout << "(" << p[i].x << ", " << p[i].y << ")\n";
    }
}