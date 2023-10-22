#include <iostream.h>
#include <conio.h>
main()
{
float av;
int mark,m_ob;
cout<<"enter the marks obtained =";
cin>>m_ob;
cout<<"\nEnter The Total Number = \xdb ";
cin>>mark;
av=(m_ob/mark)*100;
if (av>=80)
cout<<"\ngrade = A\n ";
else if (av>=60 && av<=80)
cout<<"\nGrade = B\n";
else if (av>=50 && av<=60)
cout<<"\nGrade = C\n";
else if (av>=40 && av<=50)
cout<<"\nGrade = D\n";
else
cout<<"\nGrade = F\n";
getch();
}