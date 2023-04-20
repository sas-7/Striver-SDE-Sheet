TC: O(N)
SC: O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0,c1=0,c2=0;
        for(auto it:nums){
            if(it==0) c0++;
            if(it==1) c1++;
            if(it==2) c2++;
        }
        int i=0;
        while(c0--){
            nums[i]=0;
            i++;
        }
        while(c1--){
            nums[i]=1;
            i++;
        }
        while(c2--){
            nums[i]=2;
            i++;
        }
    }
};
