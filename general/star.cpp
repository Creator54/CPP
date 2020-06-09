#include<iostream>
using namespace std;

int h,count=0,c=0,c1=0,c2=0;
char x;
void top(int mid){
	for(int i=0;i<h;i++){
		for(int j=0;j<mid;j++){
			cout<<" ";
		}
		if(i==0)cout<<x<<endl;
		else{
			count++;
			cout<<x;
			for(int j=0;j!=2*i-1;j++){
				cout<<" ";
				if(i==h-1)c1++;
			}
			cout<<x<<endl;
		}
		mid--;
	}
	count=mid;
	for(int i=0;i<(3*h+1);i++) cout<<x<<" ";
	cout<<endl;
}
void middle(int mid){
	int tmp=c1,tmp1=0,tmp_count=0;
	for(int i=0;i<h;i++){
		c2++;
		for(int j=0;j<c2;j++){
			cout<<" ";
			if(i==h-2) tmp_count++;
		}
		cout<<x;
		for(int j=0;j<tmp;j++) cout<<" ";
		if(i!=h-1) cout<<x;
		for(int j=0;j<mid-2;j++){
			if(i==h-1) tmp1++;
			cout<<" ";
		}
		cout<<x;
		for(int j=0;j<tmp;j++) cout<<" ";
		if(i!=h-1) cout<<x<<endl;
		tmp-=2,mid+=2;
	}
	cout<<endl;
	tmp=1,tmp1-=2,mid-=5;
	for(int i=0;i<h-1;i++){
		for(int j=0;j<tmp_count;j++) cout<<" ";
		cout<<x;
		for(int j=0;j<tmp;j++) cout<<" ";
		cout<<x;
		for(int j=0;j<tmp1;j++) cout<<" ";
		cout<<x;
		for(int j=0;j<mid-tmp1;j++) cout<<" ";
		cout<<x<<endl;
		tmp+=2,tmp1-=2,tmp_count--;
	}
}
void bottom(int mid){
	int tmp=c1;
	for(int i=0;i<(3*h+1);i++) cout<<x<<" ";
	cout<<endl;
	for(int i=0;i<h;i++){
		for(int j=0;j<count+1;j++) cout<<" ";
		cout<<x;
		count++;
		for(int j=0;j<tmp;j++) cout<<" ";
		if(i!=h-1) cout<<x<<endl;
		tmp-=2;
	}
	cout<<endl;
}
int main(){
	//system("clear");
	cin>>h>>x;
	int mid = (3*h+1)/2 + h+1;
	top(mid);
	middle(mid);
	bottom(mid);
}