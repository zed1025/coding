#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<string>

using namespace std;

//suppose we want to sort the 'person' structure based on p_id
struct person{
    int p_id;
    string name;
};

void display_person(person p){
    cout << "ID: " << p.p_id << endl;
    cout << "Name: " << p.name << endl;
}


//comparison function for sort
bool comp_func(person a, person b){
    return (a.p_id > b.p_id);
    //return (a.p_id < b.p_id);     //for increasing order
}

int main(){
    vector<person> persons;
    for(int i=0; i<3; i++){
        person p;
        cout << "Enter ID: ";
        (cin >> p.p_id).get();
        cout << "Enter name: ";
        getline(cin, p.name);

        persons.push_back(p);
    }

    for(int i=0; i<persons.size(); i++){
        display_person(persons[i]);
    }

    sort(persons.begin(), persons.end(), comp_func);

    for(int i=0; i<persons.size(); i++){
        display_person(persons[i]);
    }

}
