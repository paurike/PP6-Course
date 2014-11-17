#include<cmath>
#include "physics.hpp"



//xIntercept takes a double yintercept and a double gradient of a linear function and returns the value of the x-intercept as a double 

double xIntercept(double yintercept, double gradient) {

  double xintercept;

  xintercept = -yintercept/gradient;
  return xintercept;


}



//quadratic takes 3 doubles as a, b and c of the midnight equation and a boolean that indicates whether the output is the plus or minus solution

double quadratic(double a, double b, double c, bool positiveRoot)
{
  double t(sqrt(pow(b, 2) - 4 * a * c));
  double res(0);

  if (positiveRoot)
  {
    res = (-b + t) / (2 * a);
  }
  else
  {
    res = (-b - t) / (2 * a);
  }

  return res;
}


//length takes the 3 spacial components of a vector as dobules and returns the length of the vector

double length(double x, double y, double z)
{
  return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}



//4length takes the components of a 4-vector and returns the lenght of the 4-vector

double four_length(double t, double x, double y, double z)
{
  return sqrt(pow(t, 2) - pow(length(x, y, z), 2));
} 




//inv_mass calculates the invariant mass of two particles taking the four-vector components as input

double inv_mass(double e1, double px1, double py1, double pz1, 
                double e2, double px2, double py2, double pz2)
{
  double tot_e(e1 + e2);
  double tot_px(px1 + px2);
  double tot_py(py1 + py2);
  double tot_pz(pz1 + pz2);

  return four_length(tot_e, tot_px, tot_py, tot_pz);
}
