#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums= {3,2,2,3,7};
    int val = 3;
    int k = 0;
     vector<int> aNums ={ };
   /*  int n = sizeof(nums) / sizeof(int); */
    for(size_t i = 0; i < nums.size(); i++){
        if (nums[i] != val)
        {  nums[k] = nums[i];
            k += 1;


           /*  k += 1;

             aNums.push_back(nums[i]); */
            /* for (size_t i = 0; i < aNums.size(); i++)
            {
                aNums.push_back(nums[i]);
            } */


         /*    nums.erase(nums.begin()+ nums[i]);
             cout<<nums[i]; */


        }
        else {
           /*  nums[i] = nums[i]; */
          /*  nums.push_back(nums[i]); */

        }
        /* aNums[i] = nums[i]; */

    }




    return k;
}