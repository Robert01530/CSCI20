#include <iostream>
using namespace std;

int main()
{
  int fuelPercent = 40;
  bool tiresGood = true;
  bool phoneCharged = false;
  bool Map = true;
  bool engineWarning = false;
  bool enoughFuel = fuelPercent >= 25;
  bool navigationReady = phoneCharged || map;
  bool readyForTrip = enoughFuel && tiresGood && navigationReady && !engineWarning;

  if (readyForTrip)
  {
    Cout << "The vehicle is ready for the road trip." << end1;
  }
  else
  {
    cout << "
  return 0;
}
