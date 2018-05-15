#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <math.h>

double lab2task1(double a){
	int x;
	a=a*1000.0000;
	x=a;
	a=x/1000.0000;
	return a;
}

int main(){
	std::cout << lab2task1(M_PI);
}
