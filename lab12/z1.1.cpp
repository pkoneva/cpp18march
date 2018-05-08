#include <iostream>
#include <string>

std::string lab1task1(std::string A){
	std::string result;
	result = "My strimsya k ";
	result.append(A);
	return result; 
}
std::string lab1task5(std::string B, std::string C){
    std::string res;
    res.append(C);
    res.append(" ");
    res.append(B);
    return res;
	
}
double lab2task3(double x){
	double res;
	res=x+7;
	return res;
}

int lab2task4(int x1, int x2, int x3){
	int res;
	res=x1*x2+x2*x3+x3*x1;
	return res;
}

std::string lab5task1(int a, int b){
	std::string res="pervoe";
	std::string res1="vtoroe";
	if(a>b){
		return res;
	}
	if(a<b){
		return res1;
	}
}
 
int lab6task14(int a, int b){
    int x=0;
	if(a<b){
		while(a<=b){
   	        x=x+a;
            a=a+1;
        }
    }
	else{
	    while(a>=b){
   	        x=x+a;
            a=a-1;
        }
    }
    return x;
}

int main()
{
	std::string out;
	out=lab1task1("znaniyam");
	std::cout << out << "\n";

	std::string out2;
	out2=lab1task5("nachalo", "konec");
    std::cout << out2 << "\n";
    
    double out3;
    out3=lab2task3(11.13);
    std::cout << out3 << "\n";
    
    int out4;
    out4=lab2task4(7451, 7433, 7417);
    std::cout << out4<< "\n";
    
    std::string out5, out6;
    out5=lab5task1(4, 6);
    out6=lab5task1(5, 4);
    std::cout << out5 << "\n" << out6;
    
    
    std::cout << "\n" << lab6task14(15, 27) << "\n";
	std::cout << lab6task14(13, 2) << "\n";
}






