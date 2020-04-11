#include<iostream>
//standard header file
using namespace std;
//basic syntax

int main(){
  //string example and functions
  string a = "Creator 54";
  cout << a << endl;
  //cout << X; prints x
  // << endl ; prints a newline similar to '\n'
  cout << a.length() << endl;
  // *.length() prints the length of the string
  cout << a[0] << endl;
  // prints the char coressponding to the index value
  a[0] = 'X';
  // assigning new values to existing string elements
  cout << a.find("54", 0) << endl;
  //search function in cpp i.e gives index at which the enquired string starts
  //usage x.find("required_string",search_start_index);
  cout << a.find("89", 0) << endl;
  // gives random values if string doesnt exist
  cout << a.substr(8, 3) << endl;
  // makes a substring from the given string
  // usage x.substr(start_index,substring_size)
  return 0;
}
