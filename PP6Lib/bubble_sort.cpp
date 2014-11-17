#include <iostream>
#include "bubble_sort.hpp"


//change is a function of two doubles that are passed by reference. It switches the values so that the value of a becomes the value of b and the other way around.

void change(double& a, double& b) {

  double c = a;
  a= b;
  b= c;


}



//sort takes an array of doubles and its length and sorts the array by size, biggest to smallest

void sort(double a[], int length){

  bool not_sorted = true;

  while(not_sorted) {
    
    not_sorted= false;

    for(int i=0; i<(length-1); i++) {
      
      if(a[i] < a[i+1]){
	change(a[i], a[i+1]);
	not_sorted=true;
      }
      
    }


  }

  for(int j=0; j<length; j++) {

    std::cout << a[j] << std::endl;

  }


}


