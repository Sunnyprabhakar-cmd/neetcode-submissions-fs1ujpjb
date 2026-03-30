class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int i=0;
        while(i<tokens.size()){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();

                int result=0;
                if(tokens[i]=="+"){
                    result=b+a;
                    st.push(result);
                }
                if(tokens[i]=="-"){
                    result=b-a;
                    st.push(result);
                }
                if(tokens[i]=="*"){
                    result=b*a;
                    st.push(result);
                }
                if(tokens[i]=="/"){
                    result=b/a;
                    st.push(result);
                }
            }
            else{
                st.push(stoi(tokens[i]));
            }
            i++;
        }
        return st.top();
    }
};