#include <stdio.h>

struct book {
    int bookid;
    char bookname[100];
    int bookprice;
};
int main() {
    struct book books[3]; 
    for (int i = 0; i < 3; i++) {
        printf("Enter details of Book %d\n ",i+1);
        scanf("%d", &books[i].bookid);
        scanf(" %[^\n]s", books[i].bookname);  
        scanf("%d", &books[i].bookprice);
    }
    printf("Book Records:\n");
    for (int i = 0; i < 3; i++) {
        printf("Book %d:\n", i + 1);
        printf("ID: %d\n", books[i].bookid);
        printf("Name: %s\n", books[i].bookname);
        printf("Price: %d\n", books[i].bookprice);
        printf("\n");
    }
    return 0;
}
