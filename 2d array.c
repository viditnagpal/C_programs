/* 2d array */
#include<stdio.h>
int main()
{
	int i,j;
	int a[][5]={
	            {2,4,6,8,10},
				{2,6,8,3,9},
				{9,87,6,5,4},
				{7,5,4,3,1},
				{7,8,4,1,2},	
	};
	printf("%d\n",a[1][2]);
	printf("%d %u\n",sizeof(a),a);
	/* i=row ,j=column*/
	for(j=0;j<=4;j++)
	 {
	 	for(i=0;i<=4;i++)
	 	{
	 		printf("%d ",a[j][i]);
		 }
		 printf("\n");
	 }
}
