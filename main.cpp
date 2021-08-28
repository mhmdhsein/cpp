#include <iostream>

using namespace std;

int main()
{
int a1[3][3];
int a2[3],a3[3],a4[3];
int f,m;
for(f=0;f<3;f++)
    for(m=0;m<3;m++)
    cin>>a1[f][m];
for(f=0;f<3;f++){
    for(m=0;m<3;m++){
     if(m==0)
      a2[f]=a1[f][m];
     if(m==1)
        a3[f]=a1[f][m];
     if(m==2)
        a4[f]=a1[f][m];
    }
}
for(int s=0;s<3;s++)
    cout<<a2[f];
for(int s=0;s<3;s++)
    cout<<a3[f];
    for(int s=0;s<3;s++)
    cout<<a4[f];
    return 0;
}
