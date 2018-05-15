#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <math.h>

//1
double lab2task7(double x){
	double a;
	a=x*M_PI/180;
	return a;
}

//2
double lab2task9(double x){
	double a;
	a=5*cos(x*M_PI/180);
	return a;
}

//3
double lab2task39(int x1, int y1 , int x2, int y2){
	double a;
	a=pow((pow((x2-x1),2)+pow((y2-y1),2)), 0.5);
	return a;
}


//4
double lab2task10(int x, int y){
	double a;
	a=sin(x*M_PI/180)*cos(y*M_PI/180)+cos(x*M_PI/180)*sin(y*M_PI/180);
	return a;
	}

//5
double lab5task3(double a){
	if(a>0){
		a=pow(a,0.5);
	}
	else{
		a=a*a;
	}
	return a;
}

//6
double lab5task16 (double x, double y, double z){
	if(x>y){
		if(y>z){
		    return x;
		}
		else{
			if(x>z){
			    return x;
			}
			else{
				return z;
			}
		}
	} 
	if(y>x){
		if(y>z){
		    return y;
		}
		else{
			if(x>z){
				return y;
			}
			else{
				return z;
			}
		}
	}
}

//7-ввод числа-?
int lab6task18(int a){
	
	int sum=0, n;
	do{
		std::cin>>a;
	 	sum=sum+a;
        n=n+1;
	 }
	while(sum <= 1000);
	return n;
}






int main(){
	//1
	std::cout << lab2task7(1125)<< "\n";
	std::cout << lab2task7(2000)<< "\n\n";
	
	//2
	std::cout << lab2task9(200)<< "\n\n";
	
	//3
	std::cout << lab2task39(-2, 4, 8,-10)<< "\n\n";
    
	//4
	std::cout << lab2task10(7559, 7549)<< "\n";
	std::cout << lab2task10(90, 0)<< "\n\n";
	
    //5
	std::cout << lab5task3(10)<< "\n";	
	std::cout << lab5task3(0)<< "\n";
	std::cout << lab5task3(-9)<< "\n\n";
	
    //6
    std::cout << lab5task16(10, 5.45, 7.37268)<< "\n";	
	std::cout << lab5task16(0, 29.4848, 29.38)<< "\n";
	std::cout << lab5task16(-9, -10, -5)<< "\n\n";
    
    //7
    int n, a;
	std::cin>>a;
    std::cout<<n;
    
    
    
    
    
}
