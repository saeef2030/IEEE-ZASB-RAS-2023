#include <stdio.h>   
int main(){
    int *p,*q,*r ,*s1,*s2;
    int x=1,y=2,z=3;
    p=&x;
    q=&y;
    r=&z;
    printf("x=%d,y=%d,z=%d",x,y,z);
    printf("\np=%d,q=%d,r=%d",p,q,r);
    printf("\n*p=%d,*q=%d,*r=%d",*p,*q,*r);
    printf("\n\n>>>>>>>>>>>Swapping pointers<<<<<<<<<<<<<<<<<<\n");
    s1=p;
    s2=r;
    p=q;
    q=s2;
    r=s1;
    printf("\nx=%d,y=%d,z=%d",x,y,z);
    printf("\np=%d,q=%d,r=%d",p,q,r);
    printf("\n*p=%d,*q=%d,*r=%d",*p,*q,*r);
}