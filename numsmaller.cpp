class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int size=nums.size();
        vector<int> ans(size);
        for(int i=0; i<size;i++){
            int count=0;
            for(int j=0; j<size;j++){
                if(j!=i && nums.at(j)<nums.at(i))
                    count++;
            }
            ans[i]=count;
        }  return ans;
    } 
   
};