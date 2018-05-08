#include <iostream>
#include <string>
#include <stdexcept>
double lab2task18(int x){
	if(x>61){
		throw std::invalid_argument("error");
	}
	return x;
}

double lab2task24(double x){
	if (x<273.16){
		throw std::invalid_argument("error");
	}
	else{
		x=x*1.8+32;
	}
	return x;

	
}

int main(){
	std::cout << lab2task18(60)<< "\n";
	try{
		std::cout << lab2task18(62);
	} catch (std::invalid_argument& e)	{
		std::cout << e.what();
		std::cout<< "\n";
	}
	
	std::cout << lab2task24(691.9) << "\n";
	try{
		std::cout << lab2task24(-274) << "\n";
	} catch (std::invalid_argument& e)	{
		std::cout << e.what();
		std::cout<< "\n";
	}
	return 0;
}



