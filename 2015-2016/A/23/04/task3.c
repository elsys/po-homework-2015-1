#include <stdio.h>
#include <string.h>
void create_letter_distribution_diagram(char s[1000], int count[1000])
{
int c = 0;
while (s[c] != '\0')
{
if (s[c] >= 'a' && s[c] <= 'z' )
{
count[s[c] - 'a'] ++;
}
if (s[c] >= 'A' && s[c] <= 'Z' )
{
count[s[c]-'A']++;
}
c++;
}
}
int main()
{
char string[1000];
int c, order[26] = {0},sorted[26],tmp,b,d;
printf("Words\n");
scanf("%s", string);
create_letter_distribution_diagram (string, order);
for (b=0;b<26;b++){
sorted[b]=b;
}
for (b=0;b<26;b++){
for (d=0;d<26-b; d++)
{
if (order[sorted[d]] < order[sorted[d+1]])
{
tmp = sorted[d];
sorted[d] = sorted[d+1];
sorted[d+1] = tmp;
}
}
}
for (c=0 ; c<26 ;c++) {
printf("%c:%d\n", sorted[c] + 'a', order[sorted[c]]);
}
return 0;
}
