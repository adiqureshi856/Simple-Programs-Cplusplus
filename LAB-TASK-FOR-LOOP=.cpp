/* This Programs Calculate The Sum Of
4-4/3+4/5-4/7+4/9-4/11+4/13 */

#include <iostream.h>
#include <conio.h>
main()
{
int a=4;
float sum=0;
for(int i=1;i<=13;i+=2)
{sum=sum+(a/i);
a=a*(-1);}
cout<<sum;
getch();
}