#include<bits/stdc++.h>
using namespace std;
int n;
bool del(int a[],int val){
	int index;
	for(int i=0;i<n;i++){
		if(val==a[i]){
			index=i;
			break;
		}
		if(i==n-1){
			return false;
		}
	}
	for(int i=index;i<n;i++){
		a[i]=a[i+1];
	}
	n=n-1;
	return true;
}
int main(){
	cin>>n;
	cout<<"ENter elements \n";
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter element to delete \n";
	int de;
	cin>>de;
	if(del(a,de)){
		cout<<"Element deleted !!\n";
	}
	else{
		cout<<"Element is not present in the array !!\n";
	}
}
