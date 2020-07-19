/*
Given an array , return true if the array can be divided into three non-empty parts with equal sums.

Try it!
*/

#include<iostream>
#define f(i,a,b) for(int i=a;i<b;i++)

int main(){
	int size,sum=0,s1=0,s2=0,f1=1;
	std::cin>>size;
	int arr[size];
	f(i,0,size) std::cin>>arr[i],sum+=arr[i];
	if(sum%3==0){
		f(i,0,size){
			if(f1!=0)s1+=arr[i];
			if(s1==sum/3){
				f1=0;
				if(s2<sum/3){
					s2+=arr[i];
					if(s2==sum/3){
						std::cout<<"true";
						return 0;
					}
				}
				else break;
			}
		}
	}
	std::cout<<"false";
}