#include<stdio.h>
#include<string.h>
int main()
{
    int num,index,i,n;
    char add[10][30];
     printf("Minions Task Manager 1. Add Task 2. View Tasks 3. Remove Task 4. Exit\n");
     printf("Select an option:");
     scanf("%d",&num);
     while (num!=0)
     {
     fflush(stdin);
     switch(num)
     {
     case 1:
        printf("Enter task description:");
            gets(add[index]);
        index++;
        printf("Task added successfully!\n");
        break;
     case 2:
        printf("Current Tasks:\n");
        for(i=0;i<index;i++)
        {
            printf("Task ID:%d\n",i+1);
            printf("Description:%s\n",add[i]);
        }
        break;
     case 3:
        printf("Enter task ID to remove:");
        scanf("%d",&n);
        if(n<index)
        {
           for(n;n<index;n++){
           strcpy(add[n-1],add[n]);
           }
           index--;
        }
        printf("Task removed successfully!\n");
        break;
     case 4:
        printf("Exiting Minions Task Manager. Have a great day!");
        break;
     default:
        printf("Invalid number enter from 1:4!\n");
     }
     if (num==4)
     {break;}
     printf("Select an option:");
     scanf("%d",&num);
     }
     return 0;
}
