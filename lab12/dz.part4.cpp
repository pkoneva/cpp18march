#include <iostream>
#include <string>
#include "math.h"
#include <stdio.h>
//?-последнее число 
int lab6task2(int i){
    while(i<47){
    	i=i+1;
    	std::cout<< i << " ";
    }
    return i;
}

int lab6task15(int n){
	int a=0, b=0;
	
    printf("Xod reshenia");
    while(n<=39){
   	     a=pow(n,3)+a;
   	     n=n+1;
   	     b=pow(n,3);
   	     
			printf("%d + %d = %d\n", a, b, (a+b));
    }
    int c=a+b;
    return c;
}

int lab6task10(int i){
	int n=501; int sum=0;
	printf("\nXod reshenia");
    while(i<n){
   	    sum=sum+i;
        printf("%d ", sum);
		i=i+1;
    }
    return sum;
}


int lab6task9(int n){
	int a=1, c;
	while(a<9){
		c=a*n;
        printf("%d * %d = %d\n", n, a, c);
    	a=a+1;
    }
    printf("%d * %d = ", n, a);
    c=9*n;
    return c;
}


int lab6task36(int a, int b){
	int i=0, n=0, x=0;
    if(a<b){
		if(a%2==0){a=a+1;}
		if(b%2==0){b=b-1;}
	     while(a<b){ 
		     x=a;
			 while(i<=b-a){ 
			    while(n<i){
		        	printf(".");
		    	    n=n+1;
		    	}
		    	printf("%d\n", x); x=2+x; n=0;i=i+2; 
			}
		} i=0; x=a;
	}
	if(a>b){
		if(a%2==0){	a=a-1;}
		if(b%2==0){b=b+1;}
	     while(a>b){ 
		     x=b;
			 while(i<=a-b){ 
			    while(n<i){
		        	printf(".");
		    	    n=n+1;
		    	}
		    	printf("%d\n", x); x=2+x; n=0; i=i+2;
			 }	
		} i=0; x=b;
	}
}




int main(){
	std::cout<< lab6task2(16)<<"\n\n\n";
	
	std::cout<<lab6task15(20)<<"\n\n";
	
	std::cout<<lab6task10(100)<<"\n\n\n\n\n";
	
	std::cout<<lab6task9(-13)<<"\n\n\n\n\n";
	
	std::cout<<lab6task36(20, 28)<<"\n\n";
	std::cout<<lab6task36(41, 31);
}
