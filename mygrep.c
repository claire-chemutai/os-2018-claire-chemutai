#include <stdio.h>
#include <stdlib.h>

//int main(int argc, char * argv[]){
int main(){
	int i;
	FILE * fpointer;
	char *ret;
	//for(i=1; i<argc+1; i++){
		fpointer=fopen("file.txt","r");
		char line[150];

		while (!feof(fpointer)){
			fgets(line,150,fpointer);
			if (strstr(line, "foo")){
                printf("%s\n", line);
			}
		}
		fclose(fpointer);
	//}
	return 0;
}
