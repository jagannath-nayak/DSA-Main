#include<iostream>
#include<queue>
using namespace std;
int main(){
    // creation
    // queue<int> q;

    queue<int> first;
    queue<int> second;

    first.push(10);
    first.push(20);

    second.push(100);
    second.push(200);

    first.swap(second);
    cout << first.front() << " " << first.back() << endl;

    // insertion
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.pop();
    // cout << q.front() << endl;
    // cout << q.back() << endl;

    // cout << q.size() << endl;
    // if(q.empty()==true){
    //     cout << "queue is empty" << endl;
    // }
    // else{
    //     cout << "queue is not empty" << endl;
    // }




    return 0;
}