#include<iostream>
#include<climits>

using namespace std;

double xIntercept;
void change;

int main() {




  //programme that asks for two doubles and lets the user decide which operation to perform on them
  
  double a;
  double b;

  int c;

  cout << "please enter 1 for addition, 2 for multiplication, 3 for subtraction or 4 for division" <<endl;

  cin >> c;
  
  int t = 0;


  while(0 == t) {

    if((c != 1) && (c != 2) && (c != 3) && (c != 4) )
    {cout << "Please chose between 1, 2, 3 and 4 to chose an operation!!"<< endl;
     cin.clear();
     cin.ignore(INT_MAX, '\n');
     cin >> c;
    }
  else{t = 1;}

  }
  

  cout << "please enter two numbers that you want to perform the operation on!" << endl;

  cin >> a >> b;

 
  

  if(c==1){
    cout << "The sum of " << a << " and " << b << " is: " << a+b << endl;
    return 0;
  }

  if(c==2){
    cout << "The product of " << a << " and " << b << " is: " << a*b << endl;
    return 0;
  }

  if(c==3){
    cout << "The difference of " << a << " and " << b << " is: " << a-b << endl;
    return 0;
  }


  if(c==4){
    if (0==b)
    {cout << "Don't devide by zero, it implodes the universe!!" << endl;
    }
    else{cout << "The fraction of " << a << " and " << b << " is: " << a/b << endl;}
  }


  return 0;

}


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







