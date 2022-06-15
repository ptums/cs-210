#include <iostream>
using namespace std;

string formatTime24(unsigned int h, unsigned int m, unsigned int s) {
  string hour = "";
  
  string minute = "";
  
  string second = "";
  
  if (h == 23) {
     hour = "23";
  } else if (h == 0) {
     hour = "00";
  } else if (h >= 10) {
    int milHour = 23 - h;
    hour = to_string(milHour);
  } else {
    hour = "0" + to_string(h);
  }

  if (m == 59) {
     minute = "59";
  } else if (m == 0) {
     minute = "00";
  } else if (m >= 10) {
    minute = to_string(m);
  } else {
     minute = "0" + to_string(m);
  }


  if (s == 59) {
     second  = "59";
  } else if (s == 0) {
     second = "00";
  } else if (s >= 10) {
    second  = to_string(s);
  } else {
     second = "0" + to_string(s);
  }

  
  return hour + ":" + minute + ":" + second;
}

int main() {
  string testOne =  formatTime24(7, 24, 9);
  string testTwo = formatTime24(23, 0, 59);
  cout << testOne << endl;
  cout << testTwo << endl;
  return 0;
}
