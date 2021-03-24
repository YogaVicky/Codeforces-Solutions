// What is the output of the below program ?

#include <stdio.h>

#include <string.h>

int main(void)

{

char name[] = "Swadeshi Microprocessor Challenge";

int len;

int size;

len = strlen(name);

size = sizeof(name);

printf("%d",len*size);

return 0;

}