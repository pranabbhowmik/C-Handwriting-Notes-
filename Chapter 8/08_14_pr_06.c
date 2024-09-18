#include<stdio.h>
void encrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr + 1; 
        ptr++;
    }
}

int main(){
    char c[] = "ha argha vai wait korchi ai taratari mod khabo tarapith jabo ass korbo chill marbo miss you tooo bro";
    encrypt(c);
    printf("Encrypted string is: %s", c);
    return 0;
}