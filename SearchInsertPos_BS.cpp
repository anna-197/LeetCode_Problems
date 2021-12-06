class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       // but what if the target is greater than the greatest number in the array
        if (target > nums[nums.size()-1]) {
            return nums.size();
        }
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end) {
            // find the middle element
//            int mid = (start + end) / 2; // might be possible that (start + end) exceeds the range of int in java
            int mid = start + (end - start) / 2;

            if (target < nums[mid]) {
                end = mid - 1;
            } else if (target > nums[mid]) {
                start = mid + 1;
            } else {
                // ans found
                return mid;
            }
        }
        return start;
    }
};