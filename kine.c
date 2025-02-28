#include "global.h"
#include "kine.h"

// 正向求解定义
// angle[0]=theta
// angle[1]=a1
// angle[2]=a2
// angle[3]=a3
bool forward_kine(double* angle, double* x, double* y, double* z)
{
    // solve r
    int r;
    r=-L1+L2*cos(angle[1])+L3*cos(angle[2])+L4*cos(angle[3])-L5*cos(PI/(2-angle[3]));

    // solve z
    *z=L0+L2*sin(angle[1])+L3*sin(angle[2])-L4*sin(angle[3])-L5*sin(PI/2-angle[3]);

    // solve x,y
    *x=r*cos(angle[0]);
    *y=r*sin(angle[0]);

    return true;
    // return false;
}

// 逆向求解定义
// angle[0]=theta
// angle[1]=a1
// angle[2]=a2
// angle[3]=a3
bool back_kine(double* angle, double x, double y, double z)
{
    // solve theta
    angle[0]=atan2(y, x);

    // solve r
    int r;
    r=sqrt(x*x + y*y);

    // todo: finish the rest of the code

    // solve a1-a3

    // Optional input

    return true;
    // return false;
}