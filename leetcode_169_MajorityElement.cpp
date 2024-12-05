/* solving the problem using 1. brute force appoch 2.optimize approch 3.moores voting algorithm (more optimize) */
class Solution {
public:
    int majorityElement(vector<int>& nums) {
          //brute force approch : o(n2)
/*         int n = nums.size();
        for(int val : nums){
            int frequency = 0;
            for(int ele: nums){
                if(val == ele){
                    frequency++;
                }
            }
            if( frequency > n/2){
                return val;
            }
        }


 return -1; */
        //sorting approch better than brute force : o(nlogn)
        /* int n = nums.size();
        sort(nums.begin(),nums.end());
        int fre = 1;
        int ans = nums[0];
        for(int i = 1; i<n; i++){
            if( nums[i] == nums[i-1]){
                fre++;
            }else{
                fre = 1;
                ans =  nums[i];
            }
            if(fre > n/2){
                return ans;
            }
        }
        return ans; */
        //mores voting algorithm : o(n)
        int fre = 0;
        int ans = 0;
        for (int i =0; i<nums.size(); i++){
            if(fre ==0){
                ans =  nums[i];
            } if(ans == nums[i]){
                fre++;
            }else{
                fre--;
            }
        }
        return ans;

    }

};