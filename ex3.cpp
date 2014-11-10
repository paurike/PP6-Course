#include <iostream>


//change is a function of two doubles that are passed by reference. It switches the values so that the value of a becomes the value of b and the other way around.

void change(double& a, double& b) {

  double c = a;
  a= b;
  b= c;


}


//main defines two doubles a and b and calls the change function which reverses their values.

int main() {


  double a = 40, b =69;
  change (a, b);

  std::cout << a <<" " << b << std::endl;

  return 0;



}
