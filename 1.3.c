#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	char track[][80] = 
	{
		"I left my heart in Havard Med school",
		"Newak Newak -a wonderful town",
		"Dancing with a dork",
		"From here to maternity",
		"The girl from Iwo Jima",
	};
int main()
 {
	printf("%s\n",track[4]);
	printf("%s",track[4][6]);
	
	char s0[] = "dysfunction";
	char s1[] = "fun";
	if(strstr(s0, s1)){
	printf("I found s1 in s0");
}	
FILE *in;
 if (!(in = fopen("dont_exist.txt", "r"))) {
 fprintf(stderr, "Can't open the file.\n");
 return 1;
 }
 #include <unistd.h>
...
while ((ch = getopt(argc, argv, "ae:")) != EOF)
 switch(ch) {
 ...
 case 'e':
 engine_count = optarg;
 ...
 }
argc -= optind;
argv += optind;
	return 0;
}
