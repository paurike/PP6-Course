#include<iostream>
#include<climits>
#include<cmath>
#include "bubble_sort.cpp"
#include "physics.cpp"
#include "maths.cpp"

using namespace std;


//this programme defines the user interface for the pp6calculator. It makes use of maths and physics functions defined in maths.cpp and physics.cpp as well as a sort function defined in bubble_sort.cpp. It lets the user operate a multi-level menu of available functions. 

//MAIN FUNCTION-----------------------------------------------------------------



int main() {

  string op;

  while(true){

    //top level of the menu. decide between b(basic arithmetic), p(physics) or q(quit)

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
    
    
    //BASIC ARITHMETIC OPTIONS
    
    
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
	cout << "The sum of " << a << " and " << b << " is: " << add(a,b) << endl;
       
      }
      
      if(b_op==2){
	cout << "The product of " << a << " and " << b << " is: " << multiply(a,b) << endl;
	
      }
      
      if(b_op==3){
	cout << "The difference of " << a << " and " << b << " is: " << subtract(a,b) << endl;
       
      }
      
      
      if(b_op==4){
	if (0==b)
	  {cout << "Don't devide by zero, it implodes the universe!!" << endl;
	  }
	else{cout << "The fraction of " << a << " and " << b << " is: " << divide(a,b) << endl;}
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


      if(c_op == 10){

	
	int length;

	std::cout << "please enter the length of your array" << std::endl;

	std::cin >> length;

	double a[length];

	std::cout << "please enter the content of your array and press enter after each number" << std::endl;
	
	for(int i=0; i<length ; i++){

	  std::cin >> a[i]; 

	}
	
	std::cout << "your sorted array from largest to smallest is: " << std::endl;
	
	sort(a, length);



      }

 

 
    }
    
  }
  
}
















