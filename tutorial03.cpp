// Variables and Comments in C++ //

#include<iostream> 
// included the header file //

using namespace std;
// including the std namespace , so that we don't need to write std::cout<< everytime we need the output //

//int main() is the starting point of every C++ program //

int main() {
   
      int a = 10;   // here variable a is declared and the value of 10 is assigned to it //
      int b = 20 ;  // here variable b is declared and the value of 20 is assigned to it //
      int sum =0;   // here sum is declared to store the calculated value and initially 0 value is assigned to sum //
      sum = a+b;    // here sum is calculated using the + operator //
      cout<< a <<endl;  // here a is printed and <<endl is used to move to the next line //
      cout<< b <<endl;  // here b is printed and <<endl is used to move to the next line //
      cout<< sum ;
      return 0;      // 0 is returned after the execution is successful //
}