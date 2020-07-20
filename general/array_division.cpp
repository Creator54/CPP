/*
Given an array , return true if the array can be divided into three non-empty parts with equal sums.

Try it!
*/

#include<iostream>
#define f(i,a,b) for(int i=a;i<b;i++)

int size;
int *sort(int arr[]){
	f(i,0,size-1){
		int tmp,smallest=arr[i],s_index=i;
		f(j,i+1,size)if(smallest>arr[j]) smallest=arr[j],s_index=j;
		if(s_index!=i) tmp =arr[i],arr[i]=smallest,arr[s_index]=tmp;
	}
	return arr;
}

int main(){
	int sum=0,s1=0,s2=0;
	std::cin>>size;
	int arr[size];
	f(i,0,size) std::cin>>arr[i],sum+=arr[i];
	sort(arr);
	if(sum%3==0){
		f(i,0,size){
			if(s1!=sum/3)s1+=arr[i];
			else{
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