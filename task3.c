/*
enter count :2
enter value :1
enter value :2
enter value :3
enter value :4
odd number is = 1odd number is = 3
--------------------------------
*/
#include<stdio.h>
main()
{
	int a[10][10];
	int n,i,j,sum=0,avg;
	
	printf("enter count :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("enter value :");
				scanf("%d",&a[i][j]);
		}
	}
	
		for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			
			if(a[i][j]%2==1){
					printf("odd number is = %d",a[i][j]);
			}	
			
		}
	}
}
