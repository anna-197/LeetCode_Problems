class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int j, count=0;
        int size=items.size();
        vector<string> rows;
        
        if(ruleKey=="type")
            j=0;
        else if(ruleKey=="color")
            j=1;
        else j=2;
        
        for(int i=0; i<size; i++){
            rows=items[i];
            if(ruleValue==rows[j]){
                count++;
            }
                
        }
        return count;
    }
};