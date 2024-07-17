 #include<bits/stdc++.h>
using namespace std;
 int maxProfit(vector<int>& prices) {
        int start=prices[0];
        int max=0;
        for(int i=1;i<prices.size();i++)
        {
            if(start<prices[i])
            {
                max+=prices[i]-start;
            }
            start=prices[i];
        }
        return max;
}
int main()
{
    vector<int>prices={7,1,5,3,6,4};
    cout << maxProfit(prices) << endl;
    return 0;
}