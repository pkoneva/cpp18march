#include<iostream>
#include<math.h>

using namespace std;

struct Point{
	int x; 
	int y; 
	
	double distanceTo(int px, int py){
		int dx = px-x;
		int dy = py-y;
		return sqrt(dx*dx +dy*dy);
	}
	
}; 

int main(){
	Point p;
	p.x=0;
	p.y=0;
	cout<< p.distanceTo(4, 3);
	
	return 0;
}
