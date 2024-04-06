#include "iostream"
#include "vector"
#include "stack"

using namespace std;

int searchInsert(vector<int>& nums, int target);
int main() {
    vector<int> nums  = {1,3,5,7,10};
    int target = 2 ;
    cout<< searchInsert(nums, target);
}

int searchInsert(vector<int> & nums, int target) {
    int low = 0 ;
    int high = nums.size() -1 ;
    while (high >= low){
        int mid= high + low /2 ;
        if (nums[mid]  == target ){
            return mid;
        } else if (target > nums[mid]){
            low = mid+1 ;
        } else{
            high = mid -1 ;
        }
    }
    return low ;
}
/*
 * Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
 Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
 */
