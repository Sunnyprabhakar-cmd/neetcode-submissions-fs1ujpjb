class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string a="";
        int idx=-1;
        int size=0;
        for(int i=0;i<s.size();i++){
            idx=a.find(s[i]);
            if(idx!=string::npos){
                size=max(size,(int)a.length());
                while(idx>=0){
                    a.erase(a.begin());
                    idx--;
                }
                
            }
            a+=s[i];
            size=max(size,(int)a.length());
        }
        return size;
    }
};