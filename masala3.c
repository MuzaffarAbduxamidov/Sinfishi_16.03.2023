#include <stdio.h>
int main()
{
	char amal;
	float Son1, Son2, natija = 0;
	printf("\n Amal kiriting (+, -, *, /)  :  ");
  	scanf("%c", &amal);
	printf("\n Son1 Son2 kiriting : Son1 and Son2  :  ");
  	scanf("%f%f", &Son1, &Son2);
  	if(amal == '+')
  	{
  		printf("\n Natija %.2f + %.2f  = %.2f", Son1, Son2, Son1 + Son2);
  	}
  	else if(amal == '-')
  	{
  		printf("\n Natija  %.2f - %.2f  = %.2f", Son1, Son2, Son1 - Son2);
  	}
  	else if(amal == '*')
  	{
  		printf("\n Natija %.2f * %.2f  = %.2f", Son1, Son2, Son1 * Son2);
  	}
  	else if(amal == '/')
  	{
  		printf("\n Natija %.2f / %.2f  = %.2f", Son1, Son2, Son1 / Son2);
  	}
  	else
  	{
  		printf("\n Uddalab bo'lmaydigan amal");
	}
	
  	return 0;
}
