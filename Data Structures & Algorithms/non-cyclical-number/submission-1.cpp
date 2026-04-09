class Solution {
public:
    int square_sum(int n)
    {
        int sum=0;
        while(n)
        {
            int rem=n%10;
            sum+=(rem*rem);
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) 
    {
        unordered_map<int,int>um;
        while(n!=1)
        {
            n=square_sum(n);
            cout<<n<<" ";
            if(n!=1)
            {
                if(um.find(n)!=um.end())return false;
                um[n]++;
            }
        }
        return true;
    }
};
