#include<iostream>
using namespace std;


void merge(int arr[],int l,int mid, int u){

   
   int a1len=mid-l+1;
   int a2len=u-mid;

   int a1[a1len];
   int a2[a2len];

   for (int i = 0; i <a1len; ++i)
   {
     a1[i]=arr[l+i];
   }
   
   for (int i = 0; i < a2len; ++i)
   {
      a2[i]=arr[mid+1+i];
   }

   
   int i=0;
   int j=0;
   int k=l;

   while(i<a1len && j<a2len){

        if(a1[i]<a2[j]){
         arr[k++]=a1[i++];
        }
        else{
         arr[k++]=a2[j++];
        }

   }

while(i<a1len){
   arr[k++]=a1[i++];
}
while(j<a2len){
   arr[k++]=a2[j++];
}


}



void mergesort( int arr[], int l,int u){


  if(l>=u)
  {
     return;
  }
  int mid=(l+u)/2;
  mergesort(arr,l,mid);
  mergesort(arr,mid+1,u);
  merge(arr,l,mid,u);

}

int main(){



int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
   cin>>arr[i];
}

mergesort(arr,0,n-1);

for (int i = 0; i < n; ++i)
{
   cout<<arr[i]<<" ";
}


    return 0;

}
