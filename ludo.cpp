#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
int main()
{
int worksum=0,worksum2=0,a,c=0,b,d=0;
while(worksum<=56||worksum2<=56)
{

cout<<"\n\n\tplayer 1 turn";
cout<<"\n\nPlz roll a dice to press any key";
srand(time(0));
a=1+rand()%6;
if(worksum==0&&a!=6)
{
cout<<"\n\nThe num is "<<a;
cout<<"\n\nThe worksum = "<<worksum;
}
if(a==6&&c==0)
{
cout<<"\n\nThe num is = "<<a;
c++;
}
if(c==1)
{

cout<<"\n\nPlz roll dice again";

srand(time(0));
a=1+rand()%6;
cout<<"\n\nThe num is="<<a;
worksum=worksum+a;
cout<<"\n\nThe worksum= "<<worksum;
c++;
goto v;
}

if(c>=2)
{

while(a==6)
{
if(a==6)
{
cout<<"\n\nThe num is = "<<a;

if(worksum==worksum2)
{
worksum2=0;
d=0;
}
worksum=worksum+a;
if(worksum>56)
{
worksum=worksum-a;

}

if(worksum==56)
{
cout<<"\n\nPlayer 1 wins";
break;
}
cout<<"\n\nPlz roll the dice again";

a=1+rand()%6;
continue;
}
cout<<"\n\nThe num = "<<a;
if(worksum==worksum2)
{
worksum2=0;
d=0;
}
worksum=worksum+a;
if(worksum>56)
{
worksum=worksum-a;
cout<<"\n\nYour num is greater so you cant enter in your home";
}
cout<<"\n\nThe worksum = "<<worksum;
if(worksum==56)
{
cout<<"\n\nPlayer 1 wins";
break;
}
}


cout<<"\n\nThe num is= "<<a;
if(worksum==worksum2)
{
worksum2=0;
d=0;
}
worksum=worksum+a;
if(worksum>56)
{
worksum=worksum-a;
cout<<"\n\nYour num is greater so you cant enter in your home";
}
cout<<"\n\nThe worksum= "<<worksum;
if(worksum==56)
{
cout<<"\n\nPlayer 1 wins";
break;

}
}




v: cout<<"\n\n\tplayer 2 turn";
cout<<"\n\nPlz roll a dice to press any key";

srand(time(0));
b=1+rand()%6;
if(worksum2==0&&b!=6)
{
cout<<"\n\nThe num is "<<b;
cout<<"\n\nThe worksum = "<<worksum2;
}

if(b==6&&d==0)
{
cout<<"\n\nThe num is = "<<b;
d++;
}
if(d==1)
{

cout<<"\n\nPlz roll dice again";

srand(time(0));
b=1+rand()%6;
cout<<"\n\nThe num is="<<b;
worksum2=worksum2+b;
cout<<"\n\nThe worksum= "<<worksum2;
d++;
continue;
}

if(d>=2)
{

while(b==6)
{
if(b==6)
{
cout<<"\n\nThe num is = "<<b;

if(worksum2==worksum)
{
worksum=0;
c=0;
}
worksum2=worksum2+b;
if(worksum2>56)
{
worksum2=worksum2-b;

}

if(worksum2==56)
{
cout<<"\n\nPlayer 2 wins";
break;
}
cout<<"\n\nPlz roll the dice again";

b=1+rand()%6;
continue;
}
cout<<"\n\nThe num = "<<b;
if(worksum2==worksum)
{
worksum=0;
c=0;
}
worksum2=worksum2+b;
if(worksum2>56)
{
worksum2=worksum2-b;
cout<<"\n\nYour num is greater so you cant enter in your home";
}
cout<<"\n\nThe worksum = "<<worksum2;
if(worksum2==56)
{
cout<<"\n\nPlayer 2 wins";
break;
}
}


cout<<"\n\nThe num is= "<<b;
if(worksum2==worksum)
{
worksum=0;
c=0;
}
worksum2=worksum2+b;
if(worksum2>56)
{
worksum2=worksum2-b;
cout<<"\n\nYour num is greater so you cant enter in your home";
}
cout<<"\n\nThe worksum= "<<worksum2;
if(worksum2==56)
{
cout<<"\n\nPlayer 2 wins";
break;

}
}
}

}