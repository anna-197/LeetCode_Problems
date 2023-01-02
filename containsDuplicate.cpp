class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        set<int> unique;
        for(int i=0; i<nums.size(); i++){
                unique.insert(nums[i]);
        }

        if(nums.size()>unique.size()){
            return true;
        }
        else{
            return false;
        }
    }
};