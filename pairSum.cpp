#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> array, int t){

    /* for(int i=0; i< array.size(); i++){     //Applying Brute-force approch :O(n2)
        for(int j= i+1; j<array.size(); j++){
            if(array[i]+array[j] == t){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    } */
   vector<int> ans;
   int n = array.size();
   int i =0;        //applying two pointer approacj : O(n)
   int j= n - 1;

   while( i<j ){
    int pairSum = array[i] + array[j];
    if(pairSum < t) {
        i++;
    } else if (pairSum > t)
    {
        j--;
    }else {
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }


   }
   /* return ans; */

}

int main(){
    vector<int>vec = {2,3,4,5,6,7};
    int target = 5;
    vector<int>ans = pairSum(vec, target); // function call
    cout << ans[0] << " " << ans[1];

    return 0;


}