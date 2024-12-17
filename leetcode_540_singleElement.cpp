class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();
            if(n == 1) return nums[0]; //if index number is 1 in the
        int st = 0;
        int end =  n -1;
        while (st <= end){
            int mid = st + (end - st)/2;
            if(mid == 0 && nums[0] != nums[1]) {return nums[mid];}//edge case: handlind first elemnt of array
            if(mid == n-1 && nums[mid] != nums[n-2]){return nums[mid]; }// edeg case: handling last case of array
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]){
                return nums[mid];
            }
            if(mid % 2 == 0 ){ //check even or odd if even tow side of indes number is even
                if(nums[mid] == nums[mid - 1]){ // if mid == mid - 1 so odd numvber of index in the left
                    end =   mid - 1;
                }else{
                    st = mid + 1;
                }
            }else{ //odd: even number index both side
                if(nums[mid] == nums[mid - 1]){ // both side odd so mid == mid - 1 so lest side become even and right become odd;
                    st = mid + 1;
                }else{
                    end = mid - 1;
                }
            }
        }
        return -1;

    }
};
/* 540. Single Element in a Sorted Array
Solved
Medium
Topics
Companies
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.



Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: nums = [3,3,7,7,10,11,11]
Output: 10
  */