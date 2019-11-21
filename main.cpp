#include "./trie.hpp"
#include <fstream>
int main()
{
  Trie a;
  //ifstream val("ApellidosDeLaLibertad.txt");
  //string value;
  //while(val >> value)
  //{
  //  a.insert(value);
  //}
  //a.printwords();
  //val.close();
  a.insert("OWO");
  a.insert("OWE");
  a.insert("OWUWO");
  a.insert("UWUWO");
  a.insert("UWU");
  a.insert("UWUE");
  pnode pat = a.patricia();
  for(auto it = pat.children.begin(); it != pat.children.end(); it++)
  {
    cout << it->first << endl;
  }
  cout << "----" << endl;
  for(auto it = pat.children.begin(); it != pat.children.end(); it++)
  {
    for(auto itr = it->second->children.begin(); itr != it->second->children.end(); itr++)
    {
      cout << itr->first << endl;
    }
    cout << endl;
  }
  return 0;
}
