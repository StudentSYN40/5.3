#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int rows,cols;
	printf("rows = ");
	scanf("%d",&rows);
	
	printf("cols = ");
	scanf("%d",&cols);
	
	srand(time(NULL));
	
	int **mas = new int* [rows];
	
	for (int i=0; i<rows; i++)
	{
		mas[i] = new int[cols];
	}
	
	for(int j=0;j<rows;j++)
	{
		for(int i=0;i<cols;i++)
		{
			mas[j][i]=rand()%10+(-2);	
		}
	}
	
		for(int j=0;j<rows;j++)
	{
		for(int i=0;i<cols;i++)
		{
			printf("%4i",mas[j][i]);	
		}
		printf("\n");
	}
	
	for (int i=0;i<rows;i++)
	{
		delete[] mas[i];
	}
	
	delete[] mas;
}