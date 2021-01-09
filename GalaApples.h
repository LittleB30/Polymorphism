#ifndef _GalaApples_Header_
#define _GalaApples_Header_
#include <iostream>

class GalaApples:public Fruit{
  public:
    void descTaste();
    void descColor();
    ~GalaApples(){
      std::cout << "Deleting Gala apple" << '\n';
    }
};

#endif
