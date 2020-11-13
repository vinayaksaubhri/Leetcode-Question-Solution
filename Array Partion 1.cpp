class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());//sort the array to make pair as the sum have to be maximize the smaller number have to be paired with smaller number and bigger with biggernumber
        int sum=0;
        for(int i=0;i<nums.size();i=i+2){   
            sum=sum+std::min(nums[i],nums[i+1]);
        }
        return sum;
    }
};