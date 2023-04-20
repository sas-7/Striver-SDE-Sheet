class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int ans=0,i=0,j=0;
        while(i<s.length() && j<s.length()){
            if(st.find(s[j])!=st.end()) st.erase(s[i++]); 
            else{
                st.insert(s[j++]);
                ans=max(ans,j-i);
            }
        }
        return ans;
    }
};
