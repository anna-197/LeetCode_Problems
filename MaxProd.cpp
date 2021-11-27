class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=0;
        int max2=0;
        int size=nums.size();
        for(int i=0; i<size; i++){
            if(nums.at(i)>max1 && nums.at(i)>max2){
                max1=max2;
                max2=nums.at(i);
            }
            else if(nums.at(i)>max1 || nums.at(i)==max2)
               max1=nums.at(i);
        }
        int ans=(max1-1)*(max2-1);
        return ans;
    }
};