#include<iostream>
#include<vector>
using namespace std;

void MergeSortedArrays(int arr[], int arrSize, int brr[], int brrSize, vector<int>& ans){
    int i = 0;
    int j = 0;
    while(i < arrSize && j < brrSize){
        if(arr[i] < brr[j]) ans.push_back(arr[i++]);
        else{
            ans.push_back(brr[j++]);
        }
    }
    // case 1 - hoo sakta hai arr mai elements baki ho and brr ka elements khatam hoo gye hoo.
    while(i < arrSize){
        ans.push_back(arr[i++]);
    }
    // case 2 - hoo sakta hai brr mai elements baki ho and arr ka elements khatam hoo gye hoo.
    while(j < brrSize){
        ans.push_back(brr[j++]);
    }

}

void merge(int arr[], int s, int e, int mid){

    // create left and right arrays
    int leftlength = mid - s + 1;
    int rightlength = e - mid;
    
    // we are using heap memory to create arrays because it is a good practice
    int *leftArr = new int[leftlength];
    int *rightArr = new int[rightlength];

    // Fill the left and right arrays
    int index = s; // arr - original array ka starting index
    // copying into left array
    for(int i=0; i<leftlength; i++){
        leftArr[i] = arr[index++];
    }
    // copying into right array
    index = mid + 1;
    for(int i=0; i<rightlength; i++){
    rightArr[i] = arr[index++];
    }

   // merge logic
   int leftIndex = 0;
   int rightIndex = 0;
   int mainArrayIndex = s;

   while(leftIndex < leftlength && rightIndex < rightlength){
    if(leftArr[leftIndex] < rightArr[rightIndex]){
        arr[mainArrayIndex++] = leftArr[leftIndex++];
    }
    else{
        arr[mainArrayIndex++] = rightArr[rightIndex++];
    }
   }

   // I have handle 2 cases which i have handle in merge two sorted arrays
   while(leftIndex < leftlength){
    arr[mainArrayIndex++] = leftArr[leftIndex++];
   } 

   while(rightIndex < rightlength){
    arr[mainArrayIndex++] = rightArr[rightIndex++];
   }

   // delete heap memory
   delete[] leftArr;
   delete[] rightArr;

}

void MergeSort(int arr[], int s, int e){
    // Base case
    if(s >= e) return;
    int mid = (s+e)/2;
    // left part recursion se solve karva liya
    MergeSort(arr, s, mid);
    // right part recursion se solve karva liya
    MergeSort(arr, mid+1, e);
    // dono parts ko merge kara liya
    merge(arr, s, e, mid);
}

int main(){
    int arr[] = {20,40,60,80,90,100};
    int arrSize = 6;

    int brr[] = {10,30,50,70};
    int brrSize = 4;

    vector<int> ans;
    MergeSortedArrays(arr, arrSize, brr, brrSize, ans);

    // print
    for(auto k: ans){
        cout << k << " ";
    }

    // int arr[] = {10,80,110,90,50,30,40,20};
    // int size = 8;
    // int s = 0;
    // int e = size-1;

    // cout << "Before: " << endl;
    // for(auto i: arr){
    //     cout << i << " ";
    // }
    // cout << endl;

    // MergeSort(arr, s, e);

    // cout << "After: " << endl;
    // for(auto i: arr){
    //     cout << i << " ";
    // }
    // cout << endl;





    return 0;
}