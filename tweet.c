#include <stdio.h>
int main(void) {

	User
	FILE * fp = fopen("user.txt","rt");
	int number;
	char str[20];
	if ( fp == NULL) {
		puts("파일 오픈 실패!");
		return -1;
	}
	number = fgetc(fp);
	fgets(str, sizeof(str), fp);

	fclose(fp)

		FILE * ffp = fopen("friend.txt", "rt");
	int myid;
	int fid;
	if (ffp == NULL) {
		puts("파일 오픈 실패!");
		return -1;
	}
	myid = fgetc(fp);
	fid = fgetc(fp);

}

typedef struct user {

	int id;
	char screenname[20];

}User;

typedef struct friend{

	int userid;
	int friendid;

}Friend;