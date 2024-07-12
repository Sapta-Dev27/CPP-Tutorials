#include <bits/stdc++.h>
using namespace std;

//prime number is a number which has two factors //
//Time Complexity : 0 (n) //
int main () { 
  int n ;
  int count = 0;
  cout << "Enter the value of the n :  " ;
  cin >> n ;
  for ( int i = 1 ; i <=n ; i++ ) { 
    if ( n % i == 0 ) { 
      count = count + 1;
    }
  }
    if ( count == 2) { 
      cout << "It is a prime number ";
    }
    else { 
      cout << "It is not a prime number ";
    }
}