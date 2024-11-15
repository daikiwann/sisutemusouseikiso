#include<stdio.h>
int main(void)
{
int Takasi,Haru,Jinn;

Takasi=18; //たかしの年齢
Haru=50;//はるの年齢
Jinn=20;//ジンの年齢

if(Takasi==20)
printf("たかしは20歳です\n");
if(Haru!=20)
printf("はるは20歳ではありません\n");
if(Haru>=20)
printf("はるは20歳以上です\n");
if(Takasi<20)
printf("ジンは20歳未満です\n");
if(Takasi>Jinn)
printf("たかしはジンよりも年上ですか\n");
if(Haru>Takasi)
printf("はるはたかしより年上ですか\n");
return 0;
}
