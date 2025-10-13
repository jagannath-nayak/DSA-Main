// Question -> Search in a nearly/almost sorted array
#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s <= e){
        if(arr[mid]==target) return mid;
        else if(arr[mid+1]==target) return mid + 1;
        else if(arr[mid-1]==target) return mid - 1;
        else if(arr[mid]<target) s = mid + 2;
        else e = mid - 2;
        mid = s + (e-s)/2;
    } 
    return -1;
}


int main(){
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int target = 3;
    int n = sizeof(arr)/sizeof(int);
    int ans = BinarySearch(arr, n, target);
    cout << "Index found of target: " << ans << endl;
}