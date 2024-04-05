#include <iostream>
#include "Heder/tester.h"


int main()
{
  {
    VirtualMemberFunctions::Base b; 
    b.foo();  
    VirtualMemberFunctions::Derived d1;
    d1.foo();

    VirtualMemberFunctions::Derived *d2 = new VirtualMemberFunctions::Derived2();
    d2->foo();
    delete d2;

  }
  {
    VirtualvsNotVirtual::X x;
    VirtualvsNotVirtual::Y y;
    x.foo();
    y.foo();
  }

}
