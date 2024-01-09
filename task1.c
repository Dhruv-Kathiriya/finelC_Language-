/*
enter anyu value :- 22
enter anyu value :- 55
enter anyu value :- 44
enter anyu value :- 55
enter anyu value :- 44
avg = 44.000000
fail...
--------
*/
#include<stdio.h>

void main(){
	
	int sub1,sub2,sub3,sub4,sub5;
	float pr,ans;
	
	printf("enter anyu value :- ");
	scanf("%d",&sub1);
	printf("enter anyu value :- ");
	scanf("%d",&sub2);
	printf("enter anyu value :- ");
	scanf("%d",&sub3);
	printf("enter anyu value :- ");
	scanf("%d",&sub4);
	printf("enter anyu value :- ");
	scanf("%d",&sub5);
	
	ans = sub1+sub2+sub3+sub4+sub5;
	printf("avg = %.2f",ans/5);
	pr = (ans*100)/500;
	printf("%f\n",pr);
	
	if(pr>=90){
		printf("a grade");
	}else if(pr>=85){
		printf("b grade");
	}else if(pr>=65){
		printf("c garde");
	}else if(pr>=45){
		printf("d grade");
	}else{
		printf("fail...");
	}
	
}
