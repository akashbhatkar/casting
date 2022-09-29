#include <iostream>

using namespace std;

int main()
{
   int *ip,i=65;
   ip=&i;
   char *cp;
   //cp=&i;
   cp=reinterpret_cast<char*>(ip);
   cout<<cp<<endl;

   ip=reinterpret_cast<int*>(cp);
   cout<<*ip<<endl;

}
