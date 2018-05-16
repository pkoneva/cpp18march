#include <iostream>
#include <string>
#include <math.h>
#include <stdexcept>
#include <stdio.h>
#include <sstream>
using namespace std;
int lab6task4(int a, int b){
    if(a<b) {
       throw std::invalid_argument("nepravil'nye znachenia");
    }
	else{ 
	    while(a>=b){
        	std::cout<<a<<" ";
    	    a=a-1;
        }
        return a;
    }   
}


std::string lab6task25(int y){
	int a=15, t=0;
    if(y<=0){
    	throw std::invalid_argument("error");
    }
    std::stringstream x;
	while(t<y){
    	x << "#";
    	t=t+1;
    }
    while(t<15){
    	x << ".";
    	t=t+1;	
    }
    return x.str();
}


std::string lab6task22(int n){
	int i=0, k=1;
	if(n<=0){
		throw std::invalid_argument("error");
	}
	else{
		 std::stringstream x;
		while(i<n){	
	        i=i+1;
		    if(i==5*k){
			    k=k+1;
		        x<<"! ";
		    }
		    else{
		    	x<<"!";
		    }
        }
		 return x.str();
    }
    
}




int main(){
	std::cout<<lab6task4(10, 4) << "\n";
	try{
	    std::cout<<lab6task4(4, 9) << "\n";
	} catch(std::invalid_argument& e){
		std::cout << e.what() << "\n\n";
	}
	
	std::cout << lab6task25(10) << "\n";
	try{
	    std::cout<<lab6task25(-7) << "\n";
	} catch(std::invalid_argument& e){
		std::cout << e.what() << "\n\n";
	}
	
	std::cout<<lab6task22(12) << "\n";
	try{
	    std::cout<<lab6task22(-9) << "\n";
	} catch(std::invalid_argument& e){
		std::cout << e.what() << "\n\n";
	}
}
