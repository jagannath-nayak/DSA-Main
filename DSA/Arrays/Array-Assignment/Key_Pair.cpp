#include<iostream>
#include<algorithm>
using namespace std;

bool KeyPair(int arr[], int size, int x){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j]==x){
                return true;
            }
        }
    }
    return false;
}

bool OAforkeypair(int arr[], int n, int x){
    int l=0;
    int h=n-1;
    while(l < h){
    int csum = arr[l]+arr[h];
    if(csum==x) return true;
    else if(csum > x) h--;
    else l++;
    }
    return false;
}

int main(){
    int arr[] = {1,4,45,6,10,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 16;
    sort(arr, arr+n);

    // bool ans = KeyPair(arr, size, x);
    // cout << "Ans: " << ans;

   bool ans =  OAforkeypair(arr, n, x);
   cout << ans;

}