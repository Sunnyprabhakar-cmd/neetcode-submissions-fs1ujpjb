class Solution {
public:
    vector<int>vec;
    int solve(int i,vector<int>& cost){
        if(i>=cost.size()){
            return 0;
        }
        if(vec[i]!=-1){
            return vec[i];
        }
        return vec[i]=cost[i]+min(solve(i+1,cost),solve(i+2,cost));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vec.resize(n,-1);
        return min(solve(0,cost),solve(1,cost));
    }
};
