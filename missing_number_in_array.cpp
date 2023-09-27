#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE 
	freopen("input1.txt", "r" , stdin);
	freopen("output1.txt", "w" , stdout);
#endif

    int n;
    cin>>n;

	int nums[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>nums[i];
	}

//first method of solving brute force aprrocah

	 vector<int> arr(n,-1);
        
        for(int i=0;i<n;i++){
            int x=nums[i];
            
            if(nums[i]<n) arr[nums[i]]=1; 
        }
        
        int ans=n;
        
        for(int i=0;i<n;i++){
            if(arr[i]!=1){
                ans=i;
            }
        }

        cout<<"1th approach"<<" "<<ans<<endl;

// by maths n(n+1)/2;
        int sum=0;

        for (int i = 0; i < n; ++i)
        {
        	sum+=nums[i];

        	
        }

        cout<<((n*(n+1))/2)-sum<<endl;

//Method 3 XOR

        

return 0;
}
