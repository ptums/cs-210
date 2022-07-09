
#include <iostream>
#include "InterestCalculator.h"
using namespace std;

InterestCalculator::InterestCalculator()
{
   initialInvestment = 0;
   monthlyDeposit = 0;
   annualInterest = 0;
   numberOfYears = 0;
}

InterestCalculator::InterestCalculator(float i, float m, int a, int n)
{
   initialInvestment = i;
   monthlyDeposit = m;
   annualInterest = a;
   numberOfYears = n;
}

void InterestCalculator::SetInitialInvestment(float i) {
   initialInvestment = i;
}

void InterestCalculator::SetMonthlyDeposit(float m) {
   monthlyDeposit = m;
}

void InterestCalculator::SetAnnualInterest(int a) {
   annualInterest = a;
}

void InterestCalculator::SetNumberOfYears(int n) {
   numberOfYears = n;
}

float InterestCalculator::GetInitialInvestment() const {
  return initialInvestment; 
}

float InterestCalculator::GetMonthlyDeposit() const {
  return monthlyDeposit; 
}

int InterestCalculator::GetAnnualInterest() const {
   return annualInterest;
}

int InterestCalculator::GetNumberOfYears() const {
   return numberOfYears;
}


