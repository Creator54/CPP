#include<iostream>
using namespace std;

int h;
char x;
void top(int mid){
	for(int i=0;i<h;i++){
		for(int j=0;j<mid;j++) cout<<" ";
		if(i==0)cout<<x<<endl;
		else{
			cout<<x;
			for(int j=0;j!=2*i-1;j++) cout<<" ";
			cout<<x<<endl;
		}
		mid--;
	}
	for(int i=0;i<(3*h+1);i++) cout<<x<<" ";
	cout<<endl;
}
void middle(int mid){
}
void bottom(int mid){

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