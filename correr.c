#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv){
    
    char* lineas = malloc(200*sizeof(char));

    FILE *archivo = fopen(argv[1],"r");
    int i = 0;
    while (fgets(lineas,200,archivo)){
        printf("%s\n",lineas);
        i++;
    }
    printf("---%i---", i);

    return 0;
}