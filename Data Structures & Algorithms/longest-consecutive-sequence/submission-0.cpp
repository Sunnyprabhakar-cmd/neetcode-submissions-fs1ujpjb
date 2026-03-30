class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int maxi=0;
        for(auto i:s){
            if(s.find(i-1)==s.end()){
                int count=1;
                int curr=i;
                while(s.find(curr+1)!=s.end()){
                    count++;
                    curr++;
                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};