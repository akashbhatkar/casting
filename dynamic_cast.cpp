//dynamic cast is used at run time to find out correct down-cast.
// NOTE0: Need at least one virtual function in base class.
// NOTE1: If the cast is successful, dynamic_cast returns a value of type new_type.
// NOTE2: If the cast fails and new_type is a pointer type, it returns a null pointer of that type.
// NOTE3: If the cast fails and new type is a reference type, it throws an exception that matches a handler of type std::bad_cast

#include<iostream>
using namespace std;

class base
{
        public:virtual void display()
               {
                       cout<<"Base class display"<<endl;
               }
};
class derived:public base
{
        public: void display()
                {
                        cout<<"derived class display"<<endl;
                }
};

int main()
{
  base *bptr= new derived();//base *bptr= new base();
    derived *dptr=new derived();
    
    // dptr=bptr;
    dptr=dynamic_cast<derived *>(bptr);
    if(dptr!=nullptr)
    {
        cout<<"successfully casted"<<endl;
    }
    else
    cout<<"not cast"<<endl;
    
}
/*  it is successfully casted at the time when the bse pointer contatins the 
derived class object but the casting is failed when the base class contains the 
base class object in that situation the casting is fauled */

