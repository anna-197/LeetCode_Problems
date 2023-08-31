class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0, j=0, k=nums.size()-1;
        while(j<=k){
            int x = nums[j];
            if(x==0){
                swap(nums[i], nums[j]);
                i++;j++;
            }
…};