#include<iostream>
#include<vector>
#include<forward_list>
#include<list>
using namespace std;

int main(){
    // vector<int> arr;
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);

    // vector<int> :: iterator it = arr.begin();
    // while(it != arr.end()){
    //     cout << *it << " ";
    //     it++;
    // }

    // forward iterator
    // forward_list<int> list;
    // list.push_front(10);
    // list.push_front(20);
    // list.push_front(30);

    // forward_list<int> :: iterator it = list.begin();
    // while(it != list.end()){
    //     //cout << *it << " ";
    //     (*it)= (*it)+5;
    //     it++;
    // }
    
    // it = list.begin();
    // while(it!=list.end()){
    //     cout << *it << " ";
    //     it++;
    // }

    // BI-directional Iterator
    // list<int> mylist;
    // mylist.push_back(10);
    // mylist.push_back(20);
    // mylist.push_back(30);

    // Traverse using iterator
    // list<int> :: iterator it = mylist.begin();
    // while(it != mylist.end()){
    //     // writing
    //     (*it) = (*it) + 2;
    //     // reading
    //     cout << *it << " ";
    //     // forward move
    //     it++;
    // }

    // lets try moving backward in list
    // list<int> :: iterator it = mylist.end();
    // while(it != mylist.begin()){
    //     it--;
    //     *it = *it + 5;
    //     cout << *it << " ";
    // }

    // Random access iterator
    vector<int> arr = {10,20,30,40,50};

    // vector<int> :: iterator it = arr.begin();
    // while(it != arr.end()){
    //     // write
    //     *it = *it + 5;
    //     // read
    //     cout << *it << " ";
    //     // forward move
    //     it++;

    // }

    // Backward move
    // vector<int> :: iterator it = arr.end();
    // while(it != arr.begin()){
    //     it--;
    //     cout << *it << " ";
    // }

    // Random access iterator
    
    vector<int> :: iterator it = arr.begin() + 3;
    cout << *it << " ";















    return 0;
}