#include <bits/stdc++.h>
using namespace std ;

void pattern17( int n ) { 
  int num =1;
  for ( int i = 1  ; i <= n ; i++ ) { 
  
    for ( int j = 1 ; j <=i ; j++ ) { 
     
      cout << num ;
      num = num + 1 ;
    }
    cout << endl;
  }
}

int main () {   
  int n ; 
  cout << " Enter the value of  n : ";
  cin >> n ;
  pattern17(n);
  return 0 ;
}