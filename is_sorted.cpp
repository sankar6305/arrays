#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[10];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int flag=0;
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			flag=1;
		}
	}
	(flag==1)?(cout<<"No\n"):(cout<<"Yes\n");
}
