#include <bits/stdc++.h>
using namespace std;
int main () { 
   int score ;
   cout << "Enter the score : " <<endl ;
   cin >> score ;
   if (score >= 90) {
    cout << "Grade is A " <<endl ;
   }
   else if ( score >= 80 && score <=89){
    cout << "Grade is B " <<endl ;
   }
   else if ( score >=70 && score <=79) { 
    cout <<" Grade is C " <<endl;
   }
   else if ( score >=60 && score <=69) { 
    cout <<" Grade is D " <<endl;
   }
   else if ( score >=50 && score <=59) { 
    cout <<" Grade is E " <<endl;
   }
   else if ( score >=40 && score <=49) { 
    cout <<" Grade is F " <<endl;
   }
   else {
    cout <<"Fail " <<endl ;
   }
  return 0;
}