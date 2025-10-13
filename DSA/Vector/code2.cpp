#include<iostream>
#include<vector>
using namespace std;

bool search2Darray(vector<vector<int>>arr, int target){
    int rowsize=arr.size();
    int colsize=arr[0].size();

    for(int i=0; i < rowsize; i++){
        for(int j=0; j<colsize; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;

}

int main(){
    vector<vector<int> > arr(4, vector<int>(3));
    int rowsize = arr.size();
    int colsize = arr[0].size();

    for(int i=0; i < rowsize; i++){
        for(int j=0; j < colsize; j++){
            cout << "Enter the value for (" << i << "," << j << "): " << endl;
            cin >> arr[i][j];
        }
    }

    int target = 40;

    bool ans = search2Darray(arr, target);
    cout << "Ans is: " << ans;





  

}