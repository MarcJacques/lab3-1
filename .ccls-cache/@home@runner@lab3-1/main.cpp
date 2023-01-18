#include <iostream>
using namespace std;
int main() 
{
  double pounds, kilograms;
  const double CONVERSION_FACTOR = 2.20462;
  
  //ask user to input weight
  cout << "Enter weight in pounds" << endl;
  cin >> pounds;
  
  //convert weight to kilograms
  kilograms = pounds/CONVERSION_FACTOR;

  cout << "Your weight in kilograms is " << kilograms << endl;
  return 0;
}