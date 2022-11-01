#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<string>
#include<cstring>
#include<iomanip>
using namespace std;
int main(){
	for(int i=1000;i<=9999;i++){
		int a=0,b=0,c=i,cnt=0,m=1;
		while(cnt<=1){
			a=a+(c%10)*m;
			cnt++;
			c/=10;
			m*=10;
		}
		cnt=0;m=1;
		while(cnt<=1){
			b=b+(c%10)*m;
			cnt++;
			c/=10;
			m*=10;
		}
		if((a+b)*(a+b)==i)cout<<i<<endl;
	}
    return 0;
}
