#include<iostream>
#include<algorithm>
using namespace std;

void ReverseArray(int arr[], int n){
    int l = 0;
    int h = n-1;
    // while(l < h){
    //     swap(arr[l], arr[h]);
    //     l++;
    //     h--;
    // }

    while(l < h)
    swap(arr[l++], arr[h--]);
}


int main(){

    int arr[8] = {10,20,30,40,50,60,70,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    ReverseArray(arr, n);
    for(int i = 0;  i < n; i++){
        cout << arr[i] << " " ;
    }
}