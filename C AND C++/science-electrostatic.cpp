#include<stdio.h>
#include<math.h>

//science electrostatic
float charge(float n);
float force(float q1,float q2,float r);
float fbyef(float q,float ef);
float ef(float q,float r);
float efbyf(float q,float f);
int main() {
    while (1) {
        printf("1 for charge\n ");
        printf("2 for force\n");
        printf("3 for force by electric field\n");
        printf("4 for electric field\n");
        printf("5 for electric field by force\n");
        int I,j,k,h;
        float r;
        printf("enter your choice:");
        scanf("%d",&I);
        switch (I)
        {
        case 1:
            printf("\nenter no of electrone");
            scanf("%d",&j);
            r=charge(j);
            printf("\ncharge is %.2f",r);
            break;
        case 2:
            printf("\nenter charge of electrone1");
            scanf("%d",&j);
            printf("\nenter charge of electrone2");
            scanf("%d",&k);
            printf("\nenter distance  between ectrone");
            scanf("%d",&h);
            r=force(j,k,h);
            printf("\nforce is %.2f",r);
            break;
        case 3:
            printf("enter charge of electrone");
            scanf("%d",&j);
            printf("enter electric field");
            scanf("%d",&h);
            r=fbyef(j,h);
            printf("force due to ef is %.2f",r);
            break;
        case 4:
            printf("enter charge of electrone1");
            scanf("%d",&j);
            printf("enter distance  between electron");
            scanf("%d",&h);
            r=ef(j,h);
            printf("electric field is %.2f",r);
            break;
        case 5:
            printf("enter charge of electron");
            scanf("%d",&j);
            printf("enter force");
            scanf("%d",&h);
            r=fbyef(j,h);
            printf("electric field due to force %.2f",r);

            break;
         
         default:
                printf("\nTRY AGAIN ");
        }
        printf("if you want to break press 0");
        scanf("%d",&k);
        if(k==0)
            break;
    }
    return 0;
}



long double charge(long double n)
{
    long double e=1.6*(pow(10,19)),q;
    q=n*e;
    return q;
};

float force(float q1,float q2, float r)
{
    float k=9*(pow(10,9)),f;
    f=(k*q1*q2)/(r*r);
      return f;
};
float fbyef(float q,float ef) {
    float f;
    f= q*ef;
    return f;
};


float efbyf(float q,float f) {
    float ef;
    ef= f/q;
    return ef;

};


float ef(float q,float r){
    float k =9 *(pow(10,9)),ef;
    ef= (k*q)/r;
    return ef;
};
