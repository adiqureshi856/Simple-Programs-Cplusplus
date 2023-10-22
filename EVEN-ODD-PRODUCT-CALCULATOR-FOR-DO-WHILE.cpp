#include <iostream.h>
#include <conio.h>
main()
{int a;
do{
cout<<"\n\nenter the number (EVEN\ODD) to Calculate PRODUCT = ";
cin>>a;
float pro=1;
if(a%2==1)
   {
     for(int i=1;i<=a;i+=2)
      {pro=pro*(i);}
       cout<<pro;
   }
else
if(a%2!=1)
   {
     for(int i=2;i<=a;i+=2)
      {pro=pro*(i);}
       cout<<pro;
   }
cout<<"\n\n hit c to drop agian ";
}while (getch()=='c');

}