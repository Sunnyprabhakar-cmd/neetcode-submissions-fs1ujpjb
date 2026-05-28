class Solution {
public:
    void all(vector<string>&vec,string &temp,vector<string>& ans,string digit,int i){
        if(digit.size()==i){
            ans.push_back(temp);
            return;
        }
        string latter=vec[digit[i]-'0'];
        for(auto j:latter){
            temp.push_back(j);
            all(vec,temp,ans,digit,i+1);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits==""){
            return {};
        }
        vector<string>vec={
            "","",{"abc"},{"def"},{"ghi"},{"jkl"},{"mno"},{"pqrs"},{"tuv"},{"wxyz"}
        };
        string temp;
        vector<string> ans;
        int i=0;
        all(vec,temp,ans,digits,i);
        return ans;
    }
};
