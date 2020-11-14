class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
int m = matrix.size() , n = matrix[0].size();
    vector<int> res;

    for(int i=0; i<m; i++)
    {
        int mini = INT_MAX, maxi = INT_MIN , k = -1;
        for(int j=0; j<n; j++)
        {
            if(mini > matrix[i][j]) mini = matrix[i][j] , k=j;
        }
     
        for(int l=0; l<m; l++)
        {
            if(maxi < matrix[l][k]) maxi = matrix[l][k];
        }
       
        if(maxi == mini) res.push_back(maxi);
    }
    return res;
}   
};