/*
enter row count :2
enter column count :2
enter value :1
enter value :2
enter value :3
enter value :4
enter value :1
enter value :2
enter value :3
enter value :4

 avg = 8
*/
#include<stdio.h>
main()
{
	int a[10][10],b[10][10];
	int r,c,i,j,sum=0,avg;
	
	printf("enter row count :");
	scanf("%d",&r);
	printf("enter column count :");
	scanf("%d",&c);
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("enter value :");
				scanf("%d",&a[i][j]);
		}
	}
	
		for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("enter value :");
				scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			sum = a[i][j]+b[i][j];
			
		}
		printf("\n");
	}
	printf("\n avg = %d",sum/r*c);
	
}
