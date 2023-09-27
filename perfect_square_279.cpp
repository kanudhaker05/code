#include<bits/stdc++.h>
using namespace std;


int solve(int curr,int sum,vector<int> &s,vector<int> &dp){

if(sum==0) return 0;
if(sum<0 || curr >=100) return 1e6;
if(dp[sum]!=-1) return dp[sum];

return dp[sum]=min(solve(curr,sum-s[curr],s,dp)+1,solve(curr+1,sum,s,dp) );

}


int main(){

#ifndef ONLINE_JUDGE 
	freopen("input1.txt", "r" , stdin);
	freopen("output1.txt", "w" , stdout);
#endif

int n;
cin>>n;

std::vector<int> s;

for (int i = 1; i <=100; ++i)
{
	s.push_back(i*i);
}

vector<int> dp(n+1,-1);
cout<<solve(0,n,s,dp);



return 0;
}
