#include<iostream>
#include<stack>
#include<limits.h>
using namespace std;

bool checkSorted(stack<int>& s, int element1){
    // Base case
    if(s.empty()) return true;
    int element2 = s.top();
    s.pop();
    if(element2 < element1){
        bool aagekaAns = checkSorted(s, element2);
        return aagekaAns;
    }
    else return false;

}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(3);
    s.push(40);
    s.push(50);
    int element1 = INT_MAX;
    cout << checkSorted(s, element1) << endl;


    return 0;
}