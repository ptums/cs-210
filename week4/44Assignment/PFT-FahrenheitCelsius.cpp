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
  fTextFile.open("FahrenheitTemperature.txt");

  ofstream cTextFile;
  cTextFile.open("CelciusTemperature.txt");

  cout << "Hello World!";
  return 0;
}
