#include <stdio.h>

void find_score (){
    char result[80];
    int score, sum =0;
    
    fgets(result, 80, stdin);
    printf("str:%s*",result);
    char* ptr = &result[0];
    while (*ptr!='\n') {
        if (*ptr=='O') {
            score++;
            sum+=score;
        }
        else if (*ptr=='X'){
            score=0;
        }
        else {
            break;
        }
        ptr++;
    }
    printf("%d\n",sum);
    getchar();
}

int main (void) {
    int number;
    scanf("%d\n",&number);
    
    for (int i=0; i<number; i++) {
        find_score ();
    }
    return 0;
}