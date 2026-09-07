#include<bits/stdc++.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char>st;
        int l = 0, r = 0;
        int length = 0;
        while(r < n){
            while(st.find( s[r])!=st.end() ){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            length = max(length,r-l+1);
            r++;
        }

        return length;
    }
};
