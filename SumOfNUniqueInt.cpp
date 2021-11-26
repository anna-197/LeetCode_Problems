class Solution {
public:
    vector<int> sumZero(int n) {
        int limit=n/2;
        if(n%2!=0)
            limit=(n-1)/2;
        vector<int> arr;
        for(int pairs=1; pairs<=limit; pairs++){
            arr.push_back(pairs);
            arr.push_back((-1)*pairs);
        }
        if(n%2!=0){
            arr.push_back(0);
        }
           
        return arr;
    }
};