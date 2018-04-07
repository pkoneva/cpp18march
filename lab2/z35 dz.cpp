#include "stdio.h"
#include "math.h"

int main()
{
	float a, b, c, x, R;
	scanf("%f %f %f %f",&a, &b, &c, &x);
	if(a*x*x+b*x+c<0){
		printf("pod kornem otriz zhach");
	} else{ 
	    if(a*x*x+b*x+c==0){
	    	printf("v znamenatele 0");
	    }
	    else{
	        R=1/(sqrt(a*x*x+b*x+c));
	        printf("%.4f", R);
	    
		}
	}
	return 0;
}
