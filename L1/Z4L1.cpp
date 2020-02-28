#include <iostream>

struct lnode{
	int key;
	lnode *next;
	lnode(int k, lnode n)
		:key(k), next(n){}
};

int main(){
  	lnode *l = NULL;
	l = new lnode(5, l);
	l = new lnode(8, l);
	return 0;
}
