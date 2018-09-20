
#include <stdio.h>
#include <stdlib.h>

/*
*A program to read and print out the contents of a file
*/
int main(int argc, char * argv[]){
int i;
FILE * fpointer;
if(argc<2){
	exit(1);
}
	//loop around all the files
	for(i=1; i<argc; i++){
		//open a file
		fpointer=fopen(argv[i],"r");
		if(fpointer){
		char line[500];
		
		//get all the lines in the file
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
