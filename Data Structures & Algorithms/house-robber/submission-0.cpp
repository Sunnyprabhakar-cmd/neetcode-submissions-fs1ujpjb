class Solution {
public:
    vector<int>vec;
    int solve(int i,vector<int>& nums){
        if(i>=nums.size()){
            return 0;
        }
        if(vec[i]!=-1){
            return vec[i];
        }
        return vec[i]=nums[i]+max(solve(i+2,nums),solve(i+3,nums));
    }
    int rob(vector<int>& nums) {
        vec.resize(nums.size(),-1);
        return max(solve(0,nums),solve(1,nums));
    }
};
