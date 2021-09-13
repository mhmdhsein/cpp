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
for(int l=0;l<3;l++)
    cout<<a2[l];
for(int o=0;o<3;o++)
    cout<<a3[o];
 for(int g=0;g<3;g++)
    cout<<a4[g];
    return 0;
}
