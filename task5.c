/*
Q5.)

Enter compny name: hp
Enter price: 20000
enter process:-  nivida
Enter compny name: lenovo
Enter price: 24000
enter process:-  nivida
Enter compny name: dell
Enter price: 30000
enter process:-  nivida pro


compny name : hp
laptop parice  : 20000
laptop parocesser  : nivida


compny name : lenovo
laptop parice  : 24000
laptop processer : nivida


compny name : dell
laptop parice  : 30000
laptop  processer : nivida

*/
#include<stdio.h>
#include<string.h>

	struct laptop {

	char compnyname[20];
	int price;
	int processe[20];

		};
void main()
{
	
struct laptop e;
struct laptop e1;
struct laptop e2;


	printf("Enter compny name: ");
	scanf("%s",&e.compnyname);
	printf("Enter price: ");
	scanf("%d",&e.price);
	printf("enter process:-  ");
	scanf("%d",&e.processe);
	
	printf("\n");
	
	printf("Enter compny name: ");
	scanf("%s",&e1.compnyname);
	printf("Enter price: ");
	scanf("%d",&e1.price);
	printf("enter process:-  ");
	scanf("%d",&e1.processe);

	printf("\n");

	printf("Enter compny name: ");
	scanf("%s",&e2.compnyname);
	printf("Enter price: ");
	scanf("%d",&e2.price);
	printf("enter process:-  ");
	scanf("%d",&e2.processe);
	
	printf("\n\n");
	
	printf("compny name : %s\n",e.compnyname);
	printf("laptop parice  : %d\n",e.price);
	printf("laptop parocesser  : %d\n",e.processe);
	
	printf("\n\n");

 	printf("compny name : %s\n",e1.compnyname);
	printf("laptop parice  : %d\n",e1.price);
	printf("laptop processer : %d\n",e1.processe);
	
	
	printf("\n\n");

 	printf("compny name : %s\n",e2.compnyname);
	printf("laptop parice  : %d\n",e2.price);
	printf("laptop  processer : %d\n",e2.processe);
}
