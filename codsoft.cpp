#include<iostream>
#include <cstdlib>
#include <ctime>
//TASK 1
using namespace std;
int main()
{
srand(time(0));
int t=5;
int g=1;
int n=0;
bool flag=true;
char ch='A' + rand()%26;
char temp;
char guessed;
if (ch>='A')
temp=ch+1;
else if(ch<='Z')
temp=ch-1;
cout<<"You have "<<t<<" tries and "<<g<<" hint remaining!!"<<endl;
while(flag)
{
cout<<"Press 1 to make a guess or press 2 to use the hint: ";
cin>>n;
if(n==2)
{
if(g==0)
{
cout<<"You have no more hints left!"<<endl;
cout<<"You have "<<t<<" tries and "<<g<<" hint remaining!!"<<endl;
}
else
{
cout<<"Character is closest to Alphabet '"<<temp<<endl;
g--;
cout<<"You have "<<t<<" tries and "<<g<<" hint remaining!!"<<endl;
}
}
else if(n==1)
{
cout<<"Please make a guess: "<<endl;
cin>>guessed;
if(guessed==ch)
{
cout<<"Your guess is correct!"<<endl<<"You Won!";
break;
}
else
{
cout<<"Your guess is incorrect!"<<endl;
t--;
cout<<"You have "<<t<<" tries and "<<g<<" hint remaining!!"<<endl;
}
}
else
{
cout<<"Your choice is invalid"<<endl;
cout<<"You have "<<t<<" tries and "<<g<<" hint remaining!!"<<endl;
}
if(t==0)
{
cout<<"You lost!"<<endl<<"The correct alphabet was "<<ch<<endl;
break;
}
}
system("pause");
return 0;
}
