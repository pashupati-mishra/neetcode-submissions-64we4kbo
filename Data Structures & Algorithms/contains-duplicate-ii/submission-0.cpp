class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_map<int,int>um;
        int n=nums.size();
        int low=0,high=0;
        while(high<n)
        {
            if(um.find(nums[high]) != um.end())
                return true;
            um[nums[high]]++;
            if(high - low >= k)
            {
                um[nums[low]]--;
                if(um[nums[low]] == 0)
                    um.erase(nums[low]);
                low++;
            }

            high++;
        }
        return false;
    }
};