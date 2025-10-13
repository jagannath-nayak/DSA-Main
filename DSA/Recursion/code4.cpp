#include<iostream>
#include<vector>
using namespace std;

bool checksorted(int arr[], int n, int index){
    // Base case
    if(index==n-1) return true; // singal element in array is treated as sorted.
    // Recursive Relation
    // Ek case mai solve karunga 
    bool meraAns = false;
    bool recursionKaAns = false;
    if(arr[index+1] > arr[index]) meraAns = true;
    // Baki recursion dekh lega
    recursionKaAns = checksorted(arr, n, index+1);
    return(meraAns && recursionKaAns);
}

void printsubsequence(string str, int i, string output, vector<string> &ans){
    // Base case
    if(i == str.length()){
    ans.push_back(output);
    return;
    }
    // Recursive relation
    char ch = str[i];
    // Include
    printsubsequence(str, i+1, output+ch, ans);
    // Exclude
    printsubsequence(str, i+1, output, ans);
}


int main(){
    // int arr[] = {10,20,30,40};
    // int n  = 4;
    // int index = 0;
    // bool ans = checksorted(arr, n, index);
    // cout << "Array is sorted or not: " << ans << endl;

    string str = "xyz";
    int i = 0;
    string output = "";
    vector<string> ans;
    printsubsequence(str, i, output, ans);
    for(auto j: ans){
        cout << j << endl;
    }


    return 0;
}