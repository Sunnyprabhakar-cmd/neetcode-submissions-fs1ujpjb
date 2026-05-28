class Solution {
public:
    void per(vector<int>& nums,vector<bool>&used,vector<int>&temp,vector<vector<int>>&vec){
        if(temp.size()==nums.size()){
            vec.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(used[i]){
                continue;
            }
            used[i]=true;
            temp.push_back(nums[i]);
            per(nums,used,temp,vec);
            temp.pop_back();
            used[i]=false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>used(nums.size(),false);
        vector<vector<int>>vec;
        vector<int>temp;
        per(nums,used,temp,vec);
        return vec;
    }
};
