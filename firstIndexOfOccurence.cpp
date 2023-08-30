class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans;
        for(int i=0; i<haystack.size(); i++){
            int j;
            for(j=0; j<needle.size() && (i+j)<haystack.size(); j++){
                if(needle[j]==haystack[j+i])
                    continue;
                else
                    break;
            }
            if(j==needle.size())
                return i;
            else if(needle.length()==0)
                return 0;
        }
      
           return -1;
        
        
    }
};