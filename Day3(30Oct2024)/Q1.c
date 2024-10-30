#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student{
	char *name;
	int rollno;
	float marks;
};

int main(){
	struct student s2;
	struct student *p = &s2;
	
	
	p->name= (char*) malloc(30* sizeof(char));
	
	if(p->name == NULL){
		printf("Memory not avalable \n");
		exit(1);
	}
	
	printf("Enter the name of the student:\n");
	fgets(p->name,30,stdin);
	printf("roll number and marks of student \n");
	scanf("%d",&p->rollno);
	scanf("%f",&p->marks);
	
	

	
	printf("student details\n");
	printf("name:%s\n",p->name);
	printf("roll no:%d\n",p->rollno);
	printf("marks:%f\n",p->marks);
	
	
	return 0;
}