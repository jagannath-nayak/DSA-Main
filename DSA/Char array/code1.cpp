#include<iostream>
#include<cstring>
using namespace std;

int getlength(char arr[], int size){
    int count = 0;
    int index = 0;
    while(arr[index] != '\0'){
        count++;
        index++;
    }
    return count;
}

void replacechar(int originalchar, int newchar, char arr[], int size){
    for(int i=0; i<size; i++){
        if(arr[i]==originalchar) arr[i] = newchar;
    }
}

void convertuppercase(char arr[], int size){
    int len = getlength(arr, size);
    for(int i=0; i<len; i++){
        char ch = arr[i];
        if(ch >= 'a' && ch <= 'z') ch = ch - 'a' + 'A';
        arr[i] = ch;
    }
}

void reversechar(char arr[], int n){
    int len = getlength(arr, n);
    int i = 0, j = len-1;
    while(i <= j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

bool ispalindrome(char arr[], int n){
    int len = getlength(arr, n);
    int i = 0, j = len - 1;
    while(i <= j){
        if(arr[i++]==arr[j--]) return true;
        else return false;
    }

}

int main(){
    // // creation
    // char arr[100];
    // cout << "Enter your name: " << endl;
    
    // // input
    // //cin >> arr;
    // cin.getline(arr, 100);
    // // print
    // cout << "Your name is: " << arr << endl;

    // cout << arr[0] << "->" << (int)arr[0] << endl;
    // cout << arr[1] << "->" << (int)arr[1] << endl;
    // cout << arr[2] << "->" << (int)arr[2] << endl;
    // cout << arr[3] << "->" << (int)arr[3] << endl;
    // cout << arr[4] << "->" << (int)arr[4] << endl;
    
    // char arr[100];
    // cout << "Enter the input: " << endl;
    // cin.getline(arr, 80, '\t');
    // cout << endl << arr << endl;

    // char arr[1000];
    // cin >> arr;
    //cout << getlength(arr, 1000) << endl;
    //replacechar('@', ' ', arr, 1000);
    
    //convertuppercase(arr, 1000);
    //reversechar(arr, 1000);
    // cout << arr << endl;

    // bool ans = ispalindrome(arr, 1000);
    // if(ans==true) cout << arr << " " << "is a palindrome." << endl;
    // else cout << arr << " " << "is not a palindrome." << endl;
    
    char arr1[100];
    cout << "Enter the input: " << endl;
    cin >> arr1;

    char arr2[200];
    cout << "Enter the input: " << endl;
    cin >> arr2;

    cout << strcat(arr1, arr2) << endl;
    return 0;
}