#include <iostream.h>
#include <conio.h>
main()
{
int i;
cout<<"enter the number For Countdown \xdb ";
cin>>i;
while (i>0)
{
cout<<i<<",";
--i;
getch();
}
cout<<" FIRE !!!!\a\a\a\a ";
getch();
}