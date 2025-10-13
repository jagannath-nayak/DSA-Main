#include<iostream>
#include<queue>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(100);
    dq.push_front(200);

    dq.pop_front();
    dq.pop_back();

    // cout << dq.size() << endl;
    // cout << dq.front() << endl;
    // cout << dq.back() << endl;

    // deque<int> :: iterator it = dq.begin();
    // while(it != dq.end()){
    //     cout << *it << " " << endl;
    //     it++;
    // }

    // cout << dq[0] << endl;

    dq.insert(dq.begin(), 101);
    cout << dq[0] << endl;





    return 0;
}