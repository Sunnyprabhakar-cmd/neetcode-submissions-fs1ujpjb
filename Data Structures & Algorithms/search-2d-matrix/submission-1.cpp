class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         if(matrix.empty() || matrix[0].empty()) {
            return false;
        }
       int left=0;
       int right=matrix.size()-1;
       int vs=matrix[0].size()-1;
       while(left<=right){
        int mid=left+(right-left)/2;
        if(matrix[mid][0]<=target && matrix[mid][vs]>=target){
            int low=0;
            int high=vs;
            while(low<=high){
                int midi=low+(high-low)/2;
                if(matrix[mid][midi]==target){
                    return true;
                }
                else if(matrix[mid][midi]>target){
                    high=midi-1;
                }
                else{
                    low=midi+1;
                }
            }
            return false;
        }
        else if(matrix[mid][0]>target){
            right=mid-1;
        }
        else if(matrix[mid][vs]<target){
            left=mid+1;
        }
       }
       return false;
    }
};
