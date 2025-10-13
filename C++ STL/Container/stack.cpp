#include<iostream>
#include<stack>
using namespace std;
int main(){

    // creation
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.size() << endl;

    st.pop();
    cout << st.size() << endl;
    cout << st.top();



    return 0;
}