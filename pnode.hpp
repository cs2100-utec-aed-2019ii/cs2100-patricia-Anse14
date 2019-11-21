#ifndef PNODE
#define PNODE
#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct pnode
{
  string value;
  bool isactive;
  map<string, pnode*> children;
};

#endif
