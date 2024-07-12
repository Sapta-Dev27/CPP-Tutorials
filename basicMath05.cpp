#include <bits/stdc++.h>
using namespace std ;
int main () { 
  int n ;
  cout << "Enter the value of n :" ;
  cin >> n ;
  for ( int i = 1 ; i <= n ; i++ ) { 
    if ( n % i == 0 ) { 
      cout << " Factors of " << n << " are " << i <<endl;
    }
  }
  return 0;

}
//Time Complexity : 0 (n)
/*
int main () { 
  int n ;
  cout << " Enter the value of  n : " ;
  cin >> n ;
  for ( int i = 1 ; i <= sqrt(n) ; i++) { 
   if ( n % i == 0 ) {
    cout << i << endl;
    if ( (n % i)  != i ) { 
      cout << (n/i) <<endl;
    }
  }
  return 0;

}
*/