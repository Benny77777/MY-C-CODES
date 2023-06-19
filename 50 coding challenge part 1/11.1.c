#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	double root1,root2;
	printf("Enter the non-zero coefficients\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	int D = pow(b,2)-(4*a*c);
	printf("The descriminant is %d\n",D);
	if(D>0)
	{
	printf("The roots are distinct \n");
	root1 = (-b+sqrt(D))/(2*a);
	root2 = (-b-sqrt(D))/(2*a);
	printf("root1 = %f\n",root1);
	printf("root2 = %f\n",root2);
	}
	else if(D==0)
	{
	printf("The roots are equal\n");
	root1 = (-b)/(2*a);
	root2 = (-b)/(2*a);
	printf("root1 = %f\n",root1);
	printf("root2 = %f\n",root2);
	}
	else 
	{
		printf("The roots are complex");
	}
	system("pause");
	return 0;
}
