#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    double marks;
};

void show(struct student s2){
    printf("%d %s %lf",s2.rollno,s2.name,s2.marks);
}

int main(){
struct student s1 = {23,"Rahul",345};
show(s1);
    return 0;
}