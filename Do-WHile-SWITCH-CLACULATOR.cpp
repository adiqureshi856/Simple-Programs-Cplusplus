#include <iostream.h>
#include <conio.h>
main()
{
clrscr();
int a,b;
float c;
char ch,op;
  do{
     cout<<"\n\nenter 1st numeber \xdb ";
     cin>>a;
     cout<<"\nenter 2nd numeber \xdb ";
     cin>>b;
     cout<<"\nenter operation = \xdb ";
     cin>>op;
     switch (op)
     {case '+':
      c=a+b;
      cout<<"\n \t   \xdb "<<c;
      break;
      case '-':
      c=a-b;
      cout<<"\n\t    \xdb "<<c;
      break;
      case '*':
      c=a*b;
      cout<<"\n\t    \xdb "<<c;
      break;
      case '/':
      c=a/b;
      cout<<"\n\t    \xdb "<<c;
      break;
      default:
      cout<<"\nend";}
  cout<<"\n\ndo again(y/n)"<<endl;
  cin>>ch;}
  while(ch=='Y'||ch=='y');
  getch();
}
