#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE 
	freopen("input1.txt", "r" , stdin);
	freopen("output1.txt", "w" , stdout);
#endif

//perfect subarray problem google kickstart 2020 round c q3

int n;
cin>>n;

int arr[n];
for (int i = 0; i < n; ++i)
{
	cin>>arr[i];
}

map<int,int> mp;
mp[0]=1;

int sum=0;
int count=0;
int minsum=0;

for (int i = 0; i < n; ++i)
{
	sum+=arr[i];
	minsum=min(minsum,sum);
	
	int j=0;

	while(sum-j*j>=minsum){

		if(mp[sum-j*j]){
			count+=mp[sum-j*j];
		}
		j++;

	}

	mp[sum]+=1;

}


cout<<count<<endl;

return 0;
}
