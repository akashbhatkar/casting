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
//      base *b;
        derived d;
        derived *dp;
        base ob;
        base *b=dynamic_cast<base*>(&d);
        dp=dynamic_cast<derived*>(b);
        b->display();
}

