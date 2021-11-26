class Solution {
public:
    int minOperations(vector<int>& nums) {
        int size=nums.size();
        int count=0; int diff=0;
        if(size==1)
            return count;
        else{
            for(int i=0; i<size-1; i++){
                if(nums[i+1]<=nums[i]){
                    diff=nums[i]-nums[i+1]+1;
                    nums[i+1]=nums[i+1]+diff;
                    count=count+diff;
                }
            }
            
        }
        return count;
    }
};