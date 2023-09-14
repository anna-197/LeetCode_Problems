class Solution {
public:
static bool comp(string &a, string &b){
    return a+b>b+a;
}
    string largestNumber(vector<int>& nums) {
        vector<string> ans;
        string answer="";
        for(int i=0; i<nums.size(); i++){
            ans.push_back(to_string(nums[i]));
…    
        return answer.substr(j,answer.size());
    }
};