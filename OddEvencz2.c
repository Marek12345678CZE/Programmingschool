je_sude (<cislo)
int main (void){
	printf("zadej číslo:");
	int i;
	scanf("%d", &i);
	if(je_sude(i) == TRUE){
		printf("Tvé číslo je sudé");}
	else{
		printf("Tvé číslo je liché");}
	return 0;
}

