#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void printMenu(char * strings[], unsigned int numStrings, unsigned char width) {
    int iwidth = (int)width; 
    for(int i = 0; i < iwidth; i++) {
      cout << "*";
    }
    cout << endl;
    
    for(int i = 0; i < numStrings; i++) {
        cout << "* " << to_string(i + 1) << " - " << strings[i];
        cout << endl;
    }
    
    for(int i = 0; i < iwidth; i++) {
        cout << "*";
    }
    cout << endl;

}

int main () {
    char *strings[4] = {{"Add One Hour"},{"Add One Minute"},{"Add One Second"},{"Exit Program"}};
    unsigned char w = '24';
    printMenu(strings, 4, w);
    return 0;
};

