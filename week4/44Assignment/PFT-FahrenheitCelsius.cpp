/**
 *
 * Name: Peter F. Tumulty
 * Date: June 30, 2022
 *
 *
 **/

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{

  string city;
  int fDegree, cDegree;
  ifstream fTextFile;
  ofstream cTextFile;

  fTextFile.open("FahrenheitTemperature.txt");
  cTextFile.open("CelciusTemperature.txt");

  if(!fTextFile.is_open()) {
    cout << "There was an error opening up FahrenheitTemperature.txt";
    return 1;
  }

  if(!cTextFile.is_open()) {
    cout << "There was an error opening up CelciusTemperature.txt";
    return 1;

  }

  while(!fTextFile.fail()) {
    fTextFile >> city;
    fTextFile >> fDegree;
    
    cDegree = (int)round(((fDegree - 32) * 5)/(double)9);
    cTextFile << city << " " << cDegree << endl;
  }

  fTextFile.close();
  cTextFile.close();

  return 0;
}
