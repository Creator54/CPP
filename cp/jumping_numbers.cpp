// jumping numbers

#include<iostream>
using namespace std;

int mod( int a, int b){
	if(a>b) return a-b;
	else return b-a;
}

int main(){
	int input;
	cin >> input;
	for( int i=0; i<input; i++){
		if( i<=10) cout << i << "\t";
		else if( i<100 && mod( i/10, i%10)== 1) cout << i << "\t";
		else if( i<1000 && mod( i/100, (i%100)/10)== 1 && mod( (i%100)/10, (i%100)%10)== 1) cout << i << "\t";
	}
	return 0;
}
