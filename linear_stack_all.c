#include <stdio.h>
#include <stdlib.h>

#define max 10
struct stack
{
    int top;
    int size;
    int *arr;
};
void push(struct stack *s,int item);
int pop(struct stack *s);
void traverse(struct stack *s);
int peek(struct stack *s,int a);
int main()
{
    struct stack s;
    s.top = -1;
    s.size = 5;
    s.arr = (int *)malloc(s.size * (sizeof(int)));
    if(!s.arr){
        printf("memory allocation failed\n");
        return 1;
    }
    push(&s,6);
    push(&s,3);
    pop(&s);
    
    traverse(&s);
    int top=0;
    peek(&s,top);
    free(s.arr);
    return 0;
}
void push(struct stack *s, int item)
{
    if (s->top == s->size - 1)
    {
        printf("stack is overflow");
    }
    else
    {

        printf("enter the element is %d\n", item);
        s->top++;
        s->arr[s->top] = item;
    }
}
int pop(struct stack *s)
{
    int a = -1;
    if (s->top == -1)
    {
        printf("stck is underflow\n");
        
    }
    else
    {
        a = s->arr[s->top];
        s->top--;
        printf("pop item is %d\n",a);
        
    }
    return a;
}
void traverse(struct stack *s)
{
    if(s->top==-1)
    {
        printf("underflow");
    }
    else
    {
        for(int i =0;i<=s->top;i++)
        {
            printf("traversed array is %d\n",s->arr[i]);
        }
    }
    
}
int peek(struct stack *s,int a)
{
    
if(s->top==-1)
{
    printf("stack underflow");
}
else
{
    a=s->arr[s->top];
    printf("peek element is %d",a);
}
return a;
}

