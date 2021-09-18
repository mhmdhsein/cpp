#include <iostream>

using namespace std;

int main()
{
int a1[2][3]={{2,3,4},{3,5,6}};
int a2[3];
for(int f=0;f<2;f++)
    for(int m=0;m<3;m++)
    if(f==0)
    a2[m]=a1[f][m];
for(int h=0;h<3;h++)
    cout<<a2[h];
    return 0;
}
© 2021 GitHub, Inc.
