class Solution {
public:
    bool isPalindrome(string s) {
        string s2;

        for(char c : s){
            if(isalnum(c)){
                s2 += tolower(c);
            }
        }
        int n = s2.size();

        for(int i = 0; i<n/2; i++){
            if(s2[i] != s2[n-1-i]){
                return false;
            }
        }        
        return true;
    }
};
