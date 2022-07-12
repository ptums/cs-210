#include <iostream>
#include <iomanip>
#include "CharToString.h"

using namespace std;

void printHeaderMessage(float i = 0, float m = 0, int a = 0, int n = 0) {
   cout << fixed << setprecision(2);
   cout << charToString(29, '*') << endl; 
   cout << charToString(9, '*') << " Data Input " << charToString(8, '*') << endl;
   cout << "Initial Investment Amount: ";

   if(i > 0) {
      cout << "$" << i << endl;
   }else {
      cout << endl;
   }
   
   cout << "Monthly Deposit: ";

   if(m > 0) {
      cout << "$" << m << endl;
   }else {
      cout << endl;
   }


   cout << "Annual Interest: ";

   if(a > 0) {
      cout << "%" << a << endl;
   }else {
      cout << endl;
   }

   cout << "Number of years: ";

   if(n > 0) {
      cout << n << endl;
   }else {
      cout << endl;
   }
   
}
