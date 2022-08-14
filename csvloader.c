#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE* stream = fopen("PH3_IR_HAPI_P=0.100000,T=297.0,L=100,x_PPM=1.0,step=1.csv", "r");

    char line[1024];
    while (fgets(line, 1024, stream))
    {
        char* tmp = strdup(line);
        printf("Field 3 would be %s\n", getfield(tmp, 1));
        // NOTE strtok clobbers tmp
        free(tmp);
    }
}
