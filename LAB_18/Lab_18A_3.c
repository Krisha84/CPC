#include<stdio.h>
int si(int,int,int);
void main(){
    int p,r,t;

    printf("Enetr value of P,R and T respectively: ");
    scanf("%d %d %d",&p,&r,&t);

    float ans=si(p,r,t);
    printf("value of simple interest: %f",ans);
}

int si(int p,int r,int t){
    float ans;
    ans=(p*r*t)/(float)100;
    return ans;
}

