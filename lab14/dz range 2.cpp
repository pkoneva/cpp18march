#include<iostream>
#include <sstream>

using namespace std;

struct Range{
	int x;
	int y;
		string contains(int a, int b){
			stringstream s;
			int newY = y+b;
			int newX = x-a;
			s << newX << " " << newY;
		    
		    return s.str();
		}
};

int main()
{
	Range r;
	r.x=11;
	r.y=13;
	
	cout<<r.contains(2, 5);
	
}
