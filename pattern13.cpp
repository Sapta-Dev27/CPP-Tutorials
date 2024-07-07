#include <bits/stdc++.h>
using namespace std;

void pattern13(int n ) { 
  for ( int i = 0 ; i < n ; i++) { 
    for ( char ch = 'A' ; ch <= 'A' + (n-i-1) ; ch++ ) { 
      cout << ch << " ";
    }
    cout << endl;
  }
}

int main () { 
  int n ;
  cout << "Enter the value of n : " ;
  cin >> n ;
  pattern13(n);
  return 0 ;
}