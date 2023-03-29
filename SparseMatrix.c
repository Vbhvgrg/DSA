#include<stdio.h>
#include<stdlib.h>


struct Element
{
    int i;
    int j;
    int x;
};

struct Sparse_Matrix
{
    int m,n; // Dimensions of Matrix
    int num; // Total no of Non-Zero Element
    struct Element *E; // Cretaing Array for storing non-zero element.
};

void Create(struct Sparse_Matrix *S){
    printf("Enter the Dimensions\n");
    scanf("%d %d",&S->m,&S->n);
    printf("Enter total no of non-zero Element\n");
    scanf("%d",&S->num);
    S->E=(struct Element *)malloc(S->num*sizeof(struct Element));
    printf("Enter non-zero Element\n");
    for (int i = 0; i < S->num; i++)
    {
        scanf("%d %d %d",&S->E[i].i,&S->E[i].j,&S->E[i].x);
    }
}

void Display(struct Sparse_Matrix S){
    int k=0;
    for (int i = 0; i < S.m; i++)
    {
        for (int j = 0; j < S.n; j++)
        {
            if (i==S.E[k].i && j==S.E[k].j)
            {
                printf("%d",S.E[k++].x);
                printf(" ");
            }
            else{
                printf("0 ");
            }
            
        }
        printf("\n");
    }
    
}

int main(){
    struct Sparse_Matrix S;
    Create(&S);
    Display(S);
}
