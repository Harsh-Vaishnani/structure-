
                                        // R E A D  QUESTION-1

// #include <stdio.h>
// int main(){
//     FILE *h;
//     h=fopen("harsh.txt","r");
//     char data[100];
//     if(h==NULL){
//         printf("FILE DOES NOT EXIST");
//     }
//     else{
//         while(fgets(data,50,h)!=NULL){
//             printf("%s",data);
//             fclose(h);
//         }
//     }
//  return 0;
// }

                                        // W R I T E  QUESTION-1

// #include <stdio.h>
// int main(){
//     FILE *h;
//     h=fopen("harsh.txt","w");
//     char data[100];
//     if(h==NULL){
//         printf("FILE DOES NOT EXIST");
//     }
//     else{
//       fputs("Hello Deepak Sir.",h);
//       fclose(h);
//         }
//         return 0;
//     }

                                        // A P P E N D  QUESTION-1

// #include <stdio.h>
// int main(){
//     FILE *h;
//     h=fopen("harsh.txt","a");
//     char data[100];
//     if(h==NULL){
//         printf("FILE DOES NOT EXIST");
//     }
//     else{
//       fputs("heyy hello\n",h);
//       fclose(h);
//     }
//         return 0;
//     }

                                        // QUESTION-2  STRUCTURE

#include <stdio.h>
#include <string.h>
struct Employee
{
    char name[100];
    int age;
    char gender[20];
    char from[100];
    char to[100];
    int payment;
};
int main()
{
    struct Employee e[10];
    int employeeN;
    printf("Enter Train Number ");
    scanf("%d",&employeeN);
    for(int i=0; i<=employeeN; i++){
        printf("Enter the name ");
        scanf("%s",&e[i].name);

         printf("Enter the age ");
        scanf("%d",&e[i].age);

         printf("Enter the gender ");
        scanf("%s",&e[i].gender);

        printf("Enter the from ");
        scanf("%s",&e[i].from);

         printf("Enter the to ");
        scanf("%s",&e[i].to);

         printf("Enter the payment ");
        scanf("%d",&e[i].payment);
    }
    for(int i=0; i<=employeeN; i++){
        printf("%s\n",e[i].name);
        printf("%d\n",e[i].age);
        printf("%s\n",e[i].gender);
        printf("%s\n",e[i].from);
        printf("%s\n",e[i].to);
        printf("%d\n",e[i].payment);
    }
    return 0;
}