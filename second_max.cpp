#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={9,9,9,9,9,9,9,9};
	int val1=arr[0];
	int val2=-1;
	for(int i=1;i<8;i++){
		if(arr[i]>val1){
			val2=val1;
			val1=arr[i];
		}
		else if(a[i]>val2 && a[i]!=val1){
			val2=a[i];
		}
	cout<<"Second largest element \n"<<val2;
}
