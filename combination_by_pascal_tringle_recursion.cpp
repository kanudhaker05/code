#include<iostream>
using namespace std;


//solution by using pascal's trigle

int com(int n, int r){

if(r==0||r==n){
	return 1;
}

return com(n-1,r-1)+com(n-1,r);

}



int main(){



int n,r;
cin>>n>>r;

cout<<com(n,r);


	return 0;

}
