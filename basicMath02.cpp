/* Reverse of a Number*/
#include <bits/stdc++.h>
using namespace std ; 
int main()  { 
  int n ; 
  cout <<" Enter the value of n : " ;
  cin >> n ;
  int sum = 0 ;
  while ( n > 0 ) { 
    int ld = n % 10 ;
    sum = (sum *10) +  ld;
    n = n / 10 ;
  }
  cout << "The reverse of the " << n << " is "<<  sum ;
  return 0;
}