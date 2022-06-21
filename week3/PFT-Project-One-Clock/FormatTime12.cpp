#include <iostream>
using namespace std;

string changeTimeToStr(unsigned int time) {
  string results = "";

  if(time < 10)  {
    results = "0" + to_string(time);
  }else {
    results = to_string(time);
  }

  return results;
}

string formatTime12(unsigned int h, unsigned int m, unsigned int s) {
  string dayType = "";
  int hour = 0;
  string minute = "";
  string second = "";
  
  /** determine AM/PM **/
  if(h >= 12 && h <= 23)  {
    dayType = "P M";
  }else {
    dayType = "A M";
  }
 
  /** covert military to standart time -- hour **/
  if(h > 12 && h <= 22){
   int convert = 23 - h;
   hour = convert;
  }else if(h == 23) {
    hour = 11;
  } else if(h == 0) {
    hour = 12;
  } else {
   hour = h;
  }
  
  return changeTimeToStr(hour) + ":" + changeTimeToStr(m) + ":" + changeTimeToStr(s) + " " + dayType;
  
}

int main() {
  string testOne =  formatTime12(7, 24, 9);
  string testTwo = formatTime12(23, 0, 59);
  string testThree = formatTime12(12, 0, 59);
  string testFour = formatTime12(0, 0, 4); 
  cout << testOne << endl;
  cout << testTwo << endl;
  cout << testThree << endl;
  cout << testFour << endl;


  return 0;
}
