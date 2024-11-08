int main()
{
    int diff;
    char large;
    char small;
    printf("アルファベット小文字を入力");
    scanf("%c",&small);
    diff='a'-'A';
    large=small-diff;

	printf("小文字は%c 大文字は%c\n",small,large);
    return 0;
}
