#include <iostream.h>
#include <conio.h>
main()
{
int a,b,i,sum;
sum=0;
cout<<"enter numbers of iteration =";
cin>>a;
for(i=1; i<=a;i++)
{cout<<"\nenter the digit = ";
cin>>b;
sum = sum+b;
}
cout<<"\n"<<sum;
getch();
}