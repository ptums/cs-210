#include <iostream>
using namespace std;
#include <iomanip>  

// test cases (["Add One Hour", "Add One Minute", "Add One Second", "Exit Program"], 4, 26 or 57)
//
/**
 * Prints menu
 *
 * @param *strings[], nonempty array of choices
 * @param width, width of each line, will be comfortably bigger than the longest string
 *
 */

void printBorder(char c) {
  for(int i = 0; i < 27; i++) {
    cout << c;

  }
}

void printMenu(char * strings[], unsigned int numStrings, unsigned char width) {
  printBorder('*');
  cout << endl;
  cout << "* 1 - Add One Hour        *";
  cout << endl;
  cout << "* 2 - Add One Minute      *";
  cout << endl;
  cout << "* 3 - Add One Second      *";
  cout << endl;
  cout << "* 4 - Exit Program        *";
  cout << endl;
  printBorder('*');
  cout << endl;
}

int main () {
  char *strings[4] = {{"Add One Hour"},{"Add One Minute"},{"Add One Second"},{"Exit Program"}};
  unsigned char w = 'A';
  printMenu(strings, 4, w);
  return 0;

};
