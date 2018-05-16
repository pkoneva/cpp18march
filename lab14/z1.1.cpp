#include<iostream>
#include<math.h>

using namespace std;

struct Point{
	int x; 
	int y; 
	
	double distanceTo(Point p){
		int dx = p.x-x;
		int dy = p.y-y;
		return sqrt(dx*dx +dy*dy);
	}

}; 

int main(){
	Point start;
	start.x=11;
	start.y=13;
	
	Point end;
	end.x=100;
	end.y=100;
	
	cout << start.distanceTo(end);
	return 0;
}
