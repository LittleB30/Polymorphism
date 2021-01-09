#include <iostream>
#include "Fruit.h"
#include "GalaApples.h"
#include "OrganicGalaApples.h"
#include "RedGrapes.h"
using std::cout;

void GalaApples::descTaste(){
  cout << "Gala apples taste sweet and are crisp" << '\n';
}

void GalaApples::descColor(){
  cout << "Gala apples are reddish yellow" << '\n';
}

void OrganicGalaApples::descTaste(){
  cout << "Organic Gala apples are sweet" << '\n';
}

void OrganicGalaApples::descColor(){
  cout << "Organic Gala apples are reddish brown" << '\n';
}

void RedGrapes::descTaste(){
  cout << "Red grapes taste sweet and sour" << '\n';
}

void RedGrapes::descColor(){
  cout << "Red grapes are red" << '\n';
}
