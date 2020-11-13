class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0;i<A.size();++i){
            int start=0;
            int end=A[i].size()-1;
            while(start<end){
                std::swap(A[i][start++],A[i][end--]);
            }
        }
        for(int row=0;row<A.size();++row){
            for(int col=0;col<A[row].size();++col){
                A[row][col]=A[row][col]==1?0:1;
            }
        }
        return A;
    }
};