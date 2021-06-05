#include<bits/stdc++.h>
using namespace std;
int n;
/*bool Prime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
} */
bool Prime(int i){
	if(n%i==0){
		return false;
	}
	if(i*i>n){
		return true;
	}
	Prime(i+1);
}
int main(){
//	int n;
	cin>>n;
	cout<<Prime(2);
}
