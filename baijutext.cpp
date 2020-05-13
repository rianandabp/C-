#include<stdio.h>
#include<string.h>
 
static char input[100000];
struct stack{
    char c;
    struct stack* next;
};
 
typedef struct stack stack;
 
 
stack* insertNode(stack* n, char c){
 
    stack* temp = new stack();
    temp->c = c;
    temp->next = n->next;
    n->next = temp;
 
    return temp;
}
 
 
void printList( stack* ini ){
 
    stack* tmp = ini;
 
    while( tmp = tmp->next )
        putchar( tmp->c );
 
    printf("\n");
}
 
 
int main(){
 
 
    while( gets(input) ){
 
        stack* ini = new stack();
        ini->next = NULL;
        stack* cur = ini;
 
 
        stack* tail = ini;
 
        bool right = false;
 
        for(int i = 0; input[i]; ++i){
 
            if( input[i] == '[' ){
                cur = ini;
                right = true;
                continue;
            }
            if( input[i] == ']' ){
                right = false;
 
                stack *tmp = tail;
 
                while( tmp->next != NULL )
                    tmp = tmp->next;
 
                tail = cur = tmp;
                continue;
            }
 
            cur = insertNode(cur, input[i] );
            if( !right )
                tail = cur;
        }
 
        printList( ini );
 
    }
 
 
    return 0;
}
