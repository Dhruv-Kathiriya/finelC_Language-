/*
enter count :2
enter value :1
enter value :2
enter value :3
enter value :4
evan number is = 2
evan number is = 4
--------------------------------
*/
#include<stdio.h>
main()
{
	int a[10][10];
	int n,i,j;
	int *ptr;
	
	printf("enter count :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("enter value :");
				scanf("%d",&a[i][j]);
		}
	}
	ptr = &a[i][j];
		for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			
			if(a[i][j]%2==0){
					printf("evan number is = %d\n",a[i][j]);
			}	
			
		}
	}
}
