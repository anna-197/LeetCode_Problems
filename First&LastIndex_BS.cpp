class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1, mid;
        int start = -1, end = -1;
        
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            
            if (nums[mid] == target)
            {
                start = end = mid;
                // go left until found a smaller number
                while (start > 0 && nums[start-1] == target)
                {
                    start--;
                };
                // go right until found a bigger number
                while (end < nums.size()-1 && nums[end+1] == target)
                {
                    end++;
                }
                
                break;
            }
            else if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        
        return vector<int>{start, end};
    }
};