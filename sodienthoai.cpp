#include<stdio.h>
#include<math.h>
#include<string.h>
void ch(char s[])
{
	for(int i = 0; i < strlen(s); i++)
	{
		if(s[i] == 'a' || s[i] == 'b' || s[i] == 'c' || s[i] == 'A' || s[i] == 'B' || s[i] == 'C')
		{
			s[i] = '2';
		}
		if(s[i] == 'd' || s[i] == 'e' || s[i] == 'f' || s[i] == 'D' || s[i] == 'E' || s[i] == 'F')
		{
			s[i] = '3';
		}
		if(s[i] == 'g' || s[i] == 'h' || s[i] == 'i' || s[i] == 'G' || s[i] == 'H' || s[i] == 'I')
		{
			s[i] = '4';
		}
		if(s[i] == 'j' || s[i] == 'k' || s[i] == 'l' || s[i] == 'J' || s[i] == 'K' || s[i] == 'L')
		{
			s[i] = '5';
		}
		if(s[i] == 'm' || s[i] == 'n' || s[i] == 'o' || s[i] == 'M' || s[i] == 'N' || s[i] == 'O')
		{
			s[i] = '6';
		}
		if(s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S')
		{
			s[i] = '7';
		}
		if(s[i] == 't' || s[i] == 'u' || s[i] == 'v' || s[i] == 'T' || s[i] == 'U' || s[i] == 'V')
		{
			s[i] = '8';
		}
		if(s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z')
		{
			s[i] = '9';
		}
	}
}
int check(char s[])
{
	for(int i = 0; i <= strlen(s)/2; i++)
	{
		if(s[i] != s[strlen(s)-1-i])
		return 0;
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[1000];
		scanf("\n");
		gets(s);
		ch(s);
		
		if(check(s) == 1) printf("YES\n");
		else printf("NO\n");
	}
}
