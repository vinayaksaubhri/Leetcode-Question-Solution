class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int remove_position = (0.05)*arr.size();
        int start =remove_position;
        int end= arr.size()-remove_position;
        double sum=0;
        int remaining_size = arr.size() - (2*remove_position);
        for(int i=start ; i<end ; ++i ){
            sum += arr[i];
        }
        double mean = sum/remaining_size;
        return mean;
    }
};