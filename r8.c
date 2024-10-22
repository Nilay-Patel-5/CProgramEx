#include<stdio.h>
struct book
{
    char title[20];
    char author[20];
    float amount;
};
void Bookinfo(struct book);
void main()
{
    struct book b1;
    printf("Enter the title of the book:\n");
    fflush(stdin);
    gets(b1.title);
    fflush(stdin);

    printf("Enter the Author of the book:\n");
    fflush(stdin);
    gets(b1.author);
    fflush(stdin);

    printf("Enter the amount of the book:\n");
    scanf("%f",&b1.amount);
    Bookinfo(b1);


}
void Bookinfo(struct book b)
{
    printf("The title of the book:\n");
    puts(b.title);
    printf("The Author of the book:\n");
    puts(b.author);
    printf("The amount of the book:%f\n",b.amount);
}
