#include <iostream>
using namespace std;

int main()
{
  int fuelPercent = 40;
  bool tiresGood = true;
  bool phoneCharged = false;
  bool map = true;
  bool engineWarning = false;
  bool enoughFuel = fuelPercent >= 25;
  bool navigationReady = phoneCharged || map;
  bool readyForTrip = enoughFuel && tiresGood && navigationReady && !engineWarning;

  if (readyForTrip)
  {
    cout << "The vehicle is ready for the road trip." << endl;
  }
  else
  {
    cout << "The vehicle is not ready for the road trip." << endl;
  }
  return 0;
}
