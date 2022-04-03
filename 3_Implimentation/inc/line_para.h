#ifndef __LINE_PARA_H__
#define __LINE_PARA_H__
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
typedef struct comp_t
{
    double real;
    double img;
}c;

double c_magnitude(c);

double c_angle(c);

c c_addition(c,c);

c c_multiplication(c ,c);

c c_division(c,c);

double * shortLine(int ,int ,double,double,double);

double * mediumPiLine(int, int ,double,double,double,double,int);

double * mediumTLine(int, int ,double,double,double,double,int);

double * longLine(int, int, double ,double,double,double,int);
#endif 