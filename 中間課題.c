#include <stdio.h>
#include<string.h>
int main() 
{
	char password[100];
	//パスワード入力
	printf("パスワードを入力してください");
    scanf("%99s", password);  // 99文字まで入力
	int length=strlen(password);//パスワードの長さ
	int has_upper=0;//大文字フラグ
	int has_lower=0;//小文字フラグ
	int i;
	//各文字をチェック
	for(i=0;i<length;i++){
		if(isupper(password[i])){
			has_upper=1;
		}
		if(islower(password[i])){
			has_lower=1;
		}
	}
	//判定
	if(length>=8 && has_upper && has_lower){
		printf("強いパスワードです\n");
	}else{
		printf("弱いパスワードです。改善点\n");
		if(length<8){
			printf("パスワードは８文字以上にしてください。\n");
		}
		if(!has_upper){
			printf("パスワードには少なくとも１つの大文字を含めてください\n");
		}
		if(!has_lower){
			printf("パスワードには少なくとも１つの小文字を含めてください\n");
		}
	}
	return 0;
}