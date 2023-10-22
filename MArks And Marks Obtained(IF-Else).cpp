#include<iostream.h>
#include<conio.h>
main()
{ do{float m_ob,m_to;
cout<<"input marks obtained ="<<endl;
cin>>m_ob;
cout<<"input total marks ="<<endl;
cin>>m_to;
float av=(m_ob/m_to)*100;
if(av>=50)
{cout<<"the student is pass";}
else
{cout<<"the student is fail";}
}while(getch()=='c');
}