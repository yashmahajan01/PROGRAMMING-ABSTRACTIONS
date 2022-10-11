#include<iostream>
using namespace std;
int main()
{
    int a=1,b;
    b= a + ++a +a - --a + a + a-- + a ;
    //  1 +  2 + 2 - 1 + 1+ 1 + 0 = 6
    // 2 + 2  + 2 - 1 + 1 + 1 + 0 = 7  
    cout<<b<<endl;       

    return 0;
}