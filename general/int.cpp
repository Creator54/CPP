//first integer divisible by all integers 1-10

#include<iostream>
using namespace std;

int check(int a,int b){
	if(a%b==0) return 0;
	else return 1;
}
	
int main(){
	int a=1,i,sum=0;
	while(1){
		for(i=1;i<=10;i++){
			sum+=check(a,i);
			if(sum==0 && i==10){
			    cout<<a<<endl;
			    exit(1);
			}
		}
		a++;
		sum =0;
	}
}
