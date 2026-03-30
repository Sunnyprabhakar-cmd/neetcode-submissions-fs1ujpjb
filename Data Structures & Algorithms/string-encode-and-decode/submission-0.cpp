class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(auto j:strs){
            res+=to_string(j.size())+"#"+j;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string>decode;
        for(int i=0;i<s.size();){
             int j=i;
             while(s[j]!='#'){j++;}
             int len=stoi(s.substr(i,j-i));
             string temp=s.substr(j+1,len);
             decode.push_back(temp);
            i=j+1+len;
        }
            
        return decode;
    }
};
