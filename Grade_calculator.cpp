#include<stdio.h>
int main()
{
	char name[30];
	int digit = 1, math, english, science, arts;
	float average;
	printf("Welcome to the Grade Calculator\n");
	
	while(digit <= 3){
		printf("\nEnter Students name: ", name, name);
		scanf("%s %s", name, name);
		printf("Enter Score for Maths(over 100): ", math);
		scanf("%d", &math);
		printf("Enter Score for English(over 100): ", english);
		scanf("%d", &english);
		printf("Enter Score for Science(over 100): ", science);
		scanf("%d", &science);
		printf("Enter Score for English(over 100): ", arts);
		scanf("%d", &arts);
		
		average = (english + math + science + arts) / 4;
	    printf("\nAverage score: %.2f\n", average);
	
		
		if(average <= 100 && average >= 70){
			printf("Students name: %s\n", name);
			printf("GRADE: A\n");
			printf("Excellent!\n");
		}else if(average <= 69 && average >= 60){
			printf("Students name: %s\n", name);
			printf("GRADE: B\n");
			printf("GREAT WORK!\n");
		}else if(average <= 59 && average >= 50){
			printf("Students name: %s\n", name);
			printf("GRADE: C\n");
			printf("NICE EFFORT!\n");
	    }else if(average <= 49 && average>= 45){
	    	printf("Students name: %s\n", name);
			printf("GRADE: D\n");
			printf("YOU CAN DO BETTER!\n");
		}else if(average <= 44 >= 0){
			printf("Students name: %s\n", name);
			printf("GRADE: F\n");
			printf("FAIL\n");	
		}else printf("ERROR");
		++digit;
	}
	return 0; 
}
