class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
         vector<int> ans; 
//for that frequency
         for(int i=0;i<nums.size();i=i+2){ 
//from 0 till that frequency
              for(int j=0;j<nums[i];j++){
//print whatever it is in next index of i

                ans.push_back(nums[i+1]);
              }
         }
         return ans;
    }
                                                            
};