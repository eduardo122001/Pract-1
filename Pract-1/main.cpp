#include <iostream>

using namespace std;

int main()
{
   //_--------------
   /* int num;
    cin>> num;
    int a;
    int b;
    int c;
    int d;
    int e;

    a=num/10000;
    b=(num/1000)-(a*10);
    c=(num/100)-((a*100)+(b*10));
    d=(num/10)-((a*1000)+(b*100)+(c*10));
    e=(num/1)-((a*10000)+(b*1000)+(c*100)+(d*10));
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;


    cout<<a<<'\t'<<b<<'\t'<<c<<'\t'<<d <<'\t'<<e<<endl;*/

    //-------------------


   /* int g;
    cin>>g;
    int div=1;
    int cont=0;
    while(div<g){
        div=div*10;
        cont++;
    }
    cout<<"tiene "<<cont<<" digitos"<<endl;*/


   /*int a ;
    cin>>a;
    int pa=(a/10000);
    int pb=(a/1000)-(pa*10);
    int x=(a/100)-((pa*100)+(pb*10));
    int aa=(a/10)-((pa*1000)+(pb*100)+(x*10));
    int ab=(a/1)-((pa*10000)+(pb*1000)+(x*100)+(aa*10));

    cout<<pa<<endl;
    cout<<pb<<endl;
    cout<<x<<endl;
    cout<<aa<<endl;
    cout<<ab<<endl;
    if((pa==ab)&& pb==aa  )
        cout<<"es polindrome"<<endl;
    else
        cout<<"no es polindrome"<<endl;*/

    int g;
    cin>>g;
    int d=1;
    int x=1;
    int y=0;
    int z=0;
    int r=0;
    while(d){
        z=x+y;

        cout<<z<<endl;
        y=x;
        x=z;
        if(r>g){
        d--;}
        r++;


    }




    /*char a;
    cin>>a;
    int n =static_cast<char>(a);
    if((47<n)&&(n<58))
        cout<<"si"<<endl;
    else
        cout<<"no"<<endl;*/







    return 0;
}
