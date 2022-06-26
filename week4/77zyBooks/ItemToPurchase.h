#include <iostream>


using namespace std;

class ItemToPurchase {
  public:
   ItemToPurchase();
   ItemToPurchase(string name, double price, int quantity);
   void setName(string name);
   string getName();
   void setPrice(double price);
   double getPrice();
   void setQuantity(int quantity);
   int getQuantity();

  private:
   string itemName;
   double itemPrice;
   int itemQuantity;

};
