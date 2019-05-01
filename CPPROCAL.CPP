#include<iostream.h>
#include<conio.h>
#include<math.h>
float pi=3.141592;
class calci
{
   float a,b,c;
   char ch;
  public:
    void calc();
    float sine();
    float cosine();
    void tangent();
    void trigonometry();
    void fact();
    void menu();
    void ncr();
    void npr();
    void get_o(int i);
};

float fac(int x)                  //Recursive function
{
  if(x<=1)return 1;
  else return (x*fac(x-1));
}

void calci::npr()               //Permutation
{
  cout<<"PERMUTATION\nn=";cin>>a;
  cout<<"r=";cin>>b;
  if(b<=a)
  cout<<"nPr="<<int(fac(a)/fac(a-b))<<endl;
  else cout<<"nPr=0";
}

void calci::ncr()                  //Combination
{
  cout<<"COMBINATION\nn=";cin>>a;
  cout<<"r=";cin>>b;
  cout<<"nCr="<<int(fac(a)/(fac(b)*fac(a-b)))<<endl;
}

void calci::calc()               //Arithmetic calculations
{
  cout<<"ARITHMETIC\nEnter two numbers:"<<endl;
  cin>>a>>b;
  cout<<"Enter the operator:";
  cin>>ch;
  switch(ch)
  {
    case '+':c=a+b;                                 break;
    case '-':c=a-b;                                 break;
    case '*':c=a*b;                                 break;
    case '/':if(b!=0) c=a/b;                        break;
    case '%':if(b!=0) c=int(a)%int(b);              break;
    default :cout<<"Operation not possible"<<endl;  break;
  }
  cout<<"Ans="<<c;
}

float calci::sine()                   //Trigonometry
{
   a=a*pi/180;
   int i,j;   b=0;
   for(i=1,j=2;i<=500;i=i+2,j++)
   {
       b=b+(pow(a,i)/fac(i))*pow(-1,j);
   }             a=a*180/pi;
   return b;
}

float calci::cosine()
{  a=90-a;
   return sine();
}

void calci::tangent()
{
   if((int(a)%90)==0&&(int(a)%180)!=0)cout<<"Not Defined";
   else
    {
      cout.precision(4);
      cout<<sine()/cosine();
    }
}
void calci::trigonometry()
{  cout<<"TRIGONOMETRY\n";
   int i;
   cout<<"Enter the angle in degree:";
   cin>>a;
   cout<<"Enter the function:\n1:sine\n2:cosine\n3:tangent\n";
   cin>>i;
   switch(i)
   {
    case 1:cout<<"sin("<<a<<")=";
	   cout.precision(3);
	   cout<<sine();           break;
    case 2:cout<<"cos("<<a<<")=";
	   cout.precision(3);
	   cout<<cosine();         break;
    case 3:cout<<"tan("<<a<<")=";
	   tangent();              break;
  }
}

void calci::menu()
{
   cout<<"For following operations enter the corresponding number"<<endl;
   cout<<"1:Arithmetic\n2:Trigonometry\n3:Factorial";
   cout<<"\n4:Permutation\n5:Combination\n";
}

void calci::get_o(int i)
{
   switch(i)
   {
     case 1:calc();break;
     case 2:trigonometry();break;
     case 3:fact();break;
     case 4:npr();break;
     case 5:ncr();break;
   }
}

void calci::fact()
{
   int i;
   cout<<"FACTORIAL\nEnter the number:";cin>>i;
   cout<<i<<"!="<<fac(i);
}

void main()
{
   clrscr();
   int k;
   calci s;
   s.menu();
   cout<<"Enter operation number:";
   cin>>k;
   while(k>5||k<1)
   {
    cout<<"Enter valid operation number: ";
    cin>>k;
   }
   while(1)
   {
    clrscr();
    s.menu();
    s.get_o(k);
    cout<<"\nEnter Operation Number \nOR Enter 0 to exit\n";
    cin>>k;
    if(k==0)break;
    while(k>5||k<1)
    {
     cout<<"Enter valid operation number: ";
     cin>>k;
    }
    cout<<endl;
   }
}















































































































































































































































































































































































































































































































































































































































































































































































































































