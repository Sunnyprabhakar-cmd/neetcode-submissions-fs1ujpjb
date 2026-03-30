class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int maxi=INT_MIN;
        while(left<right){
            int maxi_area=min(heights[left],heights[right])*(right-left);
            maxi=max(maxi,maxi_area);
            if(heights[left]>heights[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return maxi;
    }
};
