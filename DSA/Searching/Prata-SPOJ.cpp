#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSol(vector<int> &cookranks, int nP, int mid){
    int currP = 0;
    for(int i=0; i<cookranks.size(); i++){
        int R = cookranks[i], j = 1, Timetaken = 0;
        while(true){
        if(Timetaken + R*j <= mid){
            currP++;
            Timetaken += R*j;
            j++;
        }
        else break;
        if(currP >= nP) return true;
        }
    }    
    return false;
}

int bs(vector<int> &cookranks, int nP){
    int s = 0;
    int highest_rank = *max_element(cookranks.begin(), cookranks.end());
    int e = highest_rank*(nP*(nP+1)/2);
    int ans = -1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(isPossibleSol(cookranks, nP, mid)){
            ans = mid;
            e = mid - 1;
        }
        else s = mid + 1;
    }
    return ans;

}

int main(){
    int nP = 10;
    vector<int> cookranks = {1,2,3,4};
    cout << bs(cookranks,nP);

    return 0;
}