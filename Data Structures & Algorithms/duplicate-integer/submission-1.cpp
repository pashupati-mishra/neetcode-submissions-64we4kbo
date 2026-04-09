class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>um;
        for(int i=0;i<n;i++)
        {
            um[nums[i]]++;
        }
        for(auto it:um)
        {
            if(it.second>=2)
            {
                return true;
            }
        }
        return false;
    }
};