#include<iostream>
#include<climits>
#include<cmath>

using namespace std;



//xIntercept takes a double yintercept and a double gradient of a linear function and returns the value of the x-intercept as a double 

double xIntercept(double yintercept, double gradient) {

  double xintercept;

  xintercept = -yintercept/gradient;
  return xintercept;


}

//change is a function of two doubles that are passed by reference. It switches the values so that the value of a becomes the value of b and the other way around.

void change(double& a, double& b) {

  double c = a;
  a= b;
  b= c;


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


//sort takes an array of doubles and its length and sorts the array by size, biggest to smallest



void sort(double a[], int length){

  bool not_sorted = true;

  while(not_sorted) {
    
    not_sorted= false;

    for(int i=0; i<length; i++) {
      
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









//MAIN FUNCTION-----------------------------------------------------------------



int main() {

  string op;

  while(true){

    std::cout << "enter b if you want to do basic arithmetic , p for more complex physics operations or q to quit the calculator" << endl;

    std::cin >> op;
    
    if((op !="b") & (op !="q") & (op !="p")) {
      
      std::cout << "input not recognized. Please try again" << endl;
      std::cin.clear();
      continue;
      
      
    }
    
    if(op=="q"){
      break;
    }
    
    
    //BASIC ARITHMETIC
    
    
    if(op=="b") {
      
      //part of the programme that asks for two doubles and lets the user decide which operation to perform on them
      
      double a;
      double b;
      
      int b_op;
      
      cout << "please enter 1 for addition, 2 for multiplication, 3 for subtraction or 4 for division" <<endl;
      
      cin >> b_op;
      
      int t = 0;
      
      
      while(0 == t) {
	
	if((b_op != 1) && (b_op != 2) && (b_op != 3) && (b_op != 4) )
	  {cout << "Please chose between 1, 2, 3 and 4 to chose an operation!!"<< endl;
	    cin.clear();
	    cin.ignore(INT_MAX, '\n');
	    cin >> b_op;
	  }
	else{t = 1;}
	
      }
      
      
      cout << "please enter two numbers that you want to perform the operation on!" << endl;
      
      cin >> a >> b;
      
      
      
      
      if(b_op==1){
	cout << "The sum of " << a << " and " << b << " is: " << a+b << endl;
       
      }
      
      if(b_op==2){
	cout << "The product of " << a << " and " << b << " is: " << a*b << endl;
	
      }
      
      if(b_op==3){
	cout << "The difference of " << a << " and " << b << " is: " << a-b << endl;
       
      }
      
      
      if(b_op==4){
	if (0==b)
	  {cout << "Don't devide by zero, it implodes the universe!!" << endl;
	  }
	else{cout << "The fraction of " << a << " and " << b << " is: " << a/b << endl;}
      }
      
      
    }
    
    
    if(op == "p") {
      
      int c_op;
      
      std::cout << "Please enter" << std::endl 
		<< "5 to calculate the x-Intercept of a linear function" << std::endl
		<< "6 to solve a quadratic equation" <<std::endl
		<< "7 to calculate the length of a 3-vector" << std::endl
		<< "8 to calculate the length of a 4-vector" << std::endl
		<< "9 to calculate the invariant mass of two particles" << std::endl
		<< "10 to sort an array of numbers from largest to smallest" << std::endl;


      std::cin >> c_op;

      
      int r =0;

      while(r==0){

	if((c_op !=5) & (c_op !=6) & (c_op !=7) & (c_op !=8) & (c_op !=9) & (c_op !=10)){

	  std::cout << "please chose between 5-10 to select an operation!" << endl;
	  std::cin.clear();
	  cin.ignore(INT_MAX, '\n');
	  std::cin >> c_op;
	
	}
	else{r=1;}
      }
     
      

      if(c_op == 5){
	
	double yintercept;
	double gradient;

	std::cout << "Please enter two numbers for the y-intercept and the gradient of your linear function" << std::endl;

	std::cin >> yintercept;
	std::cin >> gradient;

	std::cout << "The x-intercept of your function is: " <<  xIntercept(yintercept, gradient) << std::endl;

	

      }

 

 
    }
    
  }
  
}
















