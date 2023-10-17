#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    
    int lastdigit,p,sum=0;

    while(n>0)
    {
     lastdigit=n%10;
     p= pow(lastdigit,3);
     sum=sum+p;
     n=n/10;
    }
    cout<<sum;
}
