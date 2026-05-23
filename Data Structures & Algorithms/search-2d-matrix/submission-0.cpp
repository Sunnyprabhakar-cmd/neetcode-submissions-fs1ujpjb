class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left=0;
        int right=matrix[0].size()-1;
        int i=0;
        while(left<=right && i<matrix.size()){
            int mid=left+(right-left)/2;
            if(target<=matrix[i][right]){
                if(matrix[i][mid]==target){
                    return true;
                }
                else if(matrix[i][mid]>target){
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
            else{
                i++;
            }
        }
        return false;
    }
};
