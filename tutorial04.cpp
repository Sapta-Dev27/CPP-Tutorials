 //Variables , Scopes and Data Types in C++ //
 
/* Variables : A container to store the datas
Scope of a Variable : Scope of a variable is defined as the area where the  variable is accessable
Types : Local scope and Gloabl Scope 
Local Scope : Local Scope is where the variables are declared within the function () { } and only accessable in the parenthesis { }
Gloabal Scope : Global scope is where the variables are declared out any function() {} and are accessable everywhere in the code 
Rememebr : Same variable name can be used in the local and global scope but preffernce would be given to the local scope at first then to the global scope 
Data Types : 1.  Built-in datatypes 
             2. Derived datatypes    3.User-defined datatypes 
             Built-in datatypes : int , float , boolean , double , char 
             Derived datatypes : arrays , functions and pointers
*/
  #include<iostream>
  using namespace std;
  int global_b = 100; //global scope variable //
   void scope() { 
    int global_a = 50;// local scope //
    cout << "The value of global_a is : " <<global_a <<endl ;
  }
  int main() { 
    scope(); 
    int global_a = 60; //  local datatype//
    int global_b = 200; // local scope variable //
    int a = 10;  // int datatype is used which stores an integer //
    int b = 20;  // int datatype is used which stores an interger //
    float c =3.14 ;  // float datatype is used which stores an floating number i.e a decimal number //
    char d = 'u'; // char datatype is used to store an alphabet //
    bool is_true = true;
    bool is_false = false ; // boolean datatype stores true / false and gives 1 for true and 0 for false//
    cout <<" The value of a is : "<<a;  // <<a is used to print the variable stored in a //
    cout<<" \n The value of b is : " <<b;  // <<b is used to print the variable stored in b //
    cout<<" \n The value of c is :  " <<c; // <<c is used to print the variable stored in c//
    cout<<" \n The value of d is : " <<d;// <<d is used to print the variable stored in d //
    cout<<" \n The value pf is_true is : " <<is_true;
    cout<<" \n The value of is_false is : " <<is_false;
    cout<<" \n The value of global_a : " <<global_a;
    cout<<" \n The value of global_b : " <<global_b ; // here local variable scope is used and given preffernce over the global one//
    return 0;
  }
 


