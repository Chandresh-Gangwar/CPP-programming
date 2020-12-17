
#include<iostream>

using namespace std;

int main()
{
int yr;
cout<<"ENTER THE YEAR";
cin>>yr;
if(yr%4==0 && yr%100==0 && yr%400==0)
{
cout<<"THE YEAR IS LEAP YEAR"<<yr;
}
else if(yr%4==0 && yr%100!=0)
{
cout<<"THE YEAR IS LEAP YEAR";
}
else
{
cout<<"THE YEAR IS NOT LEAP YEAR";
}
return 0;
}