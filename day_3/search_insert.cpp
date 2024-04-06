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
 * 
 */
