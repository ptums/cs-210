#include <iostream>
using namespace std;

class InterestCalculator {
   public:
      void SetInitialInvestment(float i);
      void SetMonthlyDeposit(float m);
      void SetAnnualInterest(float a);
      void SetNumberOfYears(int n);
      float GetInitialInvestment() const;
      float GetMonthlyDeposit() const;
      int GetAnnualInterest() const;
      int GetNumberOfYears() const;
      InterestCalculator();
      InterestCalculator(float initialInvestment, float monthlyDeposit, float annualInterest, int numberOfYears);
   private:
      float initialInvestment;
      float monthlyDeposit;
      int annualInterest;
      int numberOfYears;
};




