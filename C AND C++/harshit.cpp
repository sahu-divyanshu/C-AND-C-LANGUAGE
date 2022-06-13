#include<stdio.h>
#include<string.h>

struct student
{
    int no;
    char name[100];
    float marks;
    int mobileno;
} st[100];

int main()
{
    int n,I,i,j,k;

    printf("number of student\n");
    scanf("%d",&n);
    printf("enter the student details......\n");
    for(I=0; I<n; I++) {
        st[I].no=I+1;
        printf("\n%d Enter name",I);
        fflush(stdin);
        gets(st[I].name);
        printf("\nenter marks of %s",st[I].name);
        scanf("%f",&st[I].marks);
        printf("\n enter mobile number of %s",st[I].name);
        scanf("%d",&st[I].mobileno);
    }
    int c;
	 char cr[30];

    for(i=0; i<n-1; i++)
    {
        for(k=0; k<n-i-1; k++) {
            strupr(st[k].name);
            strupr(st[k+1].name);
            c=strcmp(st[k].name,st[k+1].name);
            if( c<0) {
                strcpy(cr,st[k].name);
                strcpy(st[k].name,st[k+1].name);
                strcpy(st[k+1].name,cr);
            }
        }

    }

    printf("if you want to perform some action press 1 other wise press 0 ");
    scanf("%d",&i);
    while(true){
	
        printf("please note that students are arrange by there asscending by there name");
        printf("\n Manue");
        printf("\n 1 for seaching student by rollno");
        printf("\n 2 for adding new detail of new student");
        printf("\n 3 for update perticular detail student by rollno");
        printf("\n 4 for show perticular students detail by rollno" );
        printf("\n 5 for seeing all the details of all students");
        printf("\n enter your choise");
        scanf("%d",&j);
        switch(j)
        {
        case 1:
            printf("\n enter rollno");
            scanf("%d",&j);
            if(j<n)
            {
                printf("rollno\tname\tmarks\tmobileno\n");
                printf("%d\t%s\t%f\t%d",st[j].no,st[j].name,st[j].marks,st[j].mobileno);
            }
            else
                printf("rollno dose not exist");
            break;
        case 2:
            st[I].no=n+1;
            n++;
            printf("\n%d Enter name",n);
            fflush(stdin);
            gets(st[n].name);
            printf("\nenter marks of %s",st[n].name);
            scanf("%f",&st[n].marks);
            printf("\n enter mobile number of %s",st[n].name);
            scanf("%d",&st[n].mobileno);
        for(i=0; i<n-1; i++)
    {
        for(k=0; k<n-i-1; k++) {
            strupr(st[k].name);
            strupr(st[k+1].name);
            c=strcmp(st[k].name,st[k+1].name);
            if( c<0) {
                strcpy(cr,st[k].name);
                strcpy(st[k].name,st[k+1].name);
                strcpy(st[k+1].name,cr);
            }
        }

    }
            break;
        case 3:
            printf("enter roll for which student detail you want to update");
            scanf("%d",&j);
            if(j<n) {
                printf("press 1 for update name");
                scanf("%d",&k);
                if(k==1)
                {
                    printf("\nnew name=");
                    fflush(stdin);
                    gets(st[j].name);
                    k=0;
                }
                printf("press 1 for update marks");
                scanf("%d",&k);
                if(k==1)
                {
                    printf("\n updated marks=");
                    scanf("%f",&st[j].marks);
                    k=0;
                }
                printf("press 1 for update mobileno");
                if(k==1)
                {
                    printf("\n updated mobile no=");
                    scanf("%d",&st[j].mobileno);
                    k=0;
                }
            }
            break;
        case 4:
            printf("enter student rollno= ");
            scanf("%d",&j);
            printf("name = %s",st[j].name);
            printf("\n marks=> %f",st[j].marks);
            printf("\n mobile no=>%d",st[j].mobileno);

        case 5:
            printf("rollno\tname\tmarks\tmobileno");
            for(I=0; I<n; I++)
                printf("%d\t%s\t%f\t%d",st[j].no,st[j].name,st[j].marks,st[j].mobileno);
            break;

        default:
            printf("invalid choise");

        }
        printf("if you want to continue press 1 other wise press 0");
        scanf("%d",&j);
    }
    return 0;
}




