class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {      
        unordered_map <int , int> count;
        for(auto i : nums){
            ++count[i];
        }
        sort(nums.begin(),nums.end(),[&](int a, int b) { return count[a] != count[b] ? count[a] < count[b] : a > b; });
        
       return nums; 
    }
};
