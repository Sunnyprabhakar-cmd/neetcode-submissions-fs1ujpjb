class Solution {
public:
    void solve(int n, vector<string>&vec,string temp, int op , int cl){
        if((int)temp.length()==2*n){
            vec.push_back(temp);
            return;
        }
        if(op<n){
            solve(n,vec,temp+'(',op+1,cl);
        }
        if(cl<op){
            solve(n,vec,temp+')',op,cl+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>vec;
        string temp="";
        solve(n,vec,temp,0,0);
        return vec;
    }
};