#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>vec ; //initialize vector and int

    vec.push_back(12); // add element from the last index;
    vec.push_back(13);
    vec.push_back(15);
    vec.push_back(16);
    vec.push_back(32);
    for(int val : vec){ //print after push_back
        cout << val<<" ";
    }
    cout<<"\n";
    vec.pop_back(); //popback =delete element form the last

        for(int val: vec){  //print after popback
        cout<<val<<" ";
    }
    cout<<'\n'<<"front:"<< vec.front();
    cout<<'\n'<<"back:"<< vec.back();
    cout<<'\n'<<"2nd element:"<< vec.at(1)<<'\n';
    cout<<vec.size()<<'\n'; //print vector size
    cout<<vec.capacity()<<'\n'; //print vector capacity

    return 0;
}