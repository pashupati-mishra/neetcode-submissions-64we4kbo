class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int n=nums.size();
        int ans=n;
        int sum=nums[0];
        int low=0,high=0;
        bool flag=false;
        while(high<n)
        {
            if(sum>=target)
            {
                ans=min(ans,high-low+1);
                flag=true;
                sum=sum-nums[low];
                low++;
            }
            else
            {
                high++;
                sum+=nums[high];
            }
        }
        if(!flag)return 0;
        return ans;
    }
};