#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxprofit=0;
        for(int i=1;i<prices.size();i++)
        {
            int curr=prices[i]-mini;
            mini=min(mini,prices[i]);
            maxprofit=max(maxprofit,curr);
        }
        return maxprofit;
}
int main()
{
    vector<int>prices={7,1,5,3,6,4};
    cout << maxProfit(prices) << endl;
    return 0;
}