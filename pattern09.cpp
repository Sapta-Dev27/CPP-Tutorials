#include <bits/stdc++.h>
using namespace std ;

void upper_Triangle(int n ) { 
   for ( int i = 1 ; i <= n ; i++ ) { 
      for (int j = 0 ; j<= n-i-1; j++ ) { 
         cout << "  ";
      }
      for ( int j = 0 ; j < 2*i-1 ;j ++) {
         cout << "* ";
      }
      for ( int j = 0 ; j <= n-i-1 ;j++){ 
         cout << " ";
      }
      cout << endl ;
   }

}
void lower_Triangle( int n ) {

   for ( int i = 0; i < n ; i++ ) { 
      for ( int j = 0 ;  j < i ; j ++ ) { 
            cout << " ";
      }
      for ( int j = 1 ; j <= 2*n-(2*i+1) ; j++ ) { 
         cout << "* ";
      }
   for ( int j = 1; j < i ; j++ ) { 
      cout << " " ;
   }
   cout <<endl ;
   }

}

int main () { 
   int n ;
   cout << "Enter the  value of n : " ;
   cin >> n ;
   upper_Triangle(n) ;
   lower_Triangle(n) ;
   return 0;
}