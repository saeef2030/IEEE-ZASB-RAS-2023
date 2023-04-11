#include<stdio.h>
#include<stdlib.h>
int main()
{ int length, freq[500]={0}, maxfreq = 0;
 char *name;

 printf("Enter your Maximum length sir:\n");
 scanf("%d",&length);
 name = (char*) calloc(length, sizeof(char));
 if (name == NULL){
    printf("Memory not allocated.\n");}
 else{
    printf("Memory allocated successfully\n");
    printf("Please Enter your name:");
    getchar();
    gets(name);
    printf("Your Name you Entered is: %s\n",name);
   
    for(int i = 0; name[i] != '\0'; i++)
    {
        freq[name[i]]++;
    }
    for(int i = 0; i < 500; i++)
    {
        if(freq[i] > freq[maxfreq])
        {
            maxfreq = i;
        }
    }
    printf("The most repeated character in your name is ((  %c  )) & its frequency = %d\n", maxfreq, freq[maxfreq]);
    }
    free(name);
    return 0;
}