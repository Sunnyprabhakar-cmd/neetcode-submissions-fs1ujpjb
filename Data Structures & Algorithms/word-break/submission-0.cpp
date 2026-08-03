class Solution {
public:
    vector<int>dp;
    bool findd (int idx, string s, vector<string> & wordDict){
      if(idx==s.size()){
        return true;
      }
      if(dp[idx]!=-1){
        return dp[idx];
      }
       for(auto & word: wordDict){
        int len=word.size();
        if(idx+len<=s.size() && s.substr(idx,len)==word){
          if(findd(idx+len,s,wordDict)){
            return dp[idx]=true;
          }
        }
       }
       return dp[idx]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
      if(s.size()==0){
        return true;
      }
      dp.assign(s.size(),-1);
      return findd(0,s,wordDict);
    }
};
