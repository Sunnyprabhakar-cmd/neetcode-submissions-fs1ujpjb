class Solution {
public:
    void summ(vector<int>&nums,vector<vector<int>>&vec,vector<int>&temp,int i, int sum , int target){
        if(i==nums.size() || sum>target){
            return;
        }
        else if(sum==target){
            vec.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        summ(nums,vec,temp,i,sum+nums[i],target);
        temp.pop_back();
        summ(nums,vec,temp,i+1,sum,target);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
       int sum=0;
       vector<vector<int>>vec;
       vector<int>temp;
       summ(nums,vec,temp,0,sum,target);
       return vec;
    }
};
