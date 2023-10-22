#include <iostream.h>
#include <conio.h>
main()
{
clrscr();
int a;
char ch;
   do{
     cout<<"\n\nenter 1st numeber \xdb ";
     cin>>a;
     switch (a)
     {case 1:
      cout<<"\n Ball Is RED   \xdb ";
      break;
      case 2:
      cout<<"\n Ball Is GREEN \xdb ";
      break;
      case 3:
      cout<<"\n Ball Is BLUE  \xdb ";
      break;
      case 4:
      cout<<"\n Ball Is BLACK \xdb ";
      break;
      default:
      cout<<"\n No MATCH ";}
  cout<<"\n\ndo again(y/n)"<<endl;
  cin>>ch;}
  while(ch=='Y'||ch=='y');
  getch();
}
