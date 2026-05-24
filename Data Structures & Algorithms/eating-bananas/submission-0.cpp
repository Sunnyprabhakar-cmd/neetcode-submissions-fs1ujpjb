class Solution {
public:
    long cal(vector<int>& piles, int h,int mid){
        long count=0;
        for(int i = 0; i < piles.size(); i++){
            count += (piles[i] + mid - 1) / mid;
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=*max_element(piles.begin(),piles.end());
        int mini=INT_MAX;
        while(left<=right){
            long long  mid=left+(right-left)/2;
            long long result=cal(piles,h,mid);
            if(result>h){
                left=mid+1;
            }
            else{ 
                mini=mid;
                right=mid-1;
            }
        }
        return mini;
    }
};