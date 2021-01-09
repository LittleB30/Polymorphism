#ifndef _Fruit_Header_
#define _Fruit_Header_
#include <iostream>

class Fruit{
  public:
    virtual void descTaste() = 0;
    virtual void descColor() = 0;
    virtual ~Fruit(){
      std::cout << "Deleting fruit" << "\n\n";
    }
};

#endif
