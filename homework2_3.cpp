#include <stdio.h>

main() {
	long long int login, password;
	printf("Masha: login: 123, password:321;    Igor: login: 555; password:  555 \n");
	printf("login=");
	scanf("%lli", &login);
	printf("password=");
	scanf("%lli", &password);
	
	if(((login==123)&&(password==321))||((login==555)&&(password==555))) {
		printf("Passed!");
	} else if((login!=123)&&(password=321)) {
		printf("Wrong login name");
	} else if((password!=321)&&(login=123)) {
		printf("wrong password ");
	} else if((login==555)&&(password!=555)) {
		printf("wrong password");
	} else if((login!=555)&&(password==555)) {
		printf("wrong login name");
	} else {
		printf("wrong data");
	}
	
}
