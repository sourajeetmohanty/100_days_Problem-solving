```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
            return 0;
        int minp=INT_MAX;
        int maxp=INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
            
                minp=min(minp,prices[i]);
                maxp=max(maxp,(prices[i]-minp));
        }
        return maxp;
    }
};

```
