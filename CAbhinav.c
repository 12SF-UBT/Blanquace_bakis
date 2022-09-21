#include <stdio.h>

int main()
{
    //C
     float d,e,f;
             printf("Type the value of d:" );
              scanf("%f",&d);
             printf("Type the value of e:");
              scanf("%f",&e);
             printf("Type the value of f:" );
              scanf("%f",&f);
	if(d < e && d < f)
	{
		printf("%f is smallest",d);
	}
	else if(e < f)
	{
		printf("%f is smallest",e);
	}
	else
	{
		printf("%f is smallest",f);
	}
	return 0;
}
