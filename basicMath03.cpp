/*Pallindrome Number checking */

#include <bits/stdc++.h>
using namespace std ;
void isPallindrome( int n ) { 
  int num = n ;
  int rev_num = 0 ;
  while ( n > 0 ) { 
    int ld = n % 10;
    rev_num = (rev_num*10) + ld ;
    n = n / 10 ;
  }
  if ( rev_num == num )
  cout << "Pallindrome Number" ;
  else
  cout << "It is not a Pallindrome number " ;
}

int main () { 
  int n ;
  cout << "Enter the value of n : " ;
  cin >> n ;
  isPallindrome(n );
  return 0 ;
  
}