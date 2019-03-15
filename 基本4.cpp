#include<stdio.h>
#include<stdlib.h>

int main()
{
	int c,h,m,s;
	printf("Please enter seconds (s)¡G");
	scanf("%d",&c) ;
	h = c/3600;
	m = (c%3600)/60;
	s = c%60;
	printf("Thats is :%dh%dm%ds\n",h,m,s);
	system("pause");
	return 0;
}
