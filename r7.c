#include<stdio.h>
struct book
{
    char title[20];
    char author[20];
    float amount;
};

int main()
{
    int i;
    struct book b[3];
    printf("Book information:\n");
    for(i=0;i<3;i++)
    {
        printf("Enter the book %d information:\n",i+1);
        printf("Enter the title of the book:\n");
        fflush(stdin);
        gets(b[i].title);
        fflush(stdin);


        printf("Enter the Author of the book:\n");
        fflush(stdin);
        gets(b[i].author);
        fflush(stdin);

        printf("Enter the amount of the book:\n");
        scanf("%f",&b[i].amount);


    }
    for(i=0;i<3;i++)
    {
        printf("The book %d information:",i+1);
        printf("The title of the book:\n");
        puts(b[i].title);

        printf("The Author of the book:\n");
        puts(b[i].author);

        printf("The amount of the book:%f\n",b[i].amount);



    }
    float Mamount=b[0].amount;
    int Mindex=0;
    for(int i=1;i<3;i++)
    {
        if(b[i].amount > Mamount)
        {
            Mamount=b[i].amount;
            Mindex=i;
        }
        printf("Informarion of most expensive book:\n");
        printf("The title of the book:\n");
        puts(b[Mindex].title);
        printf("The Author of the book:\n");
        puts(b[Mindex].author);
        printf("The Amount of the book:%f\n",b[Mindex].amount);


    }
    return 0;
}
