class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
   int sum=0;//sum variable that store the sum
   int n=mat.size();
        for(int i=0;i<n;++i){
            
            sum += mat[i][i];//sum of the primary diagonal
            
            int j=n-i-1;
            if(j!=i)
             sum += mat[i][j];//sum of the secondary diagonal
            
        }
        return sum;
    }
};