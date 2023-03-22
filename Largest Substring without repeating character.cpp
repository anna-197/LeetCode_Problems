class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,ans=0;
        int j=0;
        int n=s.length();
        unordered_set<char> freq;
        while(i<n && j<n){
            // does not repeat
                if(freq.find(s[j])==freq.end()){
                    freq.insert(s[j]);
                    j++;
                    ans=max(ans,j-i);
                }
                // repeats
                else{
                    freq.erase(s[i]);
                    i++;
                }
        }
        return ans;
    }
};