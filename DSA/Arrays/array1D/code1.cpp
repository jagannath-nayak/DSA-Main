#include<iostream>
#include<limits.h>
using namespace std;

void print(int arr[], int size){
    for(int index =0; index < size; index++){
        cout << arr[index] << " ";
    }
}

void solve1(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] = arr[i] * 10; 
    }
}

bool findtarget(int arr[], int size, int target){
    for(int i=0 ; i < size ; i++){
        if(arr[i] == target){
            return true;
        }
    }
    // agar aap yaha tak puch gye toh element nhi mila 
    return false;

}

int findmax(int arr[], int size){
    int maxans = arr[0];
    for(int i = 0; i<size; i++){
        maxans = max(maxans, arr[i]);
        }
        return maxans;
    }

void printZeroOnes(int arr[], int n){
    int countZero = 0;
    int countOnes = 0;
    for(int i = 0; i < n; i++){
        if (arr[i] == 0 ){
            countZero++;
        }
        else if(arr[i] == 1){
            countOnes++;
        }
    }
     cout << "The number of zeros in the array is : " << countZero << endl;
     cout << "The nummber of ones in the array is : " << countOnes << endl;
}

void extremprinting(int arr[], int n){
    int i = 0;
    int j = n-1;
    while(i <= j){
        if(i == j){
            // print only 1 time
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
    // int arr[10];
    // // error
    // //int brr[]
    // int crr[] = {10,20,30,40,50};
    // int drr[4] = {0};

    // cout << drr[0] << endl;
    // cout << crr[3] << endl;

    // int arr[4];
    // fill(arr, arr + 4, 23);
    // cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << endl;

    // input 
    // int arr[5];
    // for (int index = 0; index < 5; index++){
    //     cout << "Enter the value for the box index : " << index << endl;
    //     cin >> arr[index];
    // }
    // // print
    // for( int index =0; index < 5; index++){
    //     cout << arr[index] << " ";
    // }

    // int arr[] = {10,20,30,40,50};
    // int size = 5;

    // solve1(arr, size);
    // print(arr, size);
    
    // int arr[100];
    // int size;
    // cout << "Enter the number of elements in the array : ";
    // cin >> size;
    // for(int i=0; i < size; i++){
    //     cout << "Enter the value for the box index : " << i << endl;
    //     cin >> arr[i];
    // }
    // int target;
    // cout << "Enter the target element to find : ";
    // cin >> target;

    // bool ans = findtarget(arr, size, target);
    // cout << "ans : " << ans << endl;

    // cout << "The maximum element in the array is : " << findmax(arr, size) << endl;
    // printZeroOnes(arr, size);

    // extremprinting(arr, size);

    // int a = 5;
    // int b = 10;
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // cout << "a: " << a << endl;
    // cout << "b: " << b;
    
    int size = 5;
    int arr1[size] = {1,2,3,4,5};
    int arr2[size] = {10,20,30,40,50};

    for(int i = 0; i < size; i++){
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    cout << "arr1: ";
    for(int i = 0; i < size; i++) cout << arr1[i] << " ";
    cout << "\narr2: ";
    for(int i = 0; i < size; i++) cout << arr2[i] << " ";


    return 0;
}