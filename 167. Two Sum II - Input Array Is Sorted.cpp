/*
167. Two Sum II - Input Array Is Sorted
Medium

Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

Your solution must use only constant extra space.

 

Example 1:

Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
Example 2:

Input: numbers = [2,3,4], target = 6
Output: [1,3]
Explanation: The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. We return [1, 3].
Example 3:

Input: numbers = [-1,0], target = -1
Output: [1,2]
Explanation: The sum of -1 and 0 is -1. Therefore index1 = 1, index2 = 2. We return [1, 2].
 

Constraints:

2 <= numbers.length <= 3 * 104
-1000 <= numbers[i] <= 1000
numbers is sorted in non-decreasing order.
-1000 <= target <= 1000
The tests are generated such that there is exactly one solution.


BRUTE FORCE
Time Complexity: O(n^2)
Space Complexity: O(1)

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) 
	{
		vector<int> v;
		for(int i=0;i<nums.size();i++)
		{
			for(int j=i+1;j<nums.size();j++)
			{
				if(nums[i]+nums[j]==target)
				{
					v.push_back(i);
					v.push_back(j);
					return v;
				}
			}
        }
        return v;
    }
};

HASHTABLE
Time Complexity: O(n)
Space Complexity: O(n)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
                unordered_map<int, int> mp;
        for(int i =0; i<nums.size(); i++){
            int x = target - nums[i];
            if(mp.find(x) != mp.end()){
                return {mp[x],i+1};
            }
            mp[nums[i]] = i+1;
        }
        return {};
    }
};

2POINTERS
Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>a;
       int start = 0 , end = nums.size()-1;
            while(start<end){
                if(nums[start]+nums[end]>target){
                     end--;
                }else if(nums[start]+nums[end]<target){
                     start++;
                }else{
                    a={start+1,end+1};
                      return a;
                }
            }
            return a;
    }
};



