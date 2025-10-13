#include<iostream>
using namespace std;

// Iterative way
int binarysearch(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = s + ((e-s)>>1);
        if(target==arr[mid]) return mid;
        else if(target > arr[mid]) s = mid + 1;
        else e = mid - 1;
    }
    return -1;
}

int BinarySearchRecursive(int arr[], int n, int target, int s, int e){
    // Base case
    if(s > e) return -1;
    // Recursive relation
    // ek case mai solve karunga
    int mid = s + ((e-s)>>1);
    if(arr[mid]==target) return mid;
    // Baki recursion dekh lega
    if(target > arr[mid]) return BinarySearchRecursive(arr, n, target, mid + 1, e);
    else return BinarySearchRecursive(arr, n, target, s, mid -1);
}

void Printdigits(int n){
    // Base case
    if(n==0) return;
    // Baki recursion kardega
    int leftpart = n/10;
    Printdigits(leftpart);
    // Ek case mai karunga
    n = n % 10;
    cout << n << " ";
}

int main(){
    // int arr[] = {10,20,30,40,50,60};
    // int n = 6;
    // int target = 20;
    // int s = 0;
    // int e = n-1;
    // int ans = binarysearch(arr, n, target);
    // cout << "Target Index: " << ans << endl;

    // int ans = BinarySearchRecursive(arr, n, target, s, e);
    // cout << "Target Index: " << ans << endl;

    Printdigits(21478);




    return 0;
}