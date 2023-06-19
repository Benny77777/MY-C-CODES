#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char Str[1000],revStr[1000];
	int i,j,len;
	
	printf("\n please enter any text\n");
	gets(Str);
	
	j=0;
	len=strlen(Str);
    
    for(i=len-1;i>=0;i--)
    {
    	revStr[j++]=Str[i];
	}
	revStr[i]= '\0';
	printf("\n and the result of it is = %s\n",revStr);
	system("pause");
	return 0;
}
