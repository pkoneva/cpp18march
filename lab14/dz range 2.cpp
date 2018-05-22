#include<iostream>
#include <sstream>

using namespace std;

struct Range{
	int x;
	int y;
	
	void shift(int f){
		x= x+f; 
		y= y+f;
	}
	
	void stretch(int g){
		y= y+g;
	}
		string contains(int a, int b){
			stringstream s;
			int newY = y+b;
			int newX = x-a;
			s << newX << " " << newY;
		    
		    return s.str();
		}
		
	int length(){
		int len;
	    len=y-x;
		return len;
	}
};

int main()
{
	Range r;
	r.x=11;
	r.y=13;
	
	
	r.shift(10);
	cout << r.x << " " << r.y << "\n";
	
	
	Range l;
	l.x=13;
	l.y=17;
	l.stretch(3);
	cout << l.x << " " << l.y << "\n";
	
	
	cout << l.length() << "\n";
	
	cout<<r.contains(2, 5);
	
}
