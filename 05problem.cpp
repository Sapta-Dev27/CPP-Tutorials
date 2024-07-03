#include <bits/stdc++.h>
using namespace std ;

int maximum ( int a , int b , int c , int d ) {
  if ( a > b &&  a > c && a > d )
  return a ;
  else if (  b > a &&  b > c && b > d ) 
  return b;
  else if ( c > a && c > b && c > d )
  return c ;
  else 
  return d ;
}


int main ( ) { 
  int num1 , num2 , num3 , num4 ;
  cout << "Enter the 4 numbers : " <<endl;
  cin >> num1 >> num2 >> num3 >> num4 ;
  int res = maximum( num1 , num2 , num3 , num4);
  cout << "The maximum number is : " << res << endl ;
  return 0;
}