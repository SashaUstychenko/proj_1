#include <iostream>
#include <iterator>

//CHapter 38
namespace VirtualMemberFunctions
{
	class Base 
	{
		public: 
      Base()
      {
        std::cout<<"constructor base\n";
      }
			virtual void foo()
			{
        std::cout<<"Base::foo\n";				
			}
      virtual ~Base()
      {
        std::cout<<"destructor base\n";
      }
	};
	class Derived : public Base 
	{
    public:
      Derived()
      {
        std::cout<<"constructor derived\n";
      }
      void foo() override 
      {
        std::cout<<"Derived::foo\n";
      }    
      virtual ~Derived()
      {
        std::cout<<"destructor derived\n";
      }
	};
  class Derived2 :public Derived
  {
    public:
      Derived2()
      {
        std::cout<<"constructor Derive2\n";
      }
      void foo() override
      {
        std::cout<<"Derive2::foo\n";
      }
        virtual ~Derived2()
        {
          std::cout<<"destructor Derive2\n";
        }    
  };

	
}

namespace VirtualvsNotVirtual
{
  struct X 
  {
    virtual void foo() 
    {
      std::cout<<"X::f()\n";
    }
  };

  struct Y : X
  {
    virtual void foo()
    {
      std::cout<<"Y::f()\n";
    }
  };

  void call(X& x)
  {
    x.foo();
  }

}












