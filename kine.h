#ifndef _KINE_H
#define _KINE_H

#include "global.h"


//正向求解声明
bool forward_kine(double* angle, double* x, double* y, double* z);

//逆向求解声明
bool back_kine(double* angle, double x, double y, double z);


#endif