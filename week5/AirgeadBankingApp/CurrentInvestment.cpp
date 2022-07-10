#include <iostream>
#include "CurrentInvestment.h"
using namespace std;

CurrentInvestment::CurrentInvestment() {
   initialInvestment = 0;
   monthlyDeposit = 0;
   annualInterest = 0;
   numberOfYears = 0;
}



void CurrentInvestment::SetInitialInvestment(float i) {
   initialInvestment = i;
}

void CurrentInvestment::SetMonthlyDeposit(float m) {
   monthlyDeposit = m;
}

void CurrentInvestment::SetAnnualInterest(int a) {
   annualInterest = a;
}

void CurrentInvestment::SetNumberOfYears(int n) {
   numberOfYears = n;
}

float CurrentInvestment::GetInitialInvestment() const {
  return initialInvestment; 
}

float CurrentInvestment::GetMonthlyDeposit() const {
  return monthlyDeposit; 
}

float CurrentInvestment::GetAnnualInterest() const {
   return annualInterest;
}

int CurrentInvestment::GetNumberOfYears() const {
   return numberOfYears;
}


