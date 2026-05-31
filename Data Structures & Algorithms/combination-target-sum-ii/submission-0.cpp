class Solution {
public:
    void solve(
        vector<vector<int>>&res,
        vector<int>&temp,
        vector<int>&nums,
        int target,
        int start
    ){
        if(target==0){
           res.push_back(temp);
           return;
        }
        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i]>target){
                break;
            }
            temp.push_back(nums[i]);
            solve(res,temp,nums,target-nums[i],i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>res;
        vector<int>temp;
        int start=0;
        solve(res,temp,candidates,target,start);
        return res;
    }
};