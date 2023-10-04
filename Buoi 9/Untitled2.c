
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i,j;
struct Cinema {
    char Name[25];
    char Address[35];
    int Seats;
};

void inputData(struct Cinema* cinemaList) {
    for (i = 0; i < 4; i++) {
        printf("Nhap ten rap chieu phim thu %d: ", i+1);
        fflush(stdin);
        gets(cinemaList[i].Name);

        printf("Nhap dia chi rap: ");
        fflush(stdin);
        gets(cinemaList[i].Address);

        printf("Nhap so luong ghe: ");
        scanf("%d", &cinemaList[i].Seats);
    }
}

void displayData(struct Cinema* cinemaList) {
    printf("Danh sach rap chieu phim tai Ha Noi: \n");
    for (i = 0; i < 4; i++) {
        printf("Ten rap: %s\n", cinemaList[i].Name);
        printf("Dia chi: %s\n", cinemaList[i].Address);
        printf("So ghe: %d\n", cinemaList[i].Seats);
        printf("\n");
    }
}

void sortByAlphabet(struct Cinema* cinemaList) {
    for (i = 0; i < 4; i++) {
        for (j = i+1; j < 4; j++) {
            if (strcmp(cinemaList[i].Name, cinemaList[j].Name) > 0) {
                struct Cinema temp = cinemaList[i];
                cinemaList[i] = cinemaList[j];
                cinemaList[j] = temp;
            }
        }
    }
}

void findCinemaBySeats(struct Cinema* cinemaList) {
    int minSeats;
    printf("Nhap so ghe toi thieu: ");
    scanf("%d", &minSeats);

    int found = 0;
    for (i = 0; i < 4; i++) {
        if (cinemaList[i].Seats >= minSeats) {
            printf("Ten rap: %s\n", cinemaList[i].Name);
            printf("Dia chi: %s\n", cinemaList[i].Address);
            printf("So ghe: %d\n", cinemaList[i].Seats);
            printf("\n");
            found = 1;
        }
    }

    if (!found) {
        printf("Khong co rap nao phu hop\n");
    }
}

void saveDataToFile(struct Cinema* cinemaList) {
    FILE *file = fopen("cinema.dat", "wb");
    if (file == NULL) {
        printf("Khong the mo file\n");
        return;
    }
    fwrite(cinemaList, sizeof(struct Cinema), 4, file);
    fclose(file);
    printf("Luu du lieu thanh cong!\n");
}

void readDataFromFile(struct Cinema* cinemaList) {
    FILE *file = fopen("cinema.dat", "rb");
    if (file == NULL) {
        printf("Khong co du lieu!\n");
        return;
    }
    fread(cinemaList, sizeof(struct Cinema), 4, file);
    fclose(file);
    printf("Doc du lieu thanh cong!\n");
}

int main() {
    struct Cinema cinemaList[4];
    int choice;

    do {
        printf("Menu:\n");
        printf("1. Nhap du lieu quan ly danh sach rap chieu phim\n");
        printf("2. Hien thi danh sach rap ra man hinh\n");
        printf("3. Tim rap theo so ghe toi thieu\n");
        printf("4. Luu du lieu ra tep cinema.dat\n");
        printf("5. Doc du lieu tu tep cinema.dat\n");
        printf("6. Exit\n");
        printf("Nhap chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputData(cinemaList);
                break;
            case 2:
                sortByAlphabet(cinemaList);
                displayData(cinemaList);
                break;
            case 3:
                findCinemaBySeats(cinemaList);
                break;
            case 4:
                saveDataToFile(cinemaList);
                break;
            case 5:
                readDataFromFile(cinemaList);
                break;
            case 6:
                return 0;
        }
    } while (choice != 6);

    return 0;
}
