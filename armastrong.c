#include<stdio.h>
void main()
{
    int x,s,y,t;
   for(x=1;x<=1000;x++)
   {
    s=0;
    y=x;
    while(y!=0)
    {
        t=y%10;
        s=s+(t*t*t);
        y=y/10;
    }
   
    if(x==s)
        printf("%d ",s); 
}
}