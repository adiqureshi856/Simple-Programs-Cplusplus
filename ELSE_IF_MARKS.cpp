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
if (av>=80)
cout<<"\ngrade = A\n ";
else if (80<av<60)
cout<<"\nGrade = B\n";
else if (60<av<50)
cout<<"\nGrade = C\n";
else if (50<av<40)
cout<<"\nGrade = D\n";
else
cout<<"\nGrade = F\n";
getch();
}