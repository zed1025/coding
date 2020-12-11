#include<iostream>
#include<stack>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    stack<int> st;
    for(int i=0; i<10; i++){
        st.push(rand() % 200);
    }

    //printing stack size
    cout << "Stack size is: " << st.size() << endl;
    cout << "Top of stack is: " << st.top() << endl;

    cout << "Is stack empty? : " << st.empty() << endl;
    cout << "Top of stack is: " << st.top() << endl;
    st.pop();
    cout << "Top of stack is: " << st.top() << endl;

}
