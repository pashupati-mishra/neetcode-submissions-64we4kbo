class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        unordered_map<int,int>um;
        for(int i=0;i<n;i++)
        {
            int diff=target-nums[i];
            if(um.find(diff)!=um.end() && i!=um[i])
            {
                return {min(i,um[diff]),max(i,um[diff])};
            }
            um[nums[i]]=i;
            // cout<<i<<" ";
        }
        return {0,0};
    }
};
