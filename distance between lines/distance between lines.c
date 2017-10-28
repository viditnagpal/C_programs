 // program distance between two lines
#include<stdio.h>
#include<math.h>
int  main()
{
struct xpt
{
float a;
float b;
}; 
struct xpt X;
struct xpt Y;
scanf("\n%f %f",&X.a,&X.b);
scanf("\n%f %f",&Y.a,&Y.b);
float dist;
dist=sqrt(((X.b-X.a)*(X.b-X.a)+(Y.b-Y.a)*(Y.b-Y.a)));
printf("distance is %f",dist);
return 0;	
}
