#include <iostream>
using namespace std;

string twoDigitString(unsigned int n) {
  string inputToStr = to_string(n);

  if(n < 9) {
    string results = "0" + inputToStr;
    return results;
  }else {
     return inputToStr;
   }
}

int main() {
 string textOne = twoDigitString(5);
 string textTwo = twoDigitString(22);
 cout << "test one: " << textOne << endl;
 cout << "test two: " << textTwo << endl;
  return 0;
}
