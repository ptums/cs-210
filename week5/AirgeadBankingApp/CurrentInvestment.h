#ifndef CURRENT_INVESTMENT_H
#define CURRENT_INVESTMENT_H

class CurrentInvestment {
   public:
      void SetInitialInvestment(float i);
      void SetMonthlyDeposit(float m);
      void SetAnnualInterest(int a);
      void SetNumberOfYears(int n);
      float GetInitialInvestment() const;
      float GetMonthlyDeposit() const;
      float GetAnnualInterest() const;
      int GetNumberOfYears() const;
      CurrentInvestment();

   private:
      float initialInvestment;
      float monthlyDeposit;
      float annualInterest;
      int numberOfYears;
};

#endif




