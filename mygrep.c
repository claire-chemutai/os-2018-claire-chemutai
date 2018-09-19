
#include <stdio.h>
#include  <stdlib.h>
#include <string.h>
int main(int argc, char * argv[]){
FILE * fpointer;	
int i;
if(argc<2){
	printf("mygrep: searchterm [file ....]\n");
	exit(1);
}
for(i=2;i<argc; i++){
	fpointer=fopen(argv[i],"r");
 	if (fpointer){
	char line[150];

	while (!feof(fpointer)){
		fgets(line,150,fpointer);
		if (strstr(line, argv[1])){
	                printf("%s\n", line);
		}
	}
	fclose(fpointer);
	}else {
    		printf("mygrep: cannot open file\n");
    		exit(1);
	}
}
return 0;
}

