/* Program Diplay
1 2 3 4
2 3 4 5
3 4 5 6
4 5 6 7
*/
#include<iostream.h>
#include<conio.h>

main()
{ int a[8]={0,1,2,3,4,5,6,7};
 for(int i=1;i<=4;i++)
 {  if(i==1)
      {for(int j=1;j<=4;j++)
      {cout<<a[j]<<"\t";}
      cout<<endl; }
    else if(i==2)
      {for(int j=1;j<=4;j++)
      {cout<<a[j+1]<<"\t";}
      cout<<endl;}
    else  if(i==3)
      {for(int j=1;j<=4;j++)
      {cout<<a[j+2]<<"\t";}
      cout<<endl;}
    else
     {for(int j=1;j<=4;j++)
      cout<<a[j+3]<<"\t"; }

 }
getch();
}
