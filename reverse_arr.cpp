#include<iostream>
using namespace std;
int swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int n;
	cin>>n;
	int a[10];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n/2;i++){
		swap(a[i],a[n-i-1]);
	}
	cout<<"after sort\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
