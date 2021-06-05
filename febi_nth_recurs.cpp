#include<bits/stdc++.h>
using namespace std;
int n;
/*void febi(int arr[]){
	int i=2;
	while(i<=n){
		arr[i]=arr[i-1]+arr[i-2];
		i++;
	}
	cout<<arr[n-1];
}*/
void febi(int arr[],int i){
	if(i>n){
		return;
	}
	if(i==(n)){
		cout<<arr[n-1];
		return;
	}
	arr[i]=arr[i-1]+arr[i-2];
//	cout<<arr[i]<<" ";
	i=i+1;
	febi(arr,i);
}
int main(){
	cin>>n;
	int arr[n+1];
	arr[0]=0;
	arr[1]=1;
	int i=2;
	febi(arr,i);
}
