
#include <vector>
#include "iostream"
using namespace std;
vector<int> twoSum(vector<int>& nums, int target);
int main() {
    vector<int> nums = {1,2,3,4,5};
   vector<int> index = twoSum(nums, 5);
}
/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]

 */
 // solution
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> targetIndexes;
    for (int i = 0; i < nums.size() - 1; ++i) {
        for (int j = i+1 ; j < nums.size(); ++j) {
            if (nums.at(i) + nums.at(j) == target) {
                targetIndexes.push_back(i);
                targetIndexes.push_back(j);
                return targetIndexes;
            }
        }
    }
    nums.push_back(-1);
    return targetIndexes;
}