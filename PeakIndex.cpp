class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int size=arr.size();
        int max=0;
        for(int i=0; i<size; i++){
            if(arr.at(i)>max)
                max=arr.at(i);
        }
        int ans=0;
          for(int i=0; i<size; i++){
            if(arr.at(i)==max)
             ans=i;
        }  
        return ans;
    }
};