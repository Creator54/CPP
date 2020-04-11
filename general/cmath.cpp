#include<iostream>
#include<cmath>

using namespace std;
int main(){
  cout << pow( 2, 5) << endl;
  //usage pow(x,y) x= base, y = power;
  cout << sqrt( 25) << endl;
  //squareroot function
  cout << round( 10.05) << endl;
  //round off
  cout << ceil( 10.5) << endl;
  // ceiling function
  cout << floor( 10.5) << endl;
  //floor function
  cout << fmax( 29, 19) << endl;
  // returns max of two
  cout << fmin( 29, 19) << endl;
  // returns min of two
  // NOTE do give proper spacing else no output
  // ie in functions give one space inside the parenthesis before the argument
  // usage f(a,b) is wrong
  // f( a, b) should be used

  return 0;
}
