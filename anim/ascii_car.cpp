/*
CAR
  ______
 /|_||_\`.__
(   _    _ _\
=`-(_)--(_)-'
*/

#include<iostream>
#include <chrono>
#include <thread>

using namespace std;

int main(){
    int i=0;
    while(1){
        for(int j=0;j!=i;j++) cout<<"      ";
        cout<<"  ______"<<endl;
    	for(int j=0;j!=i;j++) cout<<"      ";
        cout<<" /|_||_\`.__"<<endl;
        for(int j=0;j!=i;j++) cout<<"      ";
        cout<<"(   _    _ _'"<<endl;
        for(int j=0;j!=i;j++) cout<<"      ";
        cout<<"=`-(_)--(_)-' "<<endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(130));
        i++;
        system("clear");
    }
}
