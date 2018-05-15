#include <iostream>
#include <string>
#include <math.h>
#include <stdexcept>
#include <stdio.h>

//вывод одной величины
int lab2task23(int lengthSeconds){
	int h, m, s;
	if(lengthSeconds<0){
		throw std::invalid_argument("chislo otrizatelnoe");
	}
	else{
		h=lengthSeconds/(60*60);
		m=(lengthSeconds/60)-h*60;
		s=lengthSeconds-h*3600-m*60;
		return h;
		return m;
		return s;
	}
}


std::string lab5task5(double roadKm, double lenghtFeet){
	if(roadKm<0 or lenghtFeet<0) {
		throw std::invalid_argument("dlina otrizatelna");
	}
	if(1000*roadKm<0.305*lenghtFeet){
	    return("Kab dost");
}
	else{
		return("Kab ne dost");
	}
}


//два раза один ответ
std::string lab5task27(int a){
	if(a>100 & a<-10){
		throw std::invalid_argument("error");
	}
	else{	
		if(a>9 & a<21){ return "-y"; }
		else{
		    if(a==40){ return "-o"; }
		    else{
			    if(a%10==1 or a%10==4 or a%10==5 or a%10==9 or a%10==0){
				    return("-y");
			    }
			    else{
				    if(a%10==3){ return("-i"); }
		            else{ return("-o");}
			    }
		    }
		}
	}
}


std::string lab6task29(int x){
	if(x<=0){
	   throw	std::invalid_argument("X dolgen bit' >0");
	}
	else{
		int a=1; int n=0;
	    while(a<=x){
			if(x%a==0){
				n=n+1;
                a=a+1;
			}
			else{
				a=a+1;
			}
   	        
        }
        if(n>2){
        	return("chiclo sostavnoe");
        }
        else{
        	return ("chislo prostoe");
        }
	}
}



int main(){
	std::cout << lab2task23(4000) << "\n";
	try{
	    std::cout<<lab2task23(-10)<<"\n";
	} catch(std::invalid_argument& e){
		std::cout << e.what() << "\n\n";
	}
		
	
	std::cout <<lab5task5(0.7, 2297)<<"\n";
	std::cout <<lab5task5(0.3, 983)<<"\n";
	try{
	    std::cout<<lab5task5(-10, 5)<<"\n";
	} catch(std::invalid_argument& e){
		std::cout << e.what() << "\n\n";
	}
	
	std::cout<<lab5task27(98)<<"\n";
	try{
	    std::cout<<lab5task27(-118)<<"\n\n";
	} catch(std::invalid_argument& e){
		std::cout << e.what() << "\n\n";
	}
	
	std::cout << lab6task29(6)<< "\n";
	std::cout << lab6task29(19)<< "\n";
	try{
	    std::cout<<lab6task29(-18)<<"\n";
	} catch(std::invalid_argument& e){
		std::cout << e.what() << "\n\n";
	}
}
