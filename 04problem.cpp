#include <bits/stdc++.h>
using namespace std;
int sum ( int num1 , int num2 ){ 
  int num3 = num1 + num2 ;
  return num3;
}
int main () { 
  int a ,b ;
  cout << "Enter the values of a and b " ;
  cin >> a >> b ;
  int res = sum( a , b );
  cout << "The sum of a and b is " << res << endl;
  return 0;
}