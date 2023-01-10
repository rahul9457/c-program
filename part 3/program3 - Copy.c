#include<stdio.h>
int main()
{
	int days,years,week;
	printf("enter days");
	scanf("%d",&days);
	years=(days/365);
	week=(days%365)/7;
	days=days-((years*365)+ (week*7));
	printf("years %d \n",years);
	printf("week %d \n",week);
    printf("days %d",days);
	return 0;   
}
