#include<stdio.h>
int n;
struct noip
{
    char s[20];
    int cj;
}a[25];

int comp(struct noip a,struct noip b)
{
     if(a.cj>b.cj)return 1;
     if(a.cj<b.cj)return 0;        //相等的时候跳过return

     if(a.s<b.s)return 1;
     if(a.s>b.s)return 0;
}

void sort(struct noip * a,struct noip * b)
{
    struct noip tmp;
    for(a++;a<b;a++)
       if(~comp(*a,*(a+1)))
       {
            tmp=*a;
            *a=*(a+1);
            *(a+1)=*tmp;
       }
}

int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
        {
            gets(a[i].s);
            scanf("%d",a[i].cj);
        }

    sort(a+1,a+1+n);

    for(int i=1;i<=n;++i)
   {
       puts(a[i].s);
       printf(" %da[i].cj\n");
   }
    return 0;
}
