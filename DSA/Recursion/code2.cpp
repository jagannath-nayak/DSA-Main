#include <iostream>
#include <limits.h>
using namespace std;

void printArray(int arr[], int n, int index){
    // Base case
    if(index==n) return;
    // Recursive relation
    // ek case mai karunga
    cout << arr[index] << " ";
    // Baki ka case recursion dekh lega
    printArray(arr, n, index+1);
}

bool SearchInArray(int arr[], int n, int index, int target){
    // Base case
    if(index==n) return false;
    // Recursive relation
    // 1 case mai solve karunga
    if(arr[index]==target) return true;
    // Baki recursion dekh lega
    bool ans = SearchInArray(arr, n, index+1, target);
    return ans;

}

void MaxNumber(int arr[], int n, int& ans, int index){
    // Base case
    if(index==n) return;
    // Recursive relation
    // ek case mai karunga 
    ans = max(ans, arr[index]);
    // Baki recursion dekh lega
    MaxNumber(arr, n, ans, index+1);

}

void printAllodd(int arr[], int n, int index){
    // Base case
    if(index==n) return;
    // Recursive relation
    // ek case mai karunga
    if(arr[index]%2==0) cout << arr[index] << " ";
    // Baki recursion dekh lega
    printAllodd(arr, n, index+1);

}

int main(){
    int arr[] = {11,12,13,14,15,16};
    int n = 6;
    int index = 0;
    //int ans = INT_MIN;
    //int target = 500;

    //printArray(arr, n, index);

    //cout << SearchInArray(arr, n, index, target);

    // MaxNumber(arr, n, ans, index);
    // cout << "Max no: " << ans;

    printAllodd(arr, n, index);
    







    return 0;
}