#include<stdio.h>  
void main()	{  
	FILE *f;  
	char ch;  
	f = fopen("Q2.c","r");  
	while(1) {  
		ch = fgetc (f);  
		if (ch == EOF)  
			break;  
		printf("%c",ch);  
	}  
	fclose (f);  
}
