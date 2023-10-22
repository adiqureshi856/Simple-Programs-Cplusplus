#include <iostream.h>
#include <conio.h>
main()
{
float av;
int mark,m_ob;
cout<<"enter the marks obtained =";
cin>>mark;
cout<<"\nEnter The Total Number = \xdb ";
cin>>m_ob;
av=(m_ob/mark)*100;
if (av>=80 && av<=100)
cout<<"\ngrade = A\n ";
else if ((av>=65)&&(av<=79))
cout<<"\nGrade = B\n";
else if ((av>=50) && (av<=64))
cout<<"\nGrade = C\n";
else if ((av>=40) && (av<=49))
cout<<"\nGrade = D\n";
else
cout<<"\nGrade = F\n";
getch();
}