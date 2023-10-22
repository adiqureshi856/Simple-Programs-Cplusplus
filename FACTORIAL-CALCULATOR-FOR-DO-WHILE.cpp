#include <iostream.h>
#include <conio.h>
main()
{int a;
do{
cout<<"\n\nenter the number to calculate factorial = ";
cin>>a;
float pro=1;
for(int i=1;i<=a;i++)
{pro=pro*(i);}
cout<<pro;
cout<<"\n\n hit c to it agian ";
}while (getch()=='c');

}