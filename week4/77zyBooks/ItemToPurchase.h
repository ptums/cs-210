#include <iostream>
using namespace std;

class ItemToPurchase {
   public:
      void SetName(string n);
      void SetPrice(double p);
      void SetQuantity(int q);
      string GetName() const;
      double GetPrice() const;
      int GetQuantity() const;
      ItemToPurchase();
      ItemToPurchase(string name, double price, int quantity);
   private:
      int itemName;
      int itemPrice;
      int itemQuantity;
};
