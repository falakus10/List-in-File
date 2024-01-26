#include <stdio.h>
#include <stdlib.h>

typedef struct infos {
    char ad[10];
    int no, Not;
} inf;

int main() {
    FILE *dg;
    const int n = 10;
    int i = 0, t;
    inf student[9];

    dg = fopen("ogrenci.txt", "w");

    if (dg == NULL)
        puts("Could not open ogrenci.txt file. !\n"), exit(1);
    puts("Enter information for 10 students:");
    while (i++ < n) {
        printf("%d. student's number: ", i);
        scanf("%d", &student[t].no);
        printf("%d. student's name: ", i);
        scanf("%s", &student[t].ad);
        printf("%d. student's grade: ", i);
        scanf("%d", &student[t].Not);
        printf("\n");

        fprintf(dg, "%5d %10s %3d\n", student[i].no, student[i].ad, student[i].Not);
    }
    fclose(dg);

    puts("Information has been saved.\a");
    return 0;
}
