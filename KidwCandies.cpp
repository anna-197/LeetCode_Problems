class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=candies.at(0);
        int size=candies.size();
        for(int i=0; i<size;i++)
        {
            if(candies[i]>max)
                max=candies.at(i);
        }
        vector<bool> ans(size);
        for(int i=0; i<size; i++)
        {
            if(candies.at(i)+extraCandies>=max)
                ans[i]=true;
                else
                    ans[i]=false;
        }
        return ans;
    }
};