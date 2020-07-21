/*
Chefina and Swaps

Chefina has two sequences A1,A2,…,AN and B1,B2,…,BN. She views two sequences with length N as identical if,
after they are sorted in non-decreasing order, the i-th element of one sequence is equal to the i-th element
of the other sequence for each i (1≤i≤N).
To impress Chefina, Chef wants to make the sequences identical. He may perform the following operation zero
or more times: choose two integers i and j (1≤i,j≤N) and swap Ai with Bj.You have to find the minimum total cost with which Chef can make the two sequences identical.

Input:
The first line of the input contains a single integer T denoting the number of test cases.
The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,…,AN.
the third line contains N space-separated integers B1,B2,…,BN.

Output:
For each test case, print a single line containing one integer ― the minimum cost, or −1 if no valid sequence of operations exists.


Input:
3
1
1
2
2
1 2
2 1
2
1 1
2 2

Output:
-1
0
1

Explanation:
Example case 1: There is no way to make the sequences identical, so the answer is −1.
Example case 2: The sequence are identical initially, so the answer is 0.
Example case 3: We can swap A1 with B2, which makes the two sequences identical, so the answer is 1.
*/

#include<iostream>
#define f(i,a,b) for(int i=a;i<b;i++)

struct multi{
	int arr_a[100],arr_b[100];
}x;

int size,flag,cost;

int *sort(int arr[]){
	f(i,0,size-1){
		int tmp,smallest=arr[i],s_index=i;
		f(j,i+1,size)if(smallest>arr[j]) smallest=arr[j],s_index=j;
		if(s_index!=i) tmp =arr[i],arr[i]=smallest,arr[s_index]=tmp;
	}
	return arr;
}

void swap(int i,int dup_count,int dup){
	if(dup==x.arr_a[i]){
		int tmp= x.arr_b[i];
		x.arr_b[i]=dup,x.arr_a[i+dup_count/2]=tmp;
		//std::cout<<cost<<" ";
		//f(n,0,size) std::cout<<x.arr_a[n]<<"|"<<x.arr_b[n]<<std::endl;
	}
	else{
		int tmp= x.arr_a[i];
		x.arr_a[i]=dup,x.arr_b[i+dup_count/2]=tmp;
	}
}

void *swap_cost(){
	f(i,0,size){
		if(x.arr_a[i]!=x.arr_b[i]){
			int dup_count=0,dup;
			if(x.arr_a[i]>x.arr_b[i]){
				f(j,i,size)if(x.arr_b[i]==x.arr_b[j]) dup_count++;
				dup=x.arr_b[i];
			}
			else {
				f(j,i,size)if(x.arr_a[i]==x.arr_a[j]) dup_count++;
				dup=x.arr_a[i];
			}
			if(dup_count!=0){
				//std::cout<<"cost("<<x.arr_a[i]<<","<<x.arr_b[i]<<")="<<cost<<std::endl;
				swap(i,dup_count,dup);
				cost++;
				sort(x.arr_b),sort(x.arr_a);
				//std::cout<<"i="<<i<<" "<<"dup_count="<<dup_count<<" "<<"dup="<<dup<<std::endl;
				//f(n,0,size) std::cout<<x.arr_a[n]<<"|"<<x.arr_b[n]<<std::endl;
			}
		}
	}
	//f(n,0,size) std::cout<<x.arr_a[n]<<"|"<<x.arr_b[n]<<std::endl;
}

void *check(){
	f(i,0,size){
		if(x.arr_a[i]==x.arr_b[i]){
			if(i==size-1) flag=0;
		}
		else break;
	}
	if(flag!=0) swap_cost();
}

void solve(){
	flag=-1,cost=0;
	std::cin>>size;
	f(i,0,size) std::cin>>x.arr_a[i];
	f(i,0,size) std::cin>>x.arr_b[i];
	sort(x.arr_a),sort(x.arr_b);
	//f(n,0,size) std::cout<<x.arr_a[n]<<"|"<<x.arr_b[n]<<std::endl;
	check();
	(cost!=0)? std::cout<<cost<<std::endl:std::cout<<flag<<std::endl;
}

int main(){
	int testcase;
	std::cin>>testcase;
	f(i,0,testcase) solve();
}
