//Class implementation in cpp

#include<iostream>

using namespace std;

class test_class{
  int id;
  char name[10];
  public :
  void test_fn(){
    cout<< "Enter name and id :"<< endl;
    cin>> name >> id;
    cout<< "Name :"<< name<< endl<< "Id :"<< id;
  }
};

int main(){
  class test_class a;
  a.test_fn();
  return 0;
}
