#include<bits/stdc++.h>
using namespace std;
long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        long long mini=1e9;
        for(int i=0;i<=n-m;i++)
        {
            long long ans=abs(a[i]-a[i+m-1]);
            mini=min(ans,mini);
        }
        return mini;
    
    } 
int main()
{
    vector<long long>a={3, 4, 1, 9, 56, 7, 9, 12};
    long long n=8;
    long long m=5;
    cout << "answer is " << findMinDiff(a,n,m) << endl;
}