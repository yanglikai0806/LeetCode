class Solution {
public:
    int massage(vector<int>& nums) {
    	int i, n = nums.size();
    	if(n == 0) return 0;
    	if(n == 1) return nums[0];
    	int dp[n] = {0};
    	dp[0] = nums[0];
    	dp[1] = nums[1];
    	for(i = 2; i < n; i++)
    	{
    		dp[i] = max(dp[i-2]+nums[i], dp[i-1]);
    	}
    	return dp[n-1];
    }
};