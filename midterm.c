#include <stdio.h>
#include <string.h>

struct person{
	int ID;
	char first[10];
	char last[10];
	struct person *next;
};

void look_up_name(struct person *ptr, int ID){
	int i = 0;
	while(ptr[i].next != NULL){
		if(ID == ptr[i].ID){
			printf("name : %s %s\n", ptr[i].first, ptr[i].last);
			return;
		} 
		i++;
	}
	
	//For last person
	if(ID == ptr[i].ID){
		printf("name : %s %s\n", ptr[i].first, ptr[i].last);
		return;
	} 

	printf("No such ID in database\n");
}

int main(){

	struct person psn3;
	psn3.ID = 2;
	strcpy(psn3.first, "Risa");
	strcpy(psn3.last, "Green");
	psn3.next = NULL;

	struct person psn2;
	psn2.ID = 1;
	strcpy(psn2.first, "Jack");
	strcpy(psn2.last, "Brown");
	psn2.next = &psn3;

	struct person psn1;
	psn1.ID = 0;
	strcpy(psn1.first, "Mina");
	strcpy(psn1.last, "Fujisawa");
	psn1.next = &psn2;

	struct person member[] = {psn1, psn2, psn3};
	look_up_name(&member[0], 3);
	return 0;
}
