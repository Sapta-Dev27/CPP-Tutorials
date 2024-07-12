#include <bits/stdc++.h>
using namespace std ;

void isArmstrong ( int n ) { 
  int sum = 0;
  int temp = n ;
  while ( n > 0 ) { 
    int ld = n % 10;
    sum = sum + ( ld * ld * ld);
    n = n / 10 ;
  }
  if ( sum == temp ) 
  cout << " Armstrong number " << endl ;
  else 
  cout << " Not an armstrong number " ;
}

int main () { 
  int n; 
  cout << " Enter the value of n : ";
  cin >> n ;
  isArmstrong(n);
  return 0;

}