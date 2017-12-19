#include <stdio.h>
#include <string.h>


typedef struct{
    char grade[80];
    char name[80];
    int num[20];
    int mat[20];
    int eng[20];
    int avg[20];
    int sum[20];
}info;

info ary[20];

void sort();
void temp(int *pa, int *pb);
void list();

int main()
{
    FILE *fp = fopen("student.txt", "r");
    int res;
    
    for(int i = 0; i < 20; i++)
    { 
        printf("input name: ");
            fgets(ary[i].name[i], 80, stdin);
        printf("input grade: ");
            fgets(ary[i].grade[i], 80, stdin);
        printf("input: ");
            scanf("%d", &ary[i].num[i]);
        printf("input mat: ");
            scanf("%d", &ary[i].mat[i]);
        printf("input eng: ");
            scanf("%d", &ary[i].eng[i]);
             //if(res = EOF)
                //break;
    }
   fclose(fp); 
    return 0;
}
void sort()
{
    int i = 0;

    for(i = 0; i < 20; i++)
    {
        if(ary[i].avg[i] > ary[i+1].avg[i+1])
        {
            temp(&ary[i].avg[i],&ary[i+1].avg[i+1]);
        }
        printf("result: %d %d \n", ary[i].avg[i], ary[i+1].avg[i+1]);
    }
}
void temp(int *pa, int *pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}
void list()
{
    int i = 0;
    int sum = 0;
    
    for(i = 0; i < 20; i++) 
    {
        ary[i].sum[i] = ary[i].num[i] + ary[i].mat[i] + ary[i].eng[i];
        ary[i].avg[i] = sum / 3;

        printf("result: %d \n", ary[i].sum[i]);
        printf("result: %d \n", ary[i].avg[i]);
    }
}


    
