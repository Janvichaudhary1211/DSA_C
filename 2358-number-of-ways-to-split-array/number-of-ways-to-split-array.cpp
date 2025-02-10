class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        for(int &num: nums)
        {
            sum=sum+num;
        }
        long long left_sum=0;
        long long right_sum=0;
        int split=0;
        for(int i=0; i<n-1; i++)
        {
            left_sum=left_sum+nums[i];
            right_sum=sum-left_sum;
            if(left_sum>=right_sum)
            split++;
        }
      return split;  
    }
};