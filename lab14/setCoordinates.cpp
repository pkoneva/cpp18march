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
    
    void setCoordinates(int g,int h){
    	x = g;
    	y = h;
    }
}; 

int main(){
	Point start;
	
	start.setCoordinates(4, 7);
	
	Point end;
	end.setCoordinates(34, 78);
	
	cout << start.distanceTo(end);
	

	return 0;
}
