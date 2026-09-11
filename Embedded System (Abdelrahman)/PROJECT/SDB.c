#include <stdio.h>
#include "SDB.h"

static student DB[10];
static uint8 count = 0;

bool SDB_IsFull(void) {
if (count == 10) {
return true;
}
return false;
}

uint8 SDB_GetUsedSize(void) {
return count;
}

bool SDB_IsIdExist(uint32 id) {
for (int i = 0; i < count; i++) {
if (DB[i].Student_ID == id) {
return true;
}
}
return false;
}

bool SDB_AddEntry(void) {

if (SDB_IsFull()) {
printf("Error: Database is full!\n");
return false;
}

student st;

printf("Enter Student ID: ");
scanf("%u", &st.Student_ID);

if (SDB_IsIdExist(st.Student_ID)) {
printf("Error: ID already exists!\n");
return false;
}

printf("Enter Student Year: ");
scanf("%u", &st.Student_year);

printf("Enter Course 1 ID: ");
scanf("%u", &st.Course1_ID);
printf("Enter Course 1 Grade: ");
scanf("%u", &st.Course1_grade);

printf("Enter Course 2 ID: ");
scanf("%u", &st.Course2_ID);
printf("Enter Course 2 Grade: ");
scanf("%u", &st.Course2_grade);

printf("Enter Course 3 ID: ");
scanf("%u", &st.Course3_ID);
printf("Enter Course 3 Grade: ");
scanf("%u", &st.Course3_grade);

DB[count] = st;
count++;
printf("Student added successfully!\n");
return true;
}

void SDB_DeletEntry(uint32 id) {
if (count <= 3) {
printf("Error: Minimum limit is 3 students.\n");
return;
}
for (int i = 0; i < count; i++) {
if (DB[i].Student_ID == id) {
for (int j = i; j < count - 1; j++) {
DB[j] = DB[j + 1];
}
count--;
printf("Student deleted!\n");
return;
}
}
printf("Error: ID not found.\n");
}

bool SDB_ReadEntry(uint32 id) {
for (int i = 0; i < count; i++) {
if (DB[i].Student_ID == id) {
printf("\nID: %u", DB[i].Student_ID);
printf("\nYear: %u", DB[i].Student_year);
printf("\nCourse 1 ID: %u | Grade: %u", DB[i].Course1_ID, DB[i].Course1_grade);
printf("\nCourse 2 ID: %u | Grade: %u", DB[i].Course2_ID, DB[i].Course2_grade);
printf("\nCourse 3 ID: %u | Grade: %u\n", DB[i].Course3_ID, DB[i].Course3_grade);
return true;
}
}

printf("Error: ID not found.\n");
return false;
}

void SDB_GetList(uint8 * count_ptr, uint32 * list) {
*count_ptr = count;
for (int i = 0; i < count; i++) {
list[i] = DB[i].Student_ID;
}
}