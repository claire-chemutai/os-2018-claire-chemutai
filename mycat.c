
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
int i;
FILE * fpointer;
if(argc<2){
	exit(1);
}
	for(i=1; i<argc; i++){
		fpointer=fopen(argv[i],"r");
		if(fpointer){
		char line[500];

		while (fgets(line,500,fpointer)){
			puts(line);
		}
		fclose(fpointer);
	}else {
		printf("mycat: cannot open file\n");
		exit(1);
	}
	}
	return 0;
}
