#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int i=10;i<=99;i++){
		int a=i,m=0,cnt=10;
		while(a){
			m=m+(a%10)*cnt;
			a/=10;
			cnt/=10;
		}
		if((m-i)==36){
			cout<<i<<endl;
		}
	}
    return 0;
}
