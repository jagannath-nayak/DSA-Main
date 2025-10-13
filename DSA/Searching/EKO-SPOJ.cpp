#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSol(const vector<long long int>& trees, long long int m, long long int mid){
    long long int total_treewood_collected = 0;
    for(int i=0; i<trees.size(); i++){
        if(trees[i] > mid){
            total_treewood_collected += trees[i]-mid;
        }
    }
    return total_treewood_collected >= m;
}

long long int bs(const vector<long long int> &trees, long long int m){
   long long int s = 0;
   long long int e = *max_element(trees.begin(), trees.end());
   long long int ans = -1;
    while(s <= e){
      long long int mid = s + ((e-s)>>1);
        if(isPossibleSol(trees, m, mid)){
            ans = mid;
            s = mid + 1;
        }
        else e = mid - 1;
    }
    return ans;
}


int main(){
    vector<long long int> trees = {20,15,10,17};
    long long int m = 7;
    cout << bs(trees, m) << endl;

    return 0;
}