
#include <iostream>
#include <vector>
using namespace std;

/* Define your function here */
void swap(int *firstIndex, int *nextIndex){
   int temp = *firstIndex;
   *firstIndex = *nextIndex;
   *nextIndex = temp;
}

void SortVector(vector<int>& arrToSort) {
  int arrLength = arrToSort.size() - 1;
  
  for (int i = 0; i < arrLength; i++) {
    for (int j = 0; j < arrLength - i; j++) {
      if (arrToSort[j] > arrToSort[j + 1]) {
      //  int temp = arrToSort[i];
      //  arrToSort[i] = arrToSort[i + 1];
      //  arrToSort[i + 1] = temp;
      swap(&arrToSort[j], &arrToSort[j + 1]);
      }
    }
  }
}

int main() {
   /* Type your code here */
   int sortLength;
   vector<int> arrToSort;
   
   cin >> sortLength;
   
   for(int i = 0; i < sortLength; i++) {
      int currentNum;
      cin >> currentNum;
      arrToSort.push_back(currentNum);
   }
   
   
   SortVector(arrToSort);
   
   for(int i = 0; i < sortLength; i++) {
      cout << arrToSort[i] << " ";
   }
   
   cout << endl;
   
   return 0;
}
