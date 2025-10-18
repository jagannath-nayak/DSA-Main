#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int>& q){
    stack<int> st;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        st.push(element);
    }

    while(!st.empty()){
        int element = st.top();
        st.pop();
        q.push(element);
    }
}

void ReverseQueueRC(queue<int>& q){
    // Base case
    if(q.empty()) return;
    // ek case mera
    int frontelement = q.front();
    q.pop();
    // Baki RE dekh lega
    ReverseQueueRC(q);
    // Backtracking
    q.push(frontelement);

}

void ReverseInKgroups(queue<int>& q, int k, int count){
    if(count >= k){
        stack<int> st;
        for(int i=0; i<k; i++){
            int element = q.front();
            q.pop();
            st.push(element);
        }
        for(int i=0; i<k; i++){
            int element = st.top();
            st.pop();
            q.push(element);
        }
        // ek case maine solve kar liya hai 
        // Baki RE dekh lega
        ReverseInKgroups(q, k, count - k);
    }
    else{
        // count < k
        for(int i=0; i<count; i++){
            int element = q.front();
            q.pop();
            q.push(element);
        }
    }
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80); 

    //reverseQueue(q);
    //ReverseQueueRC(q);
    
    int k = 3;
    int count = q.size(); // It tracks the number of elements to reverse
    ReverseInKgroups(q, k, count);

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }


    return 0;
}