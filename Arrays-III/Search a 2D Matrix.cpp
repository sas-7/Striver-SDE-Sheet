class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;
        int mat=matrix[0].size();
        int lt=0,rt=(matrix.size()*mat)-1;
        while(lt<=rt){
            int mid=lt+(rt-lt)/2;
            if(matrix[mid/mat][mid%mat]==target) return true;
            if(matrix[mid/mat][mid%mat]<target) lt=mid+1;
            else rt=mid-1;
        }
        return false;
    }
};
