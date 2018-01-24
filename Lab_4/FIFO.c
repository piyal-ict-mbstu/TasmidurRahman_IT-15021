#include<stdio.h>
int main()
{
    int i,j,n,no,k,avail=0,count=0,value[50],frame[10];
    printf("\n Enter the number of pages  ");
    scanf("%d",&n);
    printf("\n Enter the pages :\n");
    for(i=1; i<=n; i++)
        scanf("%d",&value[i]);
    printf("\n Enter the number of frame : ");
    scanf("%d",&no);
    for(i=0; i<no; i++)
        frame[i]= -1;
    j=0;
    printf(" \n\nReferencr string       page frames\n\n");
    for(i=1; i<=n; i++)
    {
        printf(" %d   ",value[i]);
        avail=0;
        for(k=0; k<no; k++)
            if(frame[k]==value[i])
                avail=1;
        if (avail==0)
        {
            frame[j]=value[i];
            j=(j+1)%no;
            count++;
            for(k=0; k<no; k++)
                printf("        %d ",frame[k]);
        }
        printf("\n");
    }
    printf("\n\nPage Fault Is %d\n",count);
    char exit;
    printf("\npress e for exit......  ");
    scanf("%c",&exit);
    if(exit=='e')
    {
        printf(".......Exit.....");
    }
    return 0;
}
