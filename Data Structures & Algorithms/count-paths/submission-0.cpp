class Solution {
public:
    vector<vector<int>>dp;
    int f(int m, int n, int count){
        if(m==0 && n==0){
            return 1;
        }
         if(m<0 || n<0){
            return 0;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        
        return dp[m][n]=f(m,n-1,count)+f(m-1,n,count);
    }
    int uniquePaths(int m, int n) {
        dp.resize(m,vector<int>(n,-1));
        return f(m-1,n-1,0);
    }
};
