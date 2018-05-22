#include<iostream>
#include <sstream>

using namespace std;


struct Point{
	int x, y;
};

struct Rectangle{
	int x, y;
	int height, width;
	
	
	int area(){
		int S=height*width;
	}
	
	bool contains(Point p){
		if(x<p.x & x+width>p.x& y<p.y & y+height>p.y){
			return true;
		}
		else{
			return false;
		}
	}
};







int main()
{
	 Rectangle s;
	 
	 s.x=4;
	 s.y=6;
	 s.height=7;
	 s.width=9;
	 
	cout << s.area() << "\n";
	
	
	Point p;
	p.x=8;
	p.y = 8;
	if(s.contains(p)){
		cout << "+";
	}
	else{
		cout << "-";
	}
	
	
	
	
}
