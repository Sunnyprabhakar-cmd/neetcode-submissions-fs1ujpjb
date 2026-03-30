class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<=right){
            if(isspace(s[left]) || !isalnum(s[left])){
                while(left<s.size() && !isalnum(static_cast<unsigned char>(s[left]))){
                    left++;
                }
            }
            if(isspace(s[right]) || !isalnum(s[right])){
                while(right>0 && !isalnum(static_cast<unsigned char>(s[right]))){
                    right--;
                }
            }
            if(tolower(s[left])!=tolower(s[right]) && isalnum(s[left]) &&  isalnum(s[right])){
               return false;
            }
            right--;
            left++;
        }
        return true;
    }
};