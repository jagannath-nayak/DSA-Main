#include<iostream>
#include<vector>
using namespace std;
int main(){
    // creation
    // vector<int> marks;
    // marks.push_back(10);
    // marks.push_back(20);
    // marks.push_back(30);
    // marks.push_back(40);

    // //create an iterator
    // vector<int> :: iterator it = marks.begin();
    // while(it != marks.end()){
    //     cout << *it << " ";
    //     it++;
    // }


    // cout << "Size = " << " "<< marks.size() << endl;
    // if(marks.empty()==true){
    //     cout << "Vector is empty" << endl;
    // }
    // else{
    //     cout << "Vector is not empty" << endl;
    // }

    // 40 will remove
    // marks.pop_back();
    //cout << "Size: "<< marks.size() << endl;


    // cout << marks.front() << endl;
    // cout << marks.back() << endl;

    // cout << *(marks.begin()) << endl;

    // vector<int> miles(10);
    // vector<int> distances(5,0);

    // 2Darray/vector
    vector<vector<int>> arr(5, vector<int>(4,0));
    int totalrows = arr.size();
    int totalcols = arr[0].size();




    return 0;
}