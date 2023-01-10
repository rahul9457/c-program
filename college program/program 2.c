#include<stdio.h>
int main()
{
	int ang1,ang2,ang3;
	printf("enter the value of the angle 1");
	scanf("%d",&ang1);
	printf("enteer the value for the angle 2");
	scanf("%d",&ang2);
	ang3=180-(ang1+ang2);
	printf("the third angle is %d",ang3);
	return 0;   
}
