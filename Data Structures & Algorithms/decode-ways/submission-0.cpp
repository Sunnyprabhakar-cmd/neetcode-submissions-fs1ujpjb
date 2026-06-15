class Solution {
public:
    vector<int>dp;
    int solve(string &s,int i){
        if(i==s.size()){
            return 1;
        }
        if(s[i]=='0'){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int count=solve(s,i+1);
        if(i+1<s.size()){
            int num=(s[i]-'0')*10+(s[i+1]-'0');
            if(num>=10 && num<=26){
                count+=solve(s,i+2);
            }
        }
        return dp[i]=count;
    }
    int numDecodings(string s) {
        dp.assign(s.size(),-1);
        return solve(s,0);
    }
};