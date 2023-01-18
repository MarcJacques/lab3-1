#include <iostream>
using namespace std;

int main() 
{
  double weight_in_pounds, weight_in_kilograms;
  const double KILOGRAM_TO_POUNDS_CONVERSION = 2.20462;
  
  //ask user to input weight
  cout << "Enter weight in pounds:" << endl;
  cin >> weight_in_pounds;
  
  //convert pound to kilograms
  weight_in_kilograms = weight_in_pounds/KILOGRAM_TO_POUNDS_CONVERSION;

  cout << "Your weight in kilograms: " << weight_in_kilograms << endl;
  return 0;
}