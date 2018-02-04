/**
 *@brief スタックにデータを積む関数pushとデータを取り出す関数popを作る。
 *
 *
 *@version 1.0.0
 *
 */


#include <stdio.h>

#define MAXSIZE 100  /* スタックサイズ */

int stack[MAXSIZE];  /* スタック */
int stack_p = 0;     /* スタックポインタ */


//int push(int n);
//int pop(int *n);


void main(void)
{

    int c;
    int n;

    while (printf("]"),(c == getchar()) != EOF){
        rewind(stdin);
        if (c == 'i' || c == 'I'){
            printf("data--> ");
            scanf("%d", &n);rewind(stdin);
            if (push(n) == -1){
                printf("スタックが一杯です。\n");
             }
        }

        if (c == 'o' || c == 'O'){
            if (pop(&n) == -1)
                printf("スタックは空です。\n");
            else
                printf("stack data --> %d\n", n);              
        }
    }

//    return 0;
}


int push(int n)
{
    if (stack_p < MAXSIZE){
        stack[stack_p] = n;
        stack_p++;
        return (0);
    }
    else
        return (-1);
}

int pop(int *n)
{

    if (stack_p > 0){
        stack_p--;
        *n = stack[stack_p];
        return (0);
    }
    else
        return (-1);
}
