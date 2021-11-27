class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int size=rectangles.size();
        vector<int> maxLen;
        for(int row=0; row<size; row++){
            vector<int> inputs = rectangles[row];
            maxLen.push_back(min(inputs[0], inputs[1]));  
        }
        int maxx=0;
        for(int i=0; i<size; i++){
            maxx = max(maxx, maxLen[i]);
        }
        int count=0;
        for(int i=0; i<size; i++){
            if(maxLen[i]==maxx)
                count++;
        }
       return count; 
    }
    
};