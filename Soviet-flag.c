//
//    このAA(アスキーアート)は、ある人がDiscordでメッセージを送った時に、すぐにコピペしたものです。
//    完成してる？
//
//変更後↓
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const char str[] =
	"\n                !#########       #\n"
	"            !########!          ##!\n"
	"         !########!               ###\n"
	"      !##########                  ####\n"
	"    ######### #####                ######\n"
	"     !###!      !####!              ######\n"
	"       !           #####            ######!\n"
	"                     !####!         #######\n"
	"                        #####       #######\n"
	"                          !####!   #######!\n"
	"                             ####!########\n"
	"          ##                   ##########\n"
	"        ,######!          !#############\n"
	"      ,#### ########################!####!\n"
	"    ,####'     ##################!'    #####\n"
	"  ,####'            #######              !####!\n"
	" ####'                                      #####\n"
	" ~##                                          ##~\n";
	printf("%s\n", str);
	getchar();
	return 0;
}

/*変更前↓
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("\n");
	printf("                !#########       #\n");
	printf("            !########!          ##!\n");
	printf("         !########!               ###\n");
	printf("      !##########                  ####\n");
	printf("    ######### #####                ######\n");
	printf("     !###!      !####!              ######\n");
	printf("       !           #####            ######!\n");
	printf("                     !####!         #######\n");
	printf("                        #####       #######\n");
	printf("                          !####!   #######!\n");
	printf("                             ####!########\n");
	printf("          ##                   ##########\n");
	printf("        ,######!          !#############\n");
	printf("      ,#### ########################!####!\n");
	printf("    ,####'     ##################!'    #####\n");
	printf("  ,####'            #######              !####!\n");
	printf(" ####'                                      #####\n");
	printf(" ~##                                          ##~\n");
	printf("\n");
	getchar();
    return 0;
}
*/
