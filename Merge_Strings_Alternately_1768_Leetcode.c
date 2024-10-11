#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* mergeAlternately(char* word1, char* word2) {
    int l1 = strlen(word1);
    int l2 = strlen(word2);
    int l = l1+l2;
    char* merged = (char*) malloc((l+1)*sizeof(char));
    int k = 0, i = 0, j = 0;

    while (i < l1 || j < l2) {
        if (i < l1) {
            merged[k++] = word1[i++];
        }
        if (j < l2) {
            merged[k++] = word2[j++];
        }
    }

    merged[k] = '\0';
    return merged;
}

int main(int argc, char const *argv[])
{
    char s1[100], s2[100], ans[200];
    gets(s1);
    gets(s2);
    strcpy(ans,mergeAlternately(s1,s2));
    puts(ans);
    return 0;
}
