#include <iostream>
#include <string>
#include <sstream>

using namespace std;
string lab1task11(int a, int b, int c){
	stringstream x;
	x<<"kvadratnoe uravnenie ";
	x<<a;
	x<<"*x^2+"<< b<<"*x+"<<c<<"=0\nreshaetsa po formule: D="<< b <<"*"<<b << "-4*" << a<< "*"<< c<< " ";

	return x.str();
}

int main(){
    cout << lab1task11(2, 7, 10) << "\n";
}
