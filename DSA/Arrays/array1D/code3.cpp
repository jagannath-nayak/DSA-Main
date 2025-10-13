#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

void solve(int arr[], int size){
    for(int i = 0 ; i < size; i++){
        int x = arr[i]*10;
        cout << x << " ";
    }
}

int findtarget(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i]==target){
        }
        return true;
    }
    return false;
}

int Max(int arr[], int size){
    int maxans = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > maxans)
        maxans = arr[i];
    }
    return maxans;
}

void ZeroOnecount(int arr[], int size){
    int zerocount = 0;
    int onecount = 0;
    for(int i = 0; i < size; i++){
        if(arr[i]==0)
        zerocount++;
        else if(arr[i]==1)
        onecount++;
    }
    cout << "zerocount: " << zerocount << endl;
    cout << "onecount: " << onecount;
}

void extremeprinting(int arr[], int size){
    int i = 0;
    int j = size-1;
    while(i <= j){
        if(i==j){
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

void ReveraseArray(int arr[], int size){
    int l = 0;
    int h = size-1;

    while(l < h){
        arr[l] = arr[l] ^ arr[h];
        arr[h] = arr[h] ^ arr[l];
        arr[l] = arr[l] ^ arr[h];
        l++;
        h--;
    }

}

int findUniqueno(int arr[], int size){
    int ans=0;
    for(int i=0; i < size; i++){
        ans = ans ^ arr[i];
    }
    cout << "Unique ans: " << ans;
    return ans;
}

void SortZeroOne(int arr[], int size){
    int zerocount = 0;
    int onecount = 0;
    // counting
    for(int i=0; i < size; i++){
        if(arr[i]==0){
            zerocount++;
        }
        if(arr[i]==1){
            onecount++;
        }    
    }
    // insertion
    // int i = 0;
    // for(; i < zerocount; i++){
    //     arr[i] = 0;
    //     }
    // for(; i < size; i++){
    //     arr[i] = 1;
    //     }    

    // fill
    fill(arr, arr+3, 0);
    fill(arr+4, arr+size, 1);
}

void printAllpairs(int arr[], int size){
    for(int i=0; i < size; i++){
        for(int j=i+1; j < size; j++){
            cout << arr[i] << "," << arr[j] << endl;
        }
    }
}

void sortZeroOneTwo(int arr[], int size){
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;

    for(int i=0; i < size; i++){
        // counting
        if(arr[i]==0)
            zerocount++;
        
        if(arr[i]==1)
            onecount++;
    
        if(arr[i]==2)
            twocount++;
    }
    cout << "zerocount: " << zerocount << endl;
    cout << "onecount: " << onecount << endl;
    cout << "onecount: " << onecount << endl;
    
    // Insertion
    int i = 0;
    for(; i < zerocount; i++)
        arr[i]=0;   

    for(int j=0; j < onecount ; j++,i++)
        arr[i]=1;

    for(int j=0; j < twocount; j++,i++)
        arr[i]=2;
}

pair<int, int > checktwosum(int arr[], int size, int target){
    // assuming (-1, -1) as no answer found
    pair<int, int> ans = make_pair(-1,-1);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(arr[i]+arr[j]==target){
                // found a pair that sum to target
                ans.first = arr[i];
                ans.second = arr[j];   
                return ans;            
        }
    }
}  
return ans;
}

void printalltriplets(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            for(int k = 0; k < size; k++){
                if(arr[i]+arr[j]+arr[k]==target)
                cout << arr[i] <<  "," << arr[j] << "," << arr[k] << endl;
            }
        }
    }
}

void Threedigitsum(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            for(int k = j+1; k < size; k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
                }
            }
        }
    }
}

void rotateArray(int arr[], int size, int n){
    // n --> Number of shift
    // size ---> size of an array
     n = n%size; // if shift > size otherwise normal shift
    if(n==0){
         return;
    }

    // store last element in temp variable
    int temp[10000];
    int index = 0;
    for(int i = size-n; i < size; i++){
        temp[index] = arr[i];
        index++;
    }

    // start shifting
    for(int i = size-1; i >=0; i--){
        if(i-n>=0){
            arr[i]=arr[i-n];
        }
    }

    // copy elements from temp into original array
    for(int i = 0; i < n; i++){ // n--> no.of shift
        arr[i]=temp[i];
    }

}


int main(){
    int arr[100];
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    //int l = 0, h=size-1;

    for(int i = 0; i < size; i++){
        cout << "Enter the element for index: " << i << endl;
        cin >> arr[i];
    }
    
    // int n;
    // cout << "Cyclically rotate array by: ";
    // cin >> n;

    int target;
    cout << "Enter the target element: ";
    cin >> target;



    // // solve(arr, size);
    // int ans = findtarget(arr, size, target);
    // cout << ans;

//   int ans =  Max(arr, size);
//   cout << "Ans: " << ans ;

// // ZeroOnecount(arr, size);
// extremeprinting(arr, size);

// ReveraseArray(arr, size);
// for(int i = 0; i < size; i++){
//     cout << arr[i] << " ";
// }

// findUniqueno(arr, size);

// SortZeroOne(arr, size);
// for(int i=0; i < size; i++){
//     cout << arr[i] << " ";
// }

// printAllpairs(arr, size);

// sortZeroOneTwo(arr, size);
// for(int i = 0; i < size; i++){
//     cout << arr[i] << " ";
// }

// pair<int, int> ans = checktwosum(arr, size, target);
// if(ans.first==-1 && ans.second==-1){
//     cout << "Pair not found";
// }
// else{
//     cout << "Pair found: " << ans.first << "," << ans.second << endl;
// }

// printalltriplets(arr, size, target);

 Threedigitsum(arr, size, target);
// cout << "Before: " << endl;

// for(int i=0; i < size; i++){
//     cout << arr[i] << " ";
// }
// cout << endl;

// rotateArray(arr, size, n);

// cout << "After: " << endl;

// for(int i=0; i < size; i++){
//     cout << arr[i] << " ";
// }

// while(l<=h){
//     if(arr[l]<0) l++;

//     else if(arr[h]>0) h--;

//     else{
//         swap(arr[l], arr[h]);
//     }
// }

// while(l<=h){
//     if(arr[l]==0) l++;

//     else if(arr[h]==1) h--;

//     else{
//         swap(arr[l], arr[h]);
//     }
// }

// for(int i=0; i<size; i++){
//     cout << arr[i] << " ";
// }


}