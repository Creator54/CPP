#include<iostream>
using namespace std;

int h,count=0,c1=0;
char x;
void top(int mid){
	for(int i=0;i<h;i++){
		for(int j=0;j<mid;j++)
			cout<<" ";
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
	cout<<endl<<endl;
}
void middle(int mid){

}
void bottom(int mid){
	for(int i=0;i<(3*h+1);i++) cout<<x<<" ";
	cout<<endl;
	for(int i=0;i<h;i++){
		for(int j=0;j<count+1;j++) cout<<" ";
		cout<<x;
		count++;
		for(int j=0;j<c1;j++) cout<<" ";
		if(i!=h-1) cout<<x<<endl;
		c1-=2;
	}
	cout<<endl;
}
void star(){
	system("clear");
	int mid = (3*h+1)/2 + h+1;
	top(mid);
	middle(mid);
	bottom(mid);
}
int main(){
	cin>>h>>x;
	star();
}