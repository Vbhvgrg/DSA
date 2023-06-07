class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int j=n-1;

        int leftd =0;
        int rigd =0;

        for(int i=0;i<n;i++){
            leftd+=mat[i][i];
        }

        

        for(int i=0;i<n;i++){
            if(i!=j){
                rigd += mat[i][j];
            }
            j--;
        }


        return leftd + rigd;
    }
};
