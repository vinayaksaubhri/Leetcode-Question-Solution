class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
      vector<pair<int,int>> v;
        vector<int> ans;
        int m=0;
        for(auto i : mat){ //making a vector of pair to store number of soldiers and the index of the row.
            int sum=0;
             for(auto j :i){
                 sum += j ;
             }
            v.push_back(make_pair(sum,m++));
        
        }
        sort(v.begin(),v.end());//sorting on the bases of numbe of soldiers
     for(int i=0;i<k;++i){
         ans.push_back(v[i].second);
     }
        return ans;
    }
};