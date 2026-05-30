class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>>&vec,vector<int>&temp,int i){
        if(i==nums.size()){
            vector<int>t=temp;
            sort(t.begin(),t.end());
            auto it=find(vec.begin(),vec.end(),t);
            if(it!=vec.end()){
                return;
            }
            vec.push_back(t);
            return;
        }
        temp.push_back(nums[i]);
        solve(nums,vec,temp,i+1);
        temp.pop_back();
        solve(nums,vec,temp,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>vec;
        vector<int>temp;
        solve(nums,vec,temp,0);
        return vec;
    }
};
