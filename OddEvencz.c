#include <stdbool.h>
#include <stdio.h>
bool je_sude(int *cislo){
	if(*cislo%2==0)
		return true;
	return false;
}
int main (void){
        printf("\nzadejte číslo:");
        int *i;
	i = malloc (sizeof(int));
	scanf("%d", i);
        if(je_sude(i) == true){
                printf("\nTvé číslo je sudé\n\n");}
        else{
                printf("\nTvé číslo je liché\n\n");}
        return 0;
}
           
