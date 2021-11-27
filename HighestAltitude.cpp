class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int size=gain.size();
        vector<int> res(size,0);
        int sum=0;
        int max=0;
        for(int i=0; i<size; i++){
            sum=sum+gain.at(i);
            if(sum>max)
                max=sum;
            
        }
        return max;
    }
};