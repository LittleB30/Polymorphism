#include "Fruit.h"
#include "GalaApples.h"
#include "OrganicGalaApples.h"
#include "RedGrapes.h"

int main(){
  Fruit* f = new GalaApples();
  f->descTaste();
  f->descColor();
  delete f;

  f = new OrganicGalaApples();
  f->descTaste();
  f->descColor();
  delete f;

  f = new RedGrapes();
  f->descTaste();
  f->descColor();
  delete f;
}
