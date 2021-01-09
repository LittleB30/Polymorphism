#ifndef _OrganicGalaApples_Header_
#define _OrganicGalaApples_Header_
#include <iostream>

class OrganicGalaApples:public GalaApples{
  public:
    void descTaste();
    void descColor();
    OrganicGalaApples():GalaApples(){}
    ~OrganicGalaApples(){
      std::cout << "Deleting organic Gala apple" << '\n';
    }
};

#endif
