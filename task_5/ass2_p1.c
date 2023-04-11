#include<stdio.h>

int main() 
{
    int time, hour, minute, second;
    printf("Please Enter the time in format [hh:mm:ss]:: \n");
    scanf("%d:%d:%d", &hour, &minute, &second);
    time = hour * 3600 + minute * 60 + second;
    printf("total time in seconds = %d",time);
    
    int ret = ValidateTime(hour,minute,second);
    if(ret)
    {
        printf("\nInvalid Time. Try Again.\n");
    }
    else
    {
     printf("\nTime is: %02d:%02d:%02d\n", time / 3600, (time % 3600) / 60, time % 60);
    }

}

int ValidateTime(int hh , int mm , int ss)
{
    int ret=0;
    if(hh>24)   ret=1;
    if(mm>60)   ret=1;
    if(ss>60)   ret=1;

   return ret;
}