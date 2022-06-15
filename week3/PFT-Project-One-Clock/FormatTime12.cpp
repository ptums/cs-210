#include <iostream>
using namespace std;

string formatTime12(unsigned int h, unsigned int m, unsigned int s) {
  string hour = "";
  string minute = "";
  string second = "";
  string day = "";
  
  if(m < 10) {
    minute = "0" + to_string(m);
  }else {
    minute = to_string(m);
  }

  if(s < 10) {
    second = "0" + to_string(s);
  }else {
    second = to_string(s);
  }

  if(h > 12) {
    hour = to_string(h - 12);
    day = "P M";
  } else if(h <=12 && h >=10) {
      hour = to_string(h);
  }else if (h < 10) {
    hour = "0" + to_string(h);
  }else if ( h <= 12) {
    day = "A M";
  }else if(h == 0) {

    hour = "12";
  }

  return hour + ":" + minute + ":" + second + " " + day;
 }

int main() {
  string testOne =  formatTime12(7, 24, 9);
  string testTwo = formatTime12(23, 0, 59);
  string testThree = formatTime12(12, 0, 59);
  string testFour = formatTime12(0, 0, 4); 
  cout << testOne << endl;
  cout << testTwo << endl;
  return 0;
}
