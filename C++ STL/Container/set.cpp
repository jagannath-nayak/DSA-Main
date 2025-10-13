#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> st;
    st.insert(50);
    st.insert(40);
    st.insert(30);
    
    // if(st.find(100)!=st.end()){
    //     cout << "Found" << endl;
    // }
    // else{
    //     cout << "Not found" << endl;
    // }

    if(st.count(300)==1){
        cout << "Found" << endl;
    }
    if(st.count(300)==0){
        cout << "Not found" << endl;
    }

    // cout << st.size() << endl;
    // st.clear();
    // cout << st.size() << endl;

    // if(st.empty()){
    //     cout  << "Set is empty" << endl;
    // }
    // else{
    //     cout << "Set is not empty" << endl;
    // }

    // set<int> :: iterator it = st.begin();
    // while(it != st.end()){
    //     cout << *it << endl;
    //     it++;
    // }



    return 0;
}
