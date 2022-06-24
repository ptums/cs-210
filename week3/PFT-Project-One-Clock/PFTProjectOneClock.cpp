#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <iomanip>
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
   int convert = h - 12;
   hour = convert;
  }else if (h == 23) {
    hour = 11;
  } else if (h == 24) {
      hour = 12;
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
    hour = to_string(h);
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
   cout << nCharString(24, '*') << "   " << nCharString(24, '*') << endl;
   cout << "*    12-Hour Clock     *" << "   " << "*    24-Hour Clock     *";
   cout << endl;
   cout << "*    " << formatTime12(h, m, s) << "      *" << "   " << "*    " << formatTime24(h, m, s) << "          *";
   cout << endl;
   cout << nCharString(24, '*') << "   " << nCharString(24, '*');
}

void printMenu() {
      char *strings[4] = {{"Add One Hour"},{"Add One Minute"},{"Add One Second"},{"Exit Program"}};
       cout << endl;
       cout << endl;
       cout << nCharString(26, '*') << endl;
       for(int i = 0; i < 4; i++) {
           cout << "* " << to_string(i + 1) << " - " << strings[i] << setw(20 - strlen(strings[i])) << "*" << endl;
       }
       
       cout << nCharString(26, '*') << endl;
}

int main() {
  
  int hour = 11;
  int minute = 59;
  int second = 59;
  int option = 0;
  bool start = true;
  
  system("clear");
  displayClock(hour, minute, second);
  
  while(start) {
      printMenu();
      cin >> option;
      
      switch(option) {
          case 1:
          
            if(hour == 24) {
                hour = 1;
            } else {
              hour = hour + 1;
            }
            displayClock(hour, minute, second);
          break;
          case 2:
            if(minute == 59) {
                minute = 0;
                
                if(hour == 24) {
                    hour = 1;
                    
                } else {
                    hour = hour + 1;
                    
                }
            } else {
                minute = minute + 1;
            }
            displayClock(hour, minute, second);
          break;
          case 3:
            if(second == 59) {
                second = 0;
                
                if(minute == 59) {
                    minute = 0;
                    
                } else {
                    minute = minute + 1;
                    
                }
                
                if(hour == 24) {
                    hour = 0;
                    
                } else {
                    hour = hour + 1;
                    
                }
            } else {
                second = second + 1;
            }
            displayClock(hour, minute, second);
          break;
          case 4:
           start = false;
          break;
      }
      
      
  }
  
  
  
  return 0;
}
