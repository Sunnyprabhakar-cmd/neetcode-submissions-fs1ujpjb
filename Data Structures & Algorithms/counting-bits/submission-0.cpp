class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>vec;
        for(int i=0;i<=n;i++){
            int count=0;
            int j=i;
            while(j>0){
                if(j%2==1){
                    count++;
                }
                j=j>>1;
            }
            vec.push_back(count);
            count=0;
        }
        return vec;
    }
};
