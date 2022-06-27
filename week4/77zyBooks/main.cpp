#include <iostream>
#include <iomanip>
#include "ItemToPurchase.h"

using namespace std;
int main()
{
  string name;
  double price;
  int quantity;

  cout << "Enter the item name: " << endl;
  cin >> name;

  cout << "Enter the item price: " << endl;
  cin >> price;

  cout << "Enter the item quantity: " << endl;
  cin >> quantity;
  
  cout << fixed << setprecision(2);
  
  cout << "Name: " << name << " " << "Price: " << price << " " << "Quantity: " << quantity;
  ItemToPurchase(name, price, quantity);
  return 0;
}
