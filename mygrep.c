#include <stdio.h>
#include <stdlib.h>

int main( int argc, char * argv[] ){

    FILE * fPtr;
    char * word;
    char line[150];
    fPtr = fopen(argv[2], "r");

        while (!feof(fPtr)){
            fscanf(fPtr, "%s", line);
            if (word== argv[1]){
                fgets(line, 150,(FILE *)fPtr );
                printf("%s", line);
            }

        }
        fclose(fPtr);

    return 0;
}
