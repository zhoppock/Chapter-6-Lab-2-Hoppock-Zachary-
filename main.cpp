// Hoppock, Zachary
// purchaseTotal.cpp
// November 21, 2020
// Input purchase values into a vector and print of the total of those values when there are no more values needed to be entered
// Version #1
#include <vector>
#include <iostream>

using namespace std;

int main()
{
  vector<double> purchases;
  double purchase;
  cout << "Enter a purchase amount: $";
  cin >> purchase;
  do
  {
    purchases.push_back(purchase);
    cout << "Enter a purchase amount or enter Q to Quit: $";
  }
  while (cin >> purchase);

  double total = 0;
  for (int i = 0; i < purchases.size(); i++)
  {
    total = total + purchases[i];
  }
  cout << "\nTotal of purchases: $" << total;
  return (0);
}