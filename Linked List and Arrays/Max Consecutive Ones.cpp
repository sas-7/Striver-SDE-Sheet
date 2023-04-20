TC: O(N)
SC: O(1)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxm=0,cnt=0;
        for(auto it:nums){
            if(it==1) cnt++;
            else cnt=0;
            maxm=max(maxm,cnt);
        }
        return maxm;
    }
};
