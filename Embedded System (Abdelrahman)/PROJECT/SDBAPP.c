#include <stdio.h>
#include "SDB.h"

void SDB_action(uint8 choice) {
    uint32 id;
    uint8 total = 0;
    uint32 id_list[10];

    switch (choice) {
        case 1:
            SDB_AddEntry();
            break;

        case 2:
            printf("Used size: %u\n", SDB_GetUsedSize());
            break;

        case 3:
            printf("Enter ID: ");
            scanf("%u", &id);
            SDB_ReadEntry(id);
            break;

        case 4:
            SDB_GetList(&total, id_list);
            printf("Total: %u\nIDs: ", total);
            for (int i = 0; i < total; i++) {
                printf("%u ", id_list[i]);
            }
            printf("\n");
            break;

        case 5:
            printf("Enter ID: ");
            scanf("%u", &id);
            if (SDB_IsIdExist(id)) {
                printf("ID exists.\n");
            } else {
                printf("ID does NOT exist.\n");
            }
            break;

        case 6:
            printf("Enter ID to delete: ");
            scanf("%u", &id);
            SDB_DeletEntry(id);
            break;

        case 7:
            if (SDB_IsFull()) {
                printf("Database is FULL\n");
            } else {
                printf("Database is NOT FULL\n");
            }
            break;

        case 0:
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }
}

void SDB_APP(void) {
    uint32 choice = 0;

    while (1) {
        printf("\n==================================");
        printf("\n   Student Database System");
        printf("\n==================================");
        printf("\n1. To add entry, enter 1");
        printf("\n2. To get used size in database, enter 2");
        printf("\n3. To read student data, enter 3");
        printf("\n4. To get the list of all student IDs, enter 4");
        printf("\n5. To check is ID is existed, enter 5");
        printf("\n6. To delete student data, enter 6");
        printf("\n7. To check is database is full, enter 7");
        printf("\n0. To exit enter 0");
        printf("\n----------------------------------");
        printf("\nEnter choice: ");

        scanf("%u", &choice);

        if (choice == 0) {
            printf("Goodbye!\n");
            break;
        }

        SDB_action((uint8)choice);
    }
}