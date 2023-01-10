#include<stdio.h>
int main()
{
	int area,base,height;
	printf("enter the value of the base");
	scanf("%d",&base);
	printf("enteer the value for the height");
	scanf("%d",&height);
	area=base*height/2;
	printf("area of the triangle is %d",area);
	return 0;
}
