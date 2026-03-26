#include <stdio.h>
#define MAX 100
void addValue(int a[], int *n){
    if(*n >= MAX){
        printf("Array is full!\n");
        return;
    }
    int x;
    printf("Enter value: ");
    scanf("%d",&x);
    a[*n] = x;
    (*n)++;
}
int searchValue(int a[], int n, int x){
    for(int i=0;i<n;i++){
        if(a[i]==x)
            return i;
    }
    return -1;
}
void removeFirst(int a[], int *n, int x){
    int pos = searchValue(a,*n,x);
    if(pos==-1){
        printf("Value not found\n");
        return;
    }
    for(int i=pos;i<*n-1;i++){
        a[i]=a[i+1];
    }
    (*n)--;
}
void removeAll(int a[], int *n, int x){
    for(int i=0;i<*n;i++){
        if(a[i]==x){
            for(int j=i;j<*n-1;j++){
                a[j]=a[j+1];
            }
            (*n)--;
            i--;
        }
    }
}
void printArray(int a[], int n){
    if(n==0){
        printf("Array is empty\n");
        return;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void printAscending(int a[], int n){
    int b[MAX];
    for(int i=0;i<n;i++) b[i]=a[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(b[i]>b[j]){
                int t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++) printf("%d ",b[i]);
    printf("\n");
}
void printDescending(int a[], int n){
    int b[MAX];
    for(int i=0;i<n;i++) b[i]=a[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(b[i]<b[j]){
                int t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++) printf("%d ",b[i]);
    printf("\n");
}
int main(){
    int a[MAX];
    int n=0;
    int choice,x;
    do{
        printf("\n----- MENU -----\n");
        printf("1. Add a value\n");
        printf("2. Search a value\n");
        printf("3. Remove first occurrence\n");
        printf("4. Remove all occurrences\n");
        printf("5. Print array\n");
        printf("6. Print ascending order\n");
        printf("7. Print descending order\n");
        printf("Others. Quit\n");
        printf("Choose: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                addValue(a,&n);
                break;
            case 2:
                printf("Enter value to search: ");
                scanf("%d",&x);
                int pos;
                pos = searchValue(a,n,x);
                if(pos==-1)
                    printf("Not found\n");
                else
                    printf("Found at position %d\n",pos);
                break;
            case 3:
                printf("Enter value to remove: ");
                scanf("%d",&x);
                removeFirst(a,&n,x);
                break;
            case 4:
                printf("Enter value to remove: ");
                scanf("%d",&x);
                removeAll(a,&n,x);
                break;
            case 5:
                printArray(a,n);
                break;
            case 6:
                printAscending(a,n);
                break;
            case 7:
                printDescending(a,n);
                break;
        }
    }while(choice>=1 && choice<=7);
    return 0;
}