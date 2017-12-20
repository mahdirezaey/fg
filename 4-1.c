#include <stdio.h>
#include <stdlib.h>
int Sum=0;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int arraysum (int aray[],int size)
{
	//static int Sum=0;
	
	if(size>=0)
		{
			Sum=Sum+aray[size];
			return arraysum(aray,size-1);
		}
		
	
	else 
		{
			int temp=Sum;
			Sum=0;
			return temp;
		}

}

double arraymean (int aray[],int size)
{
	return (double) arraysum(aray,size) /(size) ;
	
}

int arraymin(int aray[],int size)
{
	static int min=100;
	
	if(size>0)
		{
			if(min>aray[size])
				min=aray[size];
																			
			return arraymin(aray,size-1);
		}
	else 
		return min;
}

int arraymax(int aray[],int size)
{
	static int max=-100;
	
	if(size>0)
		{
			if(max<aray[size])
				max=aray[size];
																			
			return arraymax(aray,size-1);
		}
	else 
		return max;
}

int main() 
{
	int a[100];
	
	int size;
	
	scanf("%d",&size);
	
	int counter;
	
	for(counter=0;counter<size;counter++)
		scanf("%d",&a[counter]);		
		
	printf("sum= %d\n", arraysum(a,size));
	printf("min= %d\n", arraymin(a,size));
	printf("max= %d\n", arraymax(a,size));
	printf("avg= %.2f\n", arraymean(a,size));

	
	return 0;
}
