#include <iostream>
using namespace std;

int GCD(int n1, int n2);//n1 and n2 are the positive integers we need to  find gcd of.

int main()
{
   int n1, n2;

   cout << "Enter two positive integers: ";
   cin >> n1 >> n2;//inputs 

   cout << "G.C.D of " << n1 << " & " <<  n2 << " is: " << GCD(n1, n2);//prints out G.C.D of n1 & n2 is:

   return 0;
}

int GCD(int n1, int n2)
{//Euclidean algorithm
//GCD (n1,0) = n1
//GCD (n1, n2) = (n2, n1%n2)
    if (n2 != 0)
       return GCD(n2, n1 % n2);
    else 
       return n1;
   }
