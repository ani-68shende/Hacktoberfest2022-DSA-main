class Solution 
{
public:
	int findMin(vector<int>& nums) 
    {
		int size = nums.size()-1;
		// Check if array is fully sorted
		if(nums[size]>nums[0]) return nums[0];
		int left = 0;
        int right =  size;
        while(left < right)
        {
            int midpoint = left + (right- left)/2;
            if(midpoint > 0 && nums[midpoint] < nums[midpoint - 1]) return nums[midpoint];
            else if(nums[left] <= nums[midpoint] && nums[midpoint] > nums[right]) left = midpoint + 1;
            else right = midpoint - 1;
        }
        return nums[left];
    }
};

//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
