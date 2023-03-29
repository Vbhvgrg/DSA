#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Terms
{
    int coff;
    int exp;
};

struct Polynomial
{
    int n;
    struct Terms *T;
};

void Create(struct Polynomial *P){
    printf("No. of Terms in Polynomial ");
    scanf("%d",&P->n);
    P->T = (struct Terms *)malloc(P->n*sizeof(struct Terms));
    
    for (int i = 0; i < P->n; i++)
    {
       printf("Enter the cofficient and Exponent of %d Term ",i+1);
       scanf("%d %d",&P->T[i].coff,&P->T[i].exp);
    }
    
}
void Display(struct Polynomial P){
    printf("Polynomial Expression is:- \n");
    for (int i = 0; i < P.n; i++)
    {
        printf("%dx%d+",P.T[i].coff,P.T[i].exp);
        
    }
    printf("\n");
}
void Evalute(struct Polynomial P){
    int x,Sum = 0;
    printf("Enter the Value of x ");
    scanf("%d",&x);

    for (int i = 0; i < P.n; i++)
    {
        Sum+= P.T[i].coff*pow(x,P.T[i].exp);
    }
    printf("%d",Sum);
    
}

void Add(struct Polynomial *A,struct Polynomial *B){
    struct Polynomial *Sum;
    Sum =(struct Polynomial*)malloc(1*sizeof(struct Polynomial));
    Sum->n=A->n+B->n;
    Sum->T = (struct Terms *)malloc((Sum->n)*sizeof(struct Terms));
    int i,j,k;
    i=j=k=0;
    while (i<A->n && j<B->n)
    {
       if (A->T[i].exp<B->T[j].exp)
       {
           Sum->T[k++]=B->T[j++];
       }
       else if (A->T[i].exp>B->T[j].exp)
       {
           Sum->T[k++]=A->T[i++];
       } 
       else
       {
           Sum->T[k]=A->T[i++];
           Sum->T[k++].coff+=B->T[j++].coff;
       } 
    }
    for (; i < A->n; i++)
    {
        Sum->T[k++]=A->T[i++];
    }
    for (; j < B->n; j++)
    {
        Sum->T[k++]=B->T[j++];
    }
    Display(*Sum);
}

int main(){
    struct Polynomial P;
    struct Polynomial Q;
    Create(&P);
    Create(&Q);
    Display(P);
    Display(Q);
    //Evalute(P);
    Add(&P,&Q);
}
