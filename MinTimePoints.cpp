class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int seconds=0;
        int size=points.size();
        for(int row=0; row<size-1; row++){
            vector<int> coordinate1 = points[row];
            int x1coordinate = coordinate1[0]; //points[row][0]
            int y1coordinate = coordinate1[1];
            
            vector<int> coordinate2= points[row + 1];
            int x2coordinate = coordinate2[0];
            int y2coordinate = coordinate2[1];
            
            int xdifference = abs(x2coordinate - x1coordinate); //2
            int ydifference = abs(y2coordinate - y1coordinate); //1
            
            int min_diagonal = min(xdifference, ydifference);
            seconds += min_diagonal + abs(ydifference - xdifference);
        }
        
        return seconds;
    }
};