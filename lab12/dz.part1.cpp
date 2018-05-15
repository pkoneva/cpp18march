#include <iostream>
#include <string>

std::string lab1task11(int a, int b, int c){
	std::string res1, res2; 
	res1="kvadratnoe uravnenie ";
	//res3.append(a);
	std::cout<< a;
	res1.append("*x^2+");
	std::cout<<b;
	//res3.append(b);
	res1.append("*x+");
	//res3.append(c);
	res1.append("=0");
	res1.append("\n");
	res1.append("reshaetsa po formule: D=");
	//res3.append(b);
	res1.append("*");
	//res3.append(b);
	res1.append("-4*");
	//res3.append(a);
	res1.append("*");
	//res3.append(c);
	return res1;
}

int main(){
    std::cout << lab1task11(2, 7, 10) << "\n";
}
