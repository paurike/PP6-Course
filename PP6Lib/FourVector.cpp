#include <iostream>
#include <cmath>
#include "FourVector.hpp"

//ctors to initialize and copy a FourVector

FourVector::FourVector(double t_, double x_, double y_, double z_)
  :c(3*pow(10,8)), t(c*t_), x(x_), y(y_), z(z_)    
{i = interval();
  std::cout << "A FourVector was constructed" << std::endl;}



FourVector::FourVector(const FourVector &other)
  :c(3*pow(10,8)), t(other.t), x(other.x), y(other.y), z(other.z), i(other.i)

{ std::cout << "A FourVector was constructed" << std::endl;}

  


void FourVector::z_boost (double v){

  double c = 3*pow(10,8);
  double beta = v/c;
  double gamma = 1/(sqrt(1-pow(beta,2)));

  double t_new;

  t_new = gamma*(t-beta*z);
  z = gamma*(z-beta*t);

  t = t_new;

}

double FourVector::interval () const {


  double interval = t*t - x*x - y*y - z*z;

  return interval;


}
