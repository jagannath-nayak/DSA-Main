#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

void nextSmallerElement(vector<int>& v, stack<int>& s, vector<int>& ans){
    int n = v.size();
    for(int i=n-1; i>=0; i--){
        int element = v[i];
        while(s.top() > element){
            s.pop();
        }
        if(s.top() < element){
            ans.push_back(s.top());
            s.push(element);
        }
    }
}

void prevSmallerElement(vector<int>& v, stack<int>& s, vector<int>& ans){
    int n = v.size();
    for(int i=0; i<n; i++){
        int element = v[i];
        while(s.top() > element){
            s.pop();
        }
        if(s.top() < element){
            ans.push_back(s.top());
            s.push(element);
        }
    }
}

int main(){
    // input - vector
    vector<int> v;
    v.push_back(8);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    stack<int> s;
    s.push(-1);
    vector<int> ans;
    //nextSmallerElement(v, s, ans);
    prevSmallerElement(v, s, ans);
    reverse(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}