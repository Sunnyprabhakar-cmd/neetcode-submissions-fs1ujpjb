class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int height=0;
        int width=0;
        int area=0;
        for(int i=0;i<=heights.size();i++){
            while(!st.empty() &&(i==heights.size() || heights[st.top()]>=heights[i])){
                height=heights[st.top()];
                st.pop();
                if(st.empty()){
                    width=i;
                }
                else{
                    width=i-st.top()-1;
                }
                area=max(area,height*width);
            }
            st.push(i);
        }
        return area;
    }
};