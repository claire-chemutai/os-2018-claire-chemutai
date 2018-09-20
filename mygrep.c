
#include <stdio.h>
#include  <stdlib.h>
#include <string.h>

/*
*A program to search for terms in a file
*/
int main(int argc, char * argv[]){
FILE * fpointer;	
int i;
	
//if a filename and search term isnt stated
if(argc<2){
	printf("mygrep: searchterm [file ....]\n");
	exit(1);
}
	
//loop through all the file
for(i=2;i<argc; i++){
	//open each file
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

