#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
//     int a = 10;
//     int b = 20;
//     cout << max(a,b) << endl;
//     cout << min(a,b) << endl;

vector<int> arr;
arr.push_back(10);
arr.push_back(20);
arr.push_back(30);
arr.push_back(40);
arr.push_back(50);

auto it =  min_element(arr.begin(), arr.end());
cout << *it << endl;
auto it1 =  max_element(arr.begin(), arr.end());
cout << *it1 << endl;








    return 0;
}