#include <iostream>
#include <cstdlib>
#include <string>

namespace
{
  template <typename Type>
    class MyClassBase
    {
      public:
        typedef Type value_type;

        MyClassBase(const Type& value) : m_value(value) {}
        const Type& value() const { return m_value; }

      private:
        Type m_value;
    };
}

namespace alpha
{
  class MyClass : public MyClassBase<std::string>
  {
    public:
      MyClass(const MyClass::value_type& value) : MyClassBase<std::string>(value) {};
  };

  void print(MyClass& mc) {
    std::cout << mc.value() << std::endl;
  }
}

namespace beta
{
  class MyClass : public MyClassBase<double>
  {
    public:
      MyClass(const MyClass::value_type& value) : MyClassBase<double>(value) {};
  };

  void print(MyClass& mc) {
    std::cout << mc.value() << std::endl;
  }
}

namespace gamma
{
  template <typename T>
    void print(const T&)
    {
      std::cout << "IOS is for dummies." << std::endl;
    }

  void run()
  {
    alpha::MyClass mc1("coucou");
    beta::MyClass mc2(3.14f);

    print(mc1);
    print(mc2);
  }
}

int main()
{
  gamma::run();

  return EXIT_SUCCESS;
}
