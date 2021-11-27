class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int size=nums.size();
        vector<int> ans;
        int start=0;
        for(int i=0; i<=size-1; i=i+2){
            for(int j=start; j<start+nums.at(i); j++){
                ans.push_back(nums.at(i+1));
            }
            start=start+nums.at(i);
        }
        return ans;
    }
};