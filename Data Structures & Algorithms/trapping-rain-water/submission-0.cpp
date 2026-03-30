class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int maxleft=height[left];
        int right=height.size()-1;
        int maxright=height[right];
        int water=0;
        while(left<right){
           if(height[left]<height[right]){
              if(maxleft<=height[left]){
               maxleft=height[left];
               }
               else{
                water+=maxleft-height[left];
                }
                left++;
           }
           else{
           if(maxright<=height[right]){
            maxright=height[right];
           }
           else{
            water+=maxright-height[right];
           }
           right--;
           }
        }
        return water;
    }
};