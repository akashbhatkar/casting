#include <iostream>

using namespace std;
void fun(int *);
int main()
{
    const int i=10;
    const int *ip=&i;
    //ip=&i;

    //cout<<*ip<<endl;
    //incre(ip);
    int *it=const_cast <int *>(ip);
    fun(it);
    cout<<*ip;
    return 0;
}
void fun(int *p)
{
    *p=*p+20;
     cout<<*p+20<<endl;
}
