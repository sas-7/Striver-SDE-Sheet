TC: O(N*M+N*M)
SC: O(N)    

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size(),col=matrix[0].size();
        vector<int>v1(row,-1),v2(col,-1);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    v1[i]=0;
                    v2[j]=0;
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(v1[i]==0 || v2[j]==0) matrix[i][j]=0;
            }
        }
    }
};



TC: O(2*(N*M))
SC: O(1)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size(),col=matrix[0].size();
        //vector<int>v1(row,-1),v2(col,-1);
        bool flag=true;
        for(int i=0;i<row;i++){
            if(matrix[i][0]==0) flag=false;
            for(int j=1;j<col;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
            }
            if(flag==false) matrix[i][0]=0;
        }
    }
};
