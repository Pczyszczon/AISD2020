#include <iostream>

struct lnode{
    int key;
    lnode *next;
};

// shit ain't workin 

// 1)
int nty(int n, lnode *key){
    int counter = -1;

    lnode *temp = key;
    while(true){
        counter++;
        if (counter == n)
            return temp->key;
        if(temp->next == NULL)
            return 0;
        temp = temp->next;
    }
    return -1;
}

int main(){
    lnode head;
    head.key = 1;
    lnode l1, l2, l3;
    l1.key = 4;
    l2.key = 8;
    l3.key = 9;

    head.next = &l1;
    l1.next = &l2;
    l2.next = &l3;


    std::cout << nty(6, &head) << std::endl;
    
    return 0;
}