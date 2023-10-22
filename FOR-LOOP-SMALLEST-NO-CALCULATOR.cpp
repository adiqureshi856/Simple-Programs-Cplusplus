#include <iostream.h>
#include <conio.h>
main()
{
int a,b,c;
cout<<"enter numbers of iteration =";
cin>>a;
cout<<"\n Enter Digit = ";
cin>>b;
for(int i=1; i<a;i++)
{cout<<"\nenter the digit = ";
cin>>c;
if (b>c)
b=c;
}
cout<<"\n"<<b;
getch();
}