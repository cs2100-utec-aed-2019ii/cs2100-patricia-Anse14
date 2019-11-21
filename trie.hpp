#ifndef TRIE_H
#define TRIE_H
#include "./node.hpp"

class Trie {
private:
  Node *root;
  Node* search(string word)
  {
    return root->search(word, 0);
  }
public:
  Trie(): root(nullptr) {}
  ~Trie()
  {
    delete root;
  }
  void insert(string val)
  {
    if(!root)
    {
      root = new Node;
    }
    root->insert(0, val);
  }
  bool search_by_prefix(string word)
  {
    if(!root){return false;}
    Node* temp = search(word);
    if(temp)
    {
      if(temp->isNode)
      {
        if(temp->children.empty())
        {
          return false;
        }
        return true;
      }
      return false;
    }
    return false;
  }
  bool search_by_complete_word(string word)
  {
    if(!root){return false;}
    Node* temp = search(word);
    if(temp)
    {
      if(temp->isNode)
      {
        if(temp->children.empty())
        {
          return true;
        }
        return false;
      }
      return false;
    }
    return false;
  }
  void delet(string word)
  {
    if(!root){return;}
    root->delet(word, 0);
  }
  void print()
  {
    if(!root){return;}
    for(int i = 0; true; i++)
    {
      vector<char> elements;
      root->print(elements, 0, i);
      for(auto i : elements)
      {
        cout << i << " ";
      }
      cout << endl;
      if(elements.empty())
      {
        break;
      }
      elements.clear();
    }
  }
  void printwords()
  {
    if(!root){return;}
    vector<char> elements;
    root->printwds(elements);
  }
  pnode patricia()
  {
    pnode value;
    root->patricia(&value);
    return value;
  }
};

#endif
