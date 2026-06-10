class Solution {
public:
    vector<int>vec;
    int solve(int i,vector<int>& nums,int n){
        if(i>n){
            return 0;
        }
        if(vec[i]!=-1){
            return vec[i];
        }
        int rob=nums[i]+solve(i+2,nums,n);
        int skip=solve(i+1,nums,n);
        return vec[i]=max(rob,skip);
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        vec.assign(nums.size(),-1);
        int rob=solve(0,nums,nums.size()-2);
        vec.assign(nums.size(),-1);
        int skip=solve(1,nums,nums.size()-1);
        return max(rob,skip);
    }
};
