#include <iostream>
#include <string>
#include <math.h>
#include <stdexcept>


double lab2task35(int a, int b, int c, int x){
	double res=1/pow((a*x*x+b*x+c), 0.5);
	if(a*x*x+b*x+c<=0){
		throw  std::invalid_argument("error");
	}
	else{
		return res;
	}
}


double lab2task26(int u0, int a, int t){
	double l;
	if(u0<0){
		throw std::invalid_argument("nach skorost' otrizatelna");
	}
	if(t<=0){
		throw std::invalid_argument("t nepravilnoe");
	}
    l=u0*t+((a*pow(t,2))/2);
	return l;
}


double lab2task13(int base, int height){
	double S;
	if(base<=0 or height<=0){
	    throw std::invalid_argument("error");	
	}
	S=base*height/2;
	return S;
}


double lab6task16(double n){
	double sum=0;
	int i=1;
	if(n<=0){
		throw std::invalid_argument("error");
	}
	else{
	    while(n>=i){
	   	    sum=sum+1/n;
	        n=n-1;
	    }
    return sum;
	}
}


int lab2task30(int a, int b, int c){
	int D;
	if(a==0){
		throw std::invalid_argument("a ne dolgno bit' ravno 0");
	}
	else{ 
	D=pow(b,2)-4*a*c;
	return D;
    }
}





int main(){
	std::cout << lab2task35(11, 13, 17, 19)<< "\n";
	try{
		std::cout << lab2task35(1, 2, -3, 1);
	} catch (std::invalid_argument& e)	{
		std::cout << e.what();
		std::cout<< "\n\n";
	}
	
	
	std::cout << lab2task26(3, 7, 11)<< "\n";
	try{
		std::cout<<lab2task26(0, 2, 0);
	} catch (std::invalid_argument& e) {
		std::cout << e.what();
		std::cout<<"\n";
	}
	try{
		std::cout<<lab2task26(-2, 3, 3);
	} catch (std::invalid_argument& s)  {
		std::cout << s.what();
		std::cout<<"\n\n";
	}
	
	
	try{
	    std::cout<<lab2task13(8, 6)<<"\n";
	} catch( std::invalid_argument& e)  {
		std::cout<<e.what();
		std::cout<<"\n\n";
	}
	try{
	    std::cout<<lab2task13(0, 6);
	} catch( std::invalid_argument& e)  {
		std::cout<<e.what();
		std::cout<<"\n\n";
	}
	
	
	std::cout<<lab6task16(11)<<"\n";
	try{
		std::cout<<lab6task16(0);
	} catch (std::invalid_argument& e)  {
		std::cout<< e.what() << "\n\n";
	}
	
	
	std::cout<<lab2task30(-11, -13, -17)<<"\n";
	try{
		std::cout<<lab2task30(0, 5, 1299);
	} catch (std::invalid_argument& e)  {
		std::cout<< e.what() << "\n\n";
	}
}
