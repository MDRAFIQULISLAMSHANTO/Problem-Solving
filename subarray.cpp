//subarray
#include <iostream>
#include<vector>
using namespace std;
int main(){
    int n = 5;
    vector<int>vec = {1,2,3,4,5};
    int maxSum = INT_MIN;

    /* for(int start = 0; start < n;start++){
        for(int end = start; end<n; end++){
            for(int i = start; i<end;i++){
                cout << vec[i];
            }
            cout<<" ";

        }
        cout<<'\n';
    } */
   //bruteforce approach
   /* for (int start = 0; start<n; start ++){
    int currentSum = 0;
    for(int end= start; end<n;end++){
        currentSum += vec[end];
        maxSum = max(maxSum,currentSum);

    }
   } */
  //kadane's algorithm

   cout<<maxSum;
    return 0;

}