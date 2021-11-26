class Solution {
public:
    
    int getIntVal(string s, int i){
        if(s[i]=='I')
            return 1;
        if(s[i]=='V')
            return 5;
        if(s[i]=='X')
            return 10;
        if(s[i]=='L')
            return 50;
        if(s[i]=='C')
            return 100;
        if(s[i]=='D')
            return 500;
        if(s[i]=='M')
            return 1000;
        return 0;
    }
    
    bool shouldAdd(string s,int i){
        if(getIntVal(s, i)<getIntVal(s, i+1))
            return false;
        return true;
    }
    
    int romanToInt(string s) {
        
        
        int sum=0;
        for(int i=0; i<s.length(); i++){
           int val=getIntVal(s,i);
            
            if(i<s.length()-1){
                
                bool ans= shouldAdd(s,i);
                if(ans){
                    sum=sum+val;
                }
                else{
                    sum=sum-val;
                }
            }
            else {
                sum=sum+val;
            }
                
        }
        
        return sum;
    }
};