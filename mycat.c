
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	int i;
	FILE * fpointer;
	for(i=1; i<argc+1; i++){
		fpointer=fopen(argv[i],"r");
		char singleline[150];

		while (!feof(fpointer)){
			fgets(singleline,150,fpointer);
			puts(singleline);
		}
		fclose(fpointer);
	}
	return 0;
}
