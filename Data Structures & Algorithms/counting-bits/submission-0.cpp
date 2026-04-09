class Solution {
public:
    int count_set(int n)
    {
        int count=0;
        for(int i=0;i<32;i++)
        {
            count+=1&(n>>i);
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>temp;
        for(int i=0;i<=n;i++){
            temp.push_back(count_set(i));
        }
        return temp;
    }
};
