class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        vector<int>temp;
        int n=digits.size();
        int i=n-1;
        bool rem=false;
        while(i>=0)
        {
            if(digits[i]<9)
            {
                temp.push_back(digits[i--]+1);
                rem=false;
                break;
            }
            else
            {
                temp.push_back(0);
                rem=true;
                i--;
            }
        }
        if(rem)
        {
            temp.push_back(1);
        }
        while(i>=0)
        {
            temp.push_back(digits[i--]);
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};
