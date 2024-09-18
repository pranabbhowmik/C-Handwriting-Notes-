#include<stdio.h>
void decrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr - 1; 
        ptr++;
    }
}

int main(){
    char c[] = " ib!bshib!wbj!xbju!lpsdij!bj!ubsbubsj!npe!libcp!ubsbqjui!kbcp!btt!lpscp!dijmm!nbscp!njtt!zpv!uppp!csp";
    decrypt(c);
    printf("Decrypted string is: %s", c);
    return 0;
}