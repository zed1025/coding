#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long x, y, z, t1, t2, t3;

    cin >> x >> y >> z >> t1 >> t2 >> t3;
    long S, E; //time taken using stairs and elevators
    S = abs(x-y) * t1;
    E = (abs(x-z) + abs(x-y))*t2 + 3*t3;
	
	//cout << "S=" << S << "\tE=" << E << endl;
	
    if(S >= E){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
}
