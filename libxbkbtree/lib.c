#include <strings.h>
#include <string.h>
#include <stdio.h>
#include <iostream> 
#include <string>

#include "xbkbtree.cpp"


int main()
{

EDEBUG

libxbkbtree<string> x;
x.add("test","Inhalt");
x.add("krass","jo");
x.add("lustig","genau!");
x.add("aaa","links babe");
x.add("Hanso","jo");
x.add("Wahnsinn","irre");
x.add("puh","genau");
x.add("zzz","rechts babe");
x.add("bbb","jogo");
x.add("ddd","jkljkl");
x.add("aga","jk");


//Inorder-Traversierung zur Bestimmung von horizontalen, rechten Partnern

x.traverse_inorder_nb(x.root);


string y;
try
{
y= x.find("krass");
y= x.find("puh");
y= x.find("zzz");
y=x.find("bbb");
}
catch ( libxbkbtree_error_notfound x)
{
puts("Element nicht gefunden");
}

x.deltree(NULL,"test");
//aga suchen
try
{
y = x.find("test");
}
catch (libxbkbtree_error_notfound x)
{
puts("\nnicht gefunden");
}
};
