#include <iostream.h>
#include <conio.h>

#define pi 3.14
main()
{
clrscr();
cout<<"### Programmed By B C L Blade .~~~~~~~~~~~~~~~~~~~~\n";
cout<<"-----------@@@ bscsnotes.4shared.com @@@-----------\n\n";
float r;
   do{
   cout<<"\ninput radius  = ";
   cin>>r;
   float g=r*r;
   cout<<"\n\nthe area Is   = "<<g*pi;
   cout<<"\n\n\npress Any Key To Exit! Or C To Do Another Calculation\n\n";
   }while(getch()=='c');
}
