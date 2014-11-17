#ifndef STRUCTFOURVECTOR_HPP
#define STRUCTFOURVECTOR_HPP

class FourVector {
public:

  //Class ctor                                                                                                                                           
  FourVector() :c(3e8),t(0), x(0), y(0), z(0), i(0){}
  FourVector(double t_, double x_, double y_, double z_);
  FourVector(const FourVector &other);

  //Class Methods                                                                                                                                        
  void set_x(double X){x = X; i = interval();}
  void set_y(double Y){y = Y, i = interval();}
  void set_z(double Z){z = Z; i = interval();}

  double get_x() {return x;}
  double get_y() {return y;}
  double get_z() {return z;}
  double get_interval() {return i;}

  void z_boost(double v);

private:
  double interval() const;


  //Class Constants                                                                                                                                      
  double c;

  //Class Variables                                                                                                                                      
  double t;
  double x;
  double y;
  double z;
  double i;
};



//enumerate FourVector Types
enum FourVectorCausalType {

  UNDEFINED_TYPE,
  TIME_LIKE,
  SPACE_LIKE,
  LIGHT_LIKE,


};


#endif //STRUCTFOURVECTOR_HPP


