#include<iostream>
#include<unistd.h>

using namespace std;

int main(){
    int i=0;
    while(1){
        for(int j=0;j!=i;j++) cout<<"      ";
        cout<<" ]:~:> "<<endl;
        sleep(1);
        i++;
        system("clear");
    }
}
