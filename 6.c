#include<stdio.h>
#include<conio.h>
main()
{
	int c;
  clrscr();
	printf("Enter a year:");
	scanf("%d",&c);
	if(c%4==0)
  {
	printf("%d is a leap year",c);
  }
	else
  {
	printf("%d is not a leap year",c);
  }
	return 0;
}
