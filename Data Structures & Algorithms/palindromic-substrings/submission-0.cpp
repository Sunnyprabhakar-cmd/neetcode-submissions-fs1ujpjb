class Solution {
public:
    vector<vector<int>>dp;
    bool ispal(string &s, int i, int j){
        if(i>=j){
            return true;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i]!=s[j]){
            return false;
        }
        return dp[i][j]=ispal(s,i+1,j-1);
    }
    int countSubstrings(string s) {
        if(s.size()==1){
            return 1;
        }
        dp.assign(s.size(),vector<int>(s.size(),-1));
        int count=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(ispal(s,i,j)){
                    count++;
                }
            }
        }
        return count;
    }
};
