
#include<stdio.h>
#include<stdlib.h>
int i;
int main()
{
    int arr[]={1,2,3,4,5};
    int initial_size=5;
    int n;
    printf("array elements are:\n");
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    printf("wanna add more values in array: ");
    scanf("%d",&n);
    int new_size=initial_size+n;
    int *ptr=(int*)malloc(new_size*sizeof(int));
    if(ptr==NULL)
       {
        printf("memory allocation me galti");
        exit(1);}
    //copy initial values of arr to ptr
    for(int i=0;i<initial_size;i++){
            ptr[i]=arr[i];
        }

    for(i=initial_size;i<new_size;i++)
       {printf("enter more values: ");
           scanf("%d",ptr+i);}
    printf("entered numbers are: \n");
    for(int i=0;i<new_size;i++)
        printf(" %d\n",*(ptr+i));
    free(ptr);

    return 0;

}


