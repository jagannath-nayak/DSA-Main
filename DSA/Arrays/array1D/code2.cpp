#include <iostream>
#include <algorithm>
using namespace std;

void solve(int arr[], int size){
    for(int i = 0; i < size; i++){
       arr[i] = arr[i] * 10;
    }
}
void print(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " " ;
    }
}

bool findtarget(int arr[], int size, int target ){
    for(int i = 0; i < size; i++){
        if(arr[i] == target)
        return true;
    }
    return false;
}

int findmax(int arr[], int size){
    int maxAns = arr[0];
    for(int i = 0; i < size ; i++){
        if(arr[i] > maxAns){
            maxAns = arr[i];
        }   
    }
    return maxAns;
}   

void count(int arr[], int size){
    int zerocount = 0;
    int onecount =  0;
    for(int i = 0; i < size; i++){
        if(arr[i]==0){
            zerocount++;
        }
        else if(arr[i]==1){
            onecount++;
        }
    }
    cout << "ZeroCount: " << zerocount << endl;
    cout << "Onecount: " << onecount << endl;

}

void extremprinting(int arr[], int n){
    int i = 0;
    int j = n-1;
    while(i <=j){
        if(i==j){
            // print only ones
            cout << arr[i] << " ";
            i++;
        }
        else{
            cout << arr[i] << " ";
            i++;
            cout << arr[j] << " ";
            j--;
        }
    }
}


int main() {
    // int size = 5;
    // int arr1[size] = {1,2,3,4,5};
    // int arr2[size] = {10,20,30,40,50};
    // for(int i = 0; i < size; i++){
    //     int temp = arr1[i];
    //     arr1[i] = arr2[i];
    //     arr2[i] = temp;
    // }
    // cout << "arr1: " ;
    // for(int i = 0; i < size; i++) cout << arr1[i] << " ";
    // cout << "\narr2: ";
    // for(int i = 0; i < size; i++) cout << arr2[i] << " ";

    // // Fill
    // int arr[4] = {10,20,30,40};
    // fill(arr, arr + 4, 23);
    // cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << endl;

    // int arr[5] = {10,20};
    // for(int i  = 0; i < 5; i++){
    //     cout << arr[i] << " ";
    // }
    
    int arr[100];
    int size;
    cout << "Enter the number of elements in the array : ";
    cin >> size;
    for(int i = 0; i < size; i++){
        cout << "Enter the value for box index : " << i << endl;
        cin >> arr[i];
    }
    // int target;
    // cout << "Enter the target element to find : ";
    // cin >> target;

    // solve(arr, size);
    // print(arr,size);

    // bool ans = findtarget(arr, size, target);
    // cout << "Ans: " << ans ;

    // int ans = findmax(arr, size);
    // cout << "Ans: " << ans ;

    // count(arr, size);

    // extremprinting(arr, size);







}







