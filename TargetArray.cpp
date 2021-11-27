class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int size=nums.size();
        vector<int> target(size);
        vector<int> res(size);
        for(int i=0; i<size; i++){
            int pos=index[i];
            target.insert(target.begin()+pos,nums.at(i));
            
        }
        for(int i=0; i<size; i++){
            res[i]=target.at(i);
        }
        
        return res;
        
    }
};