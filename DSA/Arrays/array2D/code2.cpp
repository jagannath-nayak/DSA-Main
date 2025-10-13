#include<iostream>
#include<limits.h>
using namespace std;

bool search2Darray(int arr[][4], int rowsize, int colsize, int target){
    for(int i=0; i < rowsize; i++){
        for(int j=0; j < colsize; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int find_MinvalueIn2Darray(int arr[][4], int rowsize, int colsize){
    int min_value=INT_MAX;

    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            min_value= min(arr[i][j], min_value);

        }
    }
    return min_value;
}

int findmaxvalue(int arr[][4], int rowsize, int colsize){
    int maxans = INT_MIN;

    // Time complexity--> O(rowsize*colsize)
    // Space complexity--> O(1)

    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            maxans = max(arr[i][j],maxans);
        }
    }
    return maxans;
}

void PrintRowSum(int arr[][4], int rowsize, int colsize){
    for(int i=0; i < rowsize; i++){
        int sum = 0;
        for(int j=0; j < colsize; j++){
            sum = sum+arr[i][j];
        }
        cout << sum << endl;
    }

}

void PrintColsum(int arr[][4], int rowsize, int colsize){
    for(int j=0; j<colsize; j++){
        int sum = 0;
        for(int i=0; i<rowsize; i++){
            sum = sum+arr[i][j];
        }
        cout << sum << endl;
    }
}

void Diagnolsum(int arr[][3], int rowsize, int colsize){
    int sum=0;
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            if(i==j){
                sum = sum + arr[i][j];
            }
        }
    }
    cout << "Sum: " << sum;

    // int sum = 0;
    // for(int i=0; i < rowsize; i++){
    //     sum = sum+arr[i][i];
    // }
    // cout << "Sum: " << sum;
}

void rightdiagonalsum(int arr[3][3], int rowsize, int colsize){
    int sum=0;
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            if(i+j==2){
                sum += arr[i][j];
            }
        }
    }
    cout << "Sum: " << sum;
}

void Transpose(int arr[][3], int rowsize, int colsize){
    int ans[100][100] ;
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            ans[i][j] = arr[j][i];
        }
    }

      for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;

    }

//     for(int i=0; i<rowsize; i++){
//         for(int j=i; j<colsize; j++){
//             swap(arr[i][j], arr[j][i]);
//         }
//     }

    
//       for(int i=0; i<rowsize; i++){
//         for(int j=0; j<colsize; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
// }
}



int main(){

    // int arr[3][4] = {
    //                {10,10,10,10},
    //                {20,20,20,20},
    //                {30,40,50,60}
    //                };
    // int rowsize=3;
    // int colsize=4;

    int arr[3][3] = {
        {10,20,30},
        {15,20,50},
        {25,10,10}
    };

    int rowsize = 3;
    int colsize = 3;


    // int target=440;          
    
    // bool ans = search2Darray(arr, rowsize, colsize, target);
    // cout << "Ans is: " << ans << endl;

    // int ans = find_MinvalueIn2Darray(arr, rowsize, colsize);
    // cout << "Ans: " << ans;

    // int maxans = findmaxvalue(arr, rowsize, colsize);
    // cout << "Max Value: " << maxans;
    
    // PrintRowSum(arr, rowsize, colsize);

    // PrintColsum(arr, rowsize, colsize);

    // Diagnolsum(arr, rowsize);

    // rightdiagonalsum(arr, rowsize, colsize);

    //Transpose(arr, rowsize, colsize);


}