#include<stdio.h>
int main()
{
	char x;
	printf("enter the alphabet:");
	scanf("%c",&x);
	switch(x)
	{
		case 'a':
			printf("Ada");
			break;
		case 'b':
			printf("Basic");
			break;
		case 'c':
			printf("Cobol");
			break;
		case 'd':
			printf("dBaseIII");
			break;
		case 'f':
			printf("Fortran");
			break;
		case 'p':
			printf("Pascal");
			break;
		case 'v':
			printf("Visual c++");
			break;
		case 'A':
			printf("Ada");
			break;
		case 'B':
			printf("Basic");
			break;
		case 'C':
			printf("Cobol");
			break;
		case 'D':
			printf("dBaseIII");
			break;
		case 'F':
			printf("Fortran");
			break;
		case 'P':
			printf("Pascal");
			break;
		case 'V':
			printf("Visual c++");
			break;
		default:
			printf("try again");
			break;
	}
	return 0;
}
