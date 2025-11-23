# include <stdio.h>
int main()
{
	int x,y,right,left;
	printf("enter x value");
	scanf("%d",&x);
	printf("\n how many bits are moving...?");
	scanf("%d",&y);
	right=x>>y;
	printf("right shift=%d",right);
	left=x<<y;
	printf("\n left shift=%d",left);
	return 0;
}
