class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
         char k='.';
            string s="[.]";
        for(int i=0; i<address.size(); i++){
            if(address[i]!=k)
                ans=ans+address[i];
                else
                ans=ans+s;
        }
        return ans;
    }
};