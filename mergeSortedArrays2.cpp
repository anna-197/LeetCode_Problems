class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // comparing from last elements
        // i=2nd index and j=2nd index in given ex
        int i=m-1 , j=n-1 ;
        while(i>=0 && j>=0 ){
            if(nums1[i]>=nums2[j]){
                nums1[i+j+1]=nums1[i] ;
                i-- ;
                }else{
                    nums1[i+j+1]=nums2[j];
                    j-- ;
                }
        }

        // extra left in nums2 are the ones being repeated or being greater, so simply insert them
        while(j>=0){
                    nums1[i+j+1]=nums2[j];
                    j-- ;
                }
    }
};