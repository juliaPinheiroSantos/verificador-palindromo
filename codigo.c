#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[100], strContrario[100], cont = 0;
	int size, result;
	fgets(str, 100, stdin);
	size = strlen(str);
	
	for(int i = 0; i <= size; i++){
		if (cont == size-1){
			break;
			}
		strContrario[size-i-2] = str[i];	
	}
	
	for (int i = 0; i <= size-1; i++){
		if (strContrario[i] == str[i]){
				result ++;
	}
}
	
	printf("Palavra: %s\n", str);
	printf("%d\n", size);
	printf("Palavra Contrário: %s\n", strContrario);
	printf("%d\n", strlen(strContrario));
	
	
	if (result == size-1){
		printf("%s é um palíndromo\n", str);
	}
	else {
		printf("%s não é um palíndromo\n", str);
	}
	
	return 0;
}
