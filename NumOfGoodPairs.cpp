class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        int size=nums.size();
        for(int i=0; i<=size-2; i++){
            for(int j=i+1;j<=size-1;j++){
                if(nums.at(i)==nums.at(j))
                    count++;
            }
        }
        return count;
    } 
};