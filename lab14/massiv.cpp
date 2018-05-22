#include <iostream>
using namespace std;



int sum(int *value, int n){
	int i=0;
	int total=0;
	while(i<n){
		total = total+value[i];
		i++;
	}
	return total;
}

void flip(int *m, int a, int b){
    int c, d;
	c=m[a];
    d=m[b];
	m[b]=c;
	m[a]= d;
}


int main(){
	int a[] = {9,8,7};
	cout << a[0] << "\n";
	cout << *(a+1) << "\n";
	
	cout << sizeof(a) << "\n"; //размер в байтах
	cout << sizeof(a)/sizeof(int) << "\n"; //елим длину в памяти массива на длину элемента=длина массива
	
	
	
	int c=5;
	int d=10;
	int i=0;
	
	int *b=new int[d-c];
	while(d>c){
		b[i]=d;
		d=d-1;
		i=i+1;
	}
	cout << b[2] << "\n\n";
	
	d=10;
	int total= sum(b, d-c);
	cout << total << "\n";
	
	flip(b, 2, 4);
	int n=0;
	while(i>n){
		cout << b[n] << " ";
		n=n+1;
	}
	
	
}



