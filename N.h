#include <stdio.h>
#include <math.h>
double perimetr(double a, double b, double c){
    return("???????? %g\n", a + b + c); //??????? ????????
    }
double ploshchad(double a, double b, double c){
    double p=(a+b+c)/2; 
    return("??????? %g\n",sqrt(p * (p - a) * (p - b) * (p - c)));// ??????? ???????
    }

