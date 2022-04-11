/*
42. Trapping Rain Water

Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

 

Example 1:


Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
Example 2:

Input: height = [4,2,0,3,2,5]
Output: 9
 

Constraints:

n == height.length
1 <= n <= 2 * 104
0 <= height[i] <= 105
*/

class Solution {
public:
    int trap(vector<int>& height) {
//         t.c=O(n^2)
        // s.c=O(1)
        
       //  int n=height.size();
       //  int ans=0;
       //  for(int i=1;i<n-1;i++){
       //      int left=height[i];
       //      for(int j=0;j<i;j++){
       //          left=max(height[j],left);
       //      }
       //      int right=height[i];
       //      for(int j=i+1;j<n;j++){
       //          right=max(height[j],right);
       //      }
       //      ans+=(min(right,left)-height[i]);
       //  }
       // return ans; 
        int n=height.size();
        int left=0,right=n-1,maxl=0,maxr=0,ans=0;
        while(left<=right){
            if(height[left]<=height[right]){
                if(maxl<=height[left])maxl=height[left];
                else ans+=maxl-height[left];
                left++;
            }else{
                if(height[right]>=maxr)maxr=height[right];
                else ans+=maxr-height[right];
                right--;
            }
            
        }
        return ans;
    }
    //t.c=O(n);
    //s.c=O(1);
};