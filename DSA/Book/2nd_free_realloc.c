//Program illustrate the use of functions free() and realloc().
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *msg;
    msg=(char *) malloc(30*sizeof(char));
    strcpy(msg,"Able was I");
    printf("The message now is %s\n",msg);
    msg=(char*)realloc(msg,50);
    strcpy(msg,"Ere I saw Elba...");
    printf("\nThe message is now %s\n",msg);
    free(msg);
    return 0;
}