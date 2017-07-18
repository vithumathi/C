#include <stdio.h>
#include <string.h>

int main(void){

    char wordList[6][7];
    int wordCount = 0;
    int i,j;
    char tempWord[7];

    for (i=0; i<4; i++){
        scanf("%s", wordList[wordCount]);
        wordCount++;
    }

    for (i=4; i>=0; i--){
        printf("%s ", wordList[i]);
    }

    printf("\n%d\n", wordCount);

    for (i = 1; i < wordCount; i++){
        for (j=0; j < wordCount-1; j++){
            if (strcmp(wordList[j],wordList[j+1])>0){
                strcpy(tempWord, wordList[j]); 
                strcpy(wordList[j], wordList[j+1]); 
                strcpy(wordList[j+1], tempWord);
            }
        }
    }


for (i = 1; i < wordCount; i++) {
   printf("%s ", wordList[i]);
}

}
