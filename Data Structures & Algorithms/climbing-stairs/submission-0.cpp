class Solution {
public:
vector<int>vec;
    int solve(int n){
         if(n==0|| n==1){
            return 1;
        }
        if(vec[n]!=-1){
            return vec[n];
        }
        return vec[n]=solve(n-1)+solve(n-2);
    }
    int climbStairs(int n) {
        vec.resize(n+1,-1);
       return solve(n);
    }
};
