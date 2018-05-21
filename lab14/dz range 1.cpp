#include<iostream>
#include <sstream>

using namespace std;

struct Range{
	int x;
	int y;
		string contains(){
			stringstream s;
			int newY = y+3;
			int newX = x;
			s << newX << " " << newY;
		    
		    return s.str();
		}
};

int main()
{
	Range r;
	r.x=11;
	r.y=13;
	
	cout<<r.contains();
	
}
