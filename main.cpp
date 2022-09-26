#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
  // declare variables
  double temp = 2;
  double windSpeed = 5;
  double wci = 0;

for (double temp = 2; temp <= 10; temp = temp + 4)
  {
    wci = 13.12 + 0.6125*temp - 11.37*pow(windSpeed,0.16) + .3965 * temp * pow(windSpeed,0.16);
    cout << "Wind Chill Index (WCI) for " << temp << "° C and " << windSpeed << " kmph: " << wci << "° C" <<endl;
  }
  
  
}