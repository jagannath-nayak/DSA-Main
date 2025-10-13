#include <iostream>
#include<vector>
using namespace std;

void LTRRE(string& s, char x, int i, int& ans){
    // Base case
    if(i >= s.size()) return;
    // Ek case mai solve karunga
    if(s[i]==x) ans = i;
    // Recursion
    LTRRE(s, x, i+1, ans);
}


void RTLRE(string& s, char x, int i, int& ans){
    // Base case
    if(i < 0) return;
    // Ek case mai solve karunga
    if(s[i]==x){
        ans = i;
        return;
    }
    // Recursion
    LTRRE(s, x, i-1, ans);
}

void ReverseRE(string& s, int start, int end){
    // Base case
    if(start >= end) return;
    // Ek case mai dekh lunga
    swap(s[start], s[end]);
    // Baki RE dekh lega
    ReverseRE(s, start+1, end-1);
}

bool isPalindrome(string& s, int i, int j){
    // Base case
    if(i >= j) return true;

    // Ek case mai solve karunga 
    if(s[i] != s[j]) return false;

    // Baaki RE dekh lega
    return isPalindrome(s, i+1, j-1);
}

void PrintsubArray_util(vector<int>& nums, int start, int end){
    // Base case
    if(end == nums.size()) return;

    // Ek case
    for(int i=start; i<=end; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    // RE
    PrintsubArray_util(nums, start, end+1);

}

void PrintsubArray(vector<int>& nums){
    for(int start = 0; start<nums.size(); start++){
        int end = start;
        PrintsubArray_util(nums, start, end);
    }
}

int main(){
    // string s;
    // cin>>s;
    // char x;
    // cin>>x;
    // int ans = -1;

    // // LTRRE(s, x, 0, ans);
    // RTLRE(s, x, s.size()-1, ans);
    // cout << ans << endl;

    // ReverseRE(s, 0, s.size()-1);
    // cout << s << endl;
    
    // cout << isPalindrome(s, 0, s.size()-1) << endl;

    vector<int> nums = {1,2,3,4,5};
    PrintsubArray(nums);


    return 0;
}