#include <stdio.h>

struct vojak {
	char *jmeno[2];
	int zdravi;
	int munice;
};

int main(int argc, char** argv) {
	struct vojak a;
	a.zdravi = 100;
	a.munice = 15;
	printf("Jak se vojak jmenuje?");
	scanf("%s", a.jmeno);
	printf("%s: H: %d%% A: %d\n", a.jmeno, a.zdravi, a.munice);	
}
