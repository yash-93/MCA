#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ar, size, pos, ele, c, i=0;
    char ch;
    printf("Enter the size of the array : ");
    scanf("%d", &   size);
    ar = (int*)malloc(size * sizeof(int*));
    printf("MENU\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. View\n");
    printf("4. Exit\n");

    do{
        printf("Enter your choice : ");
        scanf(" %c", &ch);
        switch(ch){
        case '1':
            printf("Enter element to insert : ");
            scanf("%d", &ele);
            ar[i] = ele;
            i += 1;
            break;

        case '2':
            printf("Enter the position of the element to delete : ");
            scanf("%d", &pos);
            if(pos >= (size + 1))
            {
                printf("Deletion not possible!!!");
            }
            else{
                for(c = pos - 1; c < size - 1; c++)
                    ar[c] = ar[c + 1];
            }
            break;

        case '3':
            printf("Resultant array : ");
            for(c = 0; c < size; c++){
                printf("%d", ar[c]);
            }
            break;

        case '4':
            exit(0);

            default: printf("Please enter a valid choice!");
        }
    }while(ch >= '1' && ch <= '4');

    return 0;
}
