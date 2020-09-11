#include <stdio.h>
#include <string.h>
int main() {
    char   s[1000];
    while(scanf("%s",s) != EOF) {
        int l=0,i=0,j=0;
        for(i=0;i<strlen(s);i++){
            for(j=i+1;j<strlen(s);j++){
              if(s[j]==s[i]) {
                  int temp = 0;
                  for(temp = j;temp<strlen(s);temp++)
                  s[temp] = s[temp+1];
                  j--;
              }
            }
        }
        printf("%s",s);
        printf("\n");
    }
    return 0;
}
