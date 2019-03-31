#include<stdio.h>
#include<string.h>
int main()
{
	char c[1000];int freq[26];int max=0;
	gets(c);
	for(int i=0;i<26;i++)
	{
		freq[i]=0;
	}
	for(int i=0;i<strlen(c);i++)
	{
		freq[c[i]-97]++;
	}
	for(int i=0;i<26;i++)
	{
		if(freq[i]>max) max=freq[i];
	}
	if(strlen(c)-max>=max-1) printf("possible");
	else printf("Not possible");
}