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
    struct Element *E; // Creating Array for storing non-zero element.
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

struct Sparse_Matrix * Add(struct Sparse_Matrix *A,struct Sparse_Matrix *B){

    struct Sparse_Matrix *Sum;
    Sum = (struct Sparse_Matrix *)malloc(1*sizeof(struct Sparse_Matrix));
    Sum->m= A->m; Sum->n= A->n;
    Sum->num = A->num + B->num;
    Sum->E = (struct Element *)malloc(Sum->num*sizeof(struct Element));
    int i=0,j=0,k=0;

    while (i<A->num && j<B->num)
    {
        if (A->E[i].i < B->E[j].i) //if row of non-zero element of A matrix is smaller then will simply copy it to sum matrix 
        {
            Sum->E[k++] = A->E[i++];
        }
        else if (A->E[i].i > B->E[j].i)////if row of non-zero element of B matrix is smaller then will simply copy it to sum matrix
        {
            Sum->E[k++] = B->E[j++];
        }
        else // if row of non-zero element of A matrix is Equal to B matrix then will check for column.
        {
            if (A->E[i].j< B->E[j].j) //if column of non-zero element of A matrix is smaller then will simply copy it to sum matrix.
            {
                Sum->E[k++]= A->E[i++];
            }
            else if (A->E[i].j> B->E[j].j) //if column of non-zero element of B matrix is smaller then will simply copy it to sum matrix.
            {
                Sum->E[k++]= B->E[j++];
            }
            else //if column of non-zero element of A matrix is Equal to B matrix then we will add them and store it in sum matrix.
            {
                Sum->E[k]= A->E[i++];
                Sum->E[k++].x += B->E[j++].x;
            }
        }
    }
    for (; i < A->num; i++) //if B matrix ended first then rest element of other matrix will copied directly.
    {
        Sum->E[k++]=A->E[i];
    }
    for (; j < B->num; j++)//if A matrix ended first then rest element of other matrix will copied directly.
    {
        Sum->E[k++]=B->E[j];
    }
    
    Sum->num=k;
    return Sum;
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
    struct Sparse_Matrix A;
    struct Sparse_Matrix B;
    struct Sparse_Matrix *Sum;
    Create(&A);
    Create(&B);

    Sum=Add(&A,&B);
    printf("First Matrix\n");
    Display(A);
    printf("Second Matrix\n");
    Display(B);
    printf("Sum Matrix\n");
    Display(*Sum);
}
