#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    /*
    //35
    int n;
    int estpremier=1;
    printf("saisir un nombre et je dit premier ou non \n");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            estpremier=0;
            break;
        }
    }
    if(estpremier==1)
    {
        printf("le nombre %d est premier ",n);
    }
    else{
        printf("le nombre %d n'est pas premier ",n);
    }*/
    //36
    /*
    printf("X * Y | ");
    for(int i=1;i<=10;i++){
        printf("%d ",i);
    }
    printf("\n--------------------------------\n");
    for(int j=1;j<=10;j++){
        printf("%d |",j);
        for(int h=1;h<=10;h++){
            printf("%d ",j*h);
        }
        printf("\n");
    }*/
    //39
    /*int nbr;
    int tentative=5;
    int notification=0;
    srand(time(NULL));
    int nbr_rand=(rand()%(30-1+1)+1);

    do
    {
        printf("entrer le nombre !! vous aves %d tentative(s) !! \n",tentative);
        scanf("%d",&nbr);
        tentative--;
        if(nbr>nbr_rand){
            printf("plus mois \n");
        }
        else if(nbr<nbr_rand){
            printf("plus grand \n");
        }
        else{
            notification=1;
            break;
        }

    }
    while(tentative>0);

    if(notification==1){
        printf("bravo \n");
    }
    else{
        printf("oups!le nombre est %d \n",nbr_rand);
    }*/
    //39

    float nombre;
    float count=1;
    int nbr_car=0;
    printf("entrer le nombre :\n");
    scanf("%f",&nombre);
    do{
        if(nombre>=0&&nombre<10){
            nbr_car=1;
            break;
        }
        else if(nombre<0){
                nombre=nombre*(-1);
        }
        count*=10;
        nbr_car+=1;
    }while(nombre>count);
    printf("le nombre est %d",nbr_car);

    //38
    /*float a,b,res;
    int run;
    char op;
    do{
        printf("choisi une opertaion :\n");
        scanf("%c",&op);
        printf("donner le premier nombre:\n");
        scanf("%f",&a);
        printf("donner le deuxieme nombre:\n");
        scanf("%f",&b);
        switch(op){
            case'*':
                res=a*b;
                break;
            case'+':
                res=a+b;
                break;
            case'-':
                res=a-b;
                break;
        }
        printf("by le resultat est :%f \n",res);
        printf("quiter le programme 1.Y OU 2.N : \n");
        scanf("%d",&run);
    }while(run!=1);*/

    //40






















    return 0;
}
