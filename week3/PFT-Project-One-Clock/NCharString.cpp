#include <iostream>
using namespace std;

string nCharString(size_t n, char c) {
  int i = 1;
  string result = "";
  while(i <= n) {
   result += c;
   i++;
  };
  return result;
}

int main() {
  string text =  nCharString(4, '*');
  cout << text << endl;
  return 0;
}
