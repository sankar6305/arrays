#include<iostream>
using namespace std;
int dyn[100];
int feb(int n){
	if(n==1){
		return n;
	}
	if(dyn[n]!=-1){
		return dyn[n];
	}
	return dyn[n]=feb(n-1)+feb(n-2);
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		dyn[i]=-1;
	}
	cout<<feb(n-1);
}
