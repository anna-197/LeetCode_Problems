class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
         //idea is to go for next gtreater in nums+nums
        int n=nums.size();
        nums.resize(2*n);
        for(int i=n;i<2*n;i++){
            nums[i]=nums[i-n];
        }
        vector<int>res(n);
        stack<int>st;
        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() && nums[i]>=nums[st.top()]){
                st.pop();
            }
            
          if(st.empty()==false){
              res[i%n]=nums[st.top()];
          }
          else{
            res[i%n]=-1;
          }
            
            st.push(i);
        }
        return res;
    }
};