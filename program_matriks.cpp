#include<iostream>
using namespace std;
#include<conio.h>

main()
{
int a,b;
int L[5][5]={
{1,2,3,4},
{2,3,4,5},
{3,4,5,6},
{4,5,6,7},
{7,8,9,10}
};

cout<<"Matriks identitas"<<endl<<endl;

for(a=1;a<=9;a++)
{
for(b=1;b<=9;b++)
{
if(a==b)
{
cout<<" "<<"1";
}
else
{
cout<<" "<<"0";
}
}
cout<<endl;
}
getch();
}
