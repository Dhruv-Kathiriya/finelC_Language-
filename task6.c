/*
enter fruite name :- mango
enter fruite colour name :- orange
 can't open file


--------------------------------
*/
#include<stdio.h>

void main() {
    
    FILE *e, *o;
    int i,j;

    e = fopen("COLUR.txt", "r");
    o = fopen("NAME.txt", "r");

		printf("enter fruite name :- ");
            scanf("%d\n",&i);
            printf("enter fruite colour name :- ");
           scanf("%d\n",&o);

    if(e == NULL || o == NULL){
        printf("can't open file\n");
    }
    		printf("enter fruite name :- ");
            fprintf(e,"%d\n", i);
            printf("enter fruite colour name :- ");
            fprintf(o,"%d\n", j);
        

    printf("Successfully added  numbers to files\n");

}
