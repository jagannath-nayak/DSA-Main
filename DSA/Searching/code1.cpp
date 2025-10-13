#include<iostream>
using namespace std;

void FindfirstOccurance(int arr[], int n, int target, int &ansIndex){
    int s = 0, e = n-1, mid = s + (e-s)/2;
    while(s <= e){
        if(arr[mid]==target){
        // Store and Compute Method    
        // ans found may or not be first occurance
        // agar first occurance nhi hai toh left mai bhi jana hoga
        ansIndex = mid; // store
        e = mid - 1;    // compute
        }
        else if(target > arr[mid]) s = mid + 1;
        else if(target < arr[mid]) e = mid - 1;
        mid = s + (e-s)/2;
    }

}

void FindlastOccurance(int arr[], int n, int target, int &ansIndex){
    int s = 0, e = n-1, mid = s + (e-s)/2;
    while(s <= e){
        if(arr[mid]==target){
            // store and compute
            ansIndex = mid;
            s = mid + 1;
        }
        else if(target > arr[mid]) s = mid + 1;
        else if(target < arr[mid]) e = mid - 1;
        mid = s + (e-s)/2;
    } 
}


int main(){
    int arr[] = {13,18,20,20,20,20,30,40,50,60};
    int n = 10;
    int target = 20;
    int ansIndex = -1;
    FindfirstOccurance(arr, n, target, ansIndex);
    cout << "First Occurance Index: " << ansIndex << endl;

    FindlastOccurance(arr, n, target, ansIndex);
    cout << "Last Occurance Index: " << ansIndex << endl;

    return 0;
}