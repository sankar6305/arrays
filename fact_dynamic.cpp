#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dyn[100];
int fact(int n){
	if(n==2){
		return n;
	}
	if(dyn[n]!=-1){
		return dyn[n];
	}
	//cout<<dyn[n];
	return dyn[n]=n*fact(n-1);
	
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		dyn[i]=-1;
	}
	cout<<fact(n);
}
/*
#include<bits/stdc++.h>
using namespace std;
int dp[100005];
int fact(int n)
{
	if(n<=1)
	   return 1;
	if(dp[n]!=-1)
	   return dp[n];
	return dp[n]=n*fact(n-1);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		dp[i]=-1;
	}
	cout<<fact(n);
	return 0;
}*/