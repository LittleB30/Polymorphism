#ifndef _RedGrapes_Header_
#define _RedGrapes_Header_
#include <iostream>

class RedGrapes:public Fruit{
  public:
    void descTaste();
    void descColor();
    ~RedGrapes(){
      std::cout << "Deleting red grapes" << '\n';
    }
};

#endif
