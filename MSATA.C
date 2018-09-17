#include<stdio.h>
#include<conio.h>
#include<string.h>

int count=0;
int b=0;

struct mgmt{
	char name[50];
	int age;
	char branch[5];
	int year;
	int sem;
	float psems;
}std[50];

void adddata(){
	char ch;
	int i=0;
	clrscr();

	do{
		printf("\n\n\t enter student's data-  ");
		printf("\n\t enter name-  ");
		scanf("%s",std[i].name);
		printf("\n\t enter age-  ");
		scanf("%d",&std[i].age);
		printf("\n\t enter branch-  ");
		scanf("%s",std[i].branch);
		printf("\n\t enter year-  ");
		scanf("%d",&std[i].year);
		printf("\n\t enter semester-  ");
		scanf("%d",&std[i].sem);
		printf("\n\t enter previous semester result-  ");
		scanf("%f",&std[i].psems);
		printf("\n\n\n want to enter more?(y/n):");
		scanf("%c",ch);
		i++;
		count++;
	}while(ch=='y'||ch=='Y');
	b=count;
}

void dispdata(){
	char ch;
	int i=0;
	printf("\n\t want to display all data or just names? ");
	printf("\n\t enter 'y' for all data- ");
	printf("\n\t enter 'n' for just names- ");
	scanf("%c",&ch);
	if(ch=='y'||ch=='Y'){
		while(count!=0){
		printf("\n\t name- %s",std[i].name);
		printf("\n\t age- %d",std[i].age);
		printf("\n\t branch- %s",std[i].branch);
		printf("\n\t enter year- %d",std[i].year);
		printf("\n\t enter semester- %d",std[i].sem);
		printf("\n\t previous semester result- %f",std[i].psems);
		i++;
		count--;
		}
	}
	else if(ch=='n'||ch=='N'){
		while(count!=0){
			printf("\n\t %s",std[i].name);
			i++;
			count--;
		}
	}
	else{
		printf("\n\t INVALID INPUT!!");

	    }
}

void filterdata(){
	float cpers;
	int i=0;
	clrscr();
	printf("\n\n\t enter the previous semester percentage to be filted- ");
	scanf("%f",&cpers);
	while(b!=0){
		if(std[i].psems>=cpers){
			printf("\n\t %s",std[i].name);
			i++;
			b--;
		}
	}
}

int main(){

	int user_opt;
	clrscr();
	printf("\n\n\n\n\t\t\t Management System Application ");
	printf("\n\n\t 1. Add Student's data ");
	printf("\n\n\t 2. Dispay Student's data ");
	printf("\n\n\t 3. Perform analysis as per previous semester score");
	printf("\n\t enter the operation to be performed-  ");
	scanf("%d",&user_opt);

	switch(user_opt){
		case 1: adddata();
			break;
		case 2: dispdata();
			break;
		case 3: filterdata();
			break;
		deafult:printf("\n\t INVALID INPUT!!");
	}
	getch();
	return 0;
}