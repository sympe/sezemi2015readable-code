#include<stdio.h>

#define MAX_STRING 128		//最大文字数は128文字とする

void printRecipe(char *);	//レシピを表示するための関数


int main(void){
	FILE *file;
	char recipe[MAX_STRING];

	/*file open*/
	file = fopen("recipe.txt", "r");
	if (file == NULL){
		perror("file open error");
	}

	/*fgets*/
	if (fgets(recipe, MAX_STRING, file) < 0){
		perror("file write error");
	}

	/*printRecipe*/
	printRecipe(recipe);
	return 0;
}

void printRecipe(recipe)
{
	printf("%s\n",recipe);
	return;
}