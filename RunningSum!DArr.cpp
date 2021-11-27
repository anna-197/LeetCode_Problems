class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size=nums.size();
        vector<int> runsum(size);
        int sum=0;
        for(int i=0; i<size; i++)
        {
            sum=sum+nums.at(i);
            runsum[i]=sum;
        }
         return runsum;
    }
};