#include <iostream>
#include <stdlib.h>
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

string nCharString(size_t n, char c) {
  int i = 1;
  string result = "";
  while(i <= n) {
   result += c;
   i++;
  };
  return result;
}

void displayClock(unsigned int h, unsigned int m, unsigned int s) {
   cout << nCharString(24, '*') << "   " << nCharString(24, '*'); 
   cout << endl;
   cout << "*    12-Hour Clock     *" << "   " << "*    24-Hour Clock     *";
   cout << endl;
   cout << "*    " << formatTime12(), m, s) << "      *" << "   " << "*    " << formatTime24(h, m, s) << "          *";
   cout << endl;
   cout << nCharString(24, '*') << "   " << nCharString(24, '*');
}

int main() {
  system("clear");
  int hour = 15;
  int minute = 22;
  int second = 1;
  displayClock(hour, minute, second);
  return 0;
}
