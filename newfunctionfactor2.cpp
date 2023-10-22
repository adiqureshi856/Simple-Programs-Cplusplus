#include <iostream.h>
#include <conio.h>

main()
{
int n=1;
int i=25;
int sum=0; // this isnt pointer, so it have to equal zero
for (n; n<=i; n++)

   if (i%n==0)
    {
cout<<" "<<n<<" ";
sum+=n;
    }
{
cout <<"\nSum: "<<sum<<"\nDiv2: "<<(sum/2)<<"\n";
}
getch();
}

