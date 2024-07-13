/* Eucludian Alogorithm*/

#include <bits/stdc++.h>
using namespace std;

void gcd(int num1, int num2)
{

  while (num1 > 0 && num2 > 0)
  {
    if (num1 > num2)
      num1 = num1 % num2;
    else
      num2 = num2 % num1;
  }
    if (num1 == 0)
      cout << "GCD is " << num2;
    else
      cout << "GCD is " << num1;
  
}
int main()
{
  int n1, n2;
  cout << "Enter the value of n1 and n2 : ";
  cin >> n1 >> n2;
  gcd (n1 , n2);
  return 0;
}