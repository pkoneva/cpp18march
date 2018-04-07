#include "stdio.h"
#include "math.h"

int main()
{
	float F, g, r, m1, m2;
	scanf("%f %f %f",&m1, &m2, &r);
	if(m1<=0 or m2<=0){
		printf("m otricatei'na ili 0");
	} else{ 
	    if(r<=0){
	    	printf("r otricatei'no ili 0");
	    }
	    else{
	        g=9.8067;
	        F=g*m1*m2/pow(r,2);
	        printf("%.4f", F);
	    
		}
	}
    return 0;
}
