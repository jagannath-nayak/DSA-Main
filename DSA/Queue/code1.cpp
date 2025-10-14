#include<iostream>
#include<queue>
using namespace std;
int main(){
    // queue<int> q;
    // // insertion
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // cout << q.front() << endl;
    // // removal
    // q.pop();
    // cout << q.front() << endl;
    // // size
    // cout << q.size() << endl;
    // // rear end
    // cout << q.back() << endl;

    // doubly ended queue
    deque<int> dq;
    // insertion 
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_back(70);
    dq.push_back(80);
    cout << dq.size() << endl;
    cout << dq.front() << endl;
    cout << dq.back() << endl;
    
    dq.pop_front();
    dq.pop_back();

    cout << dq.front() << endl;
    cout << dq.back() << endl;



    


    return 0;
}