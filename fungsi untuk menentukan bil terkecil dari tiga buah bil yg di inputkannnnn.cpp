#include<iostream>
using namespace std;
int main ()
{
    int bil1,bil2,bil3, terbesar;
    cout<<"Masukan bilangan 1 :";
    cin>>bil1 ;
    cout<<"Masukan bilangan 2 :";
    cin>>bil2 ;
    cout<<"Masukan bilangan 3 :";
    cin>>bil3 ;

{

if(bil1>bil2)
terbesar = bil1;

else
terbesar = bil2;

if(bil3>terbesar)
terbesar  =bil3;

cout<<endl;
cout<<"Nilai terbesar = "<<terbesar;cout<<endl;}
return 0;


}
