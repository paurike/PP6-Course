#ifndef PP6CALCULATOR_PHYSICS_HPP
#define PP6CALCULATOR_PHYSICS_HPP

double xIntercept (double yintercept, double gradient);
double quadratic(double a, double b, double c, bool positiveRoot);
double length(double x, double y, double z);
double four_length(double t, double x, double y, double z);
double inv_mass(double e1, double px1, double py1, double pz1, 
                double e2, double px2, double py2, double pz2);


#endif //PP6CALCULATOR_PHYSICS_HPP
