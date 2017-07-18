#include <stdio.h>
#include <string.h>

int main(void){

    char wordList[6][7]; // Stores a list of 6 words up to 6+1 characters each
    int wordCount = 0;   // How many words is in the list
    int i,j;
    char tempWord[7];

    //Read 4 words
    for (i=0; i<4; i++){
        scanf("%s", wordList[wordCount]);
        wordCount++;
    }

    for (i=4; i>=0; i--){
        printf("%s ", wordList[i]);
    }

    printf("\n%d\n", wordCount);

    // Sort words using standard bubble sort
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
