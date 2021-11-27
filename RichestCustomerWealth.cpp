class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    int size=accounts.size();
        vector<int> max;
        for(int i=0; i<size; i++){
            vector<int> customer = accounts[i];
            int sum=0;
            int banks = customer.size(); //account[i].size()
            for(int j=0; j<banks; j++){
                sum=sum+accounts[i][j]; //customer[j], customer = accounts[i]
            }
             max.push_back(sum);
        }
        int maxx=0;
        for(int i=0;i<size;i++){
            if(max.at(i)>maxx)
                maxx=max.at(i);
        }
        
        return maxx;
    }
};