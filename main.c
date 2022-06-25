#include <stdio.h>
#include <string.h>
#include "libft.h"

#include <ctype.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main(void)
{
	// printf("Testing ft_isalpha\n");
	// printf("Test 1 - alpha\n");
	// ft_isalpha('c') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	// printf("Test 2 - numeric\n");
	// ft_isalpha('1') ? printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n");
	// printf("Test 3 - special char\n");
	// ft_isalpha('&') ? printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n");
	
	// printf("\nTesting ft_isdigit\n");
	// printf("Test 1 - alpha\n");
	// ft_isdigit('c') ? printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n");
	// printf("Test 2 - numeric\n");
	// ft_isdigit('1') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	// printf("Test 3 - special char\n");
	// ft_isdigit('&') ? printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n");

	// printf("\nTesting ft_isalnum\n");
	// printf("Test 1 - alpha\n");
	// ft_isalnum('c') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	// printf("Test 2 - numeric\n");
	// ft_isalnum('1') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	// printf("Test 3 - special char\n");
	// ft_isalnum('&') ? printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n");

	// printf("\nTesting ft_isascii\n");
	// printf("Test 1 - alpha\n");
	// ft_isascii('c') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	// printf("Test 2 - numeric\n");
	// ft_isascii('1') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	// printf("Test 3 - special char\n");
	// ft_isascii(0x06) ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	
	char csrc[] = "GeeksforGeeks";
	char cdest[100];
	ft_memcpy(cdest, csrc, strlen(csrc)+1);
	printf("Copied string is %s", cdest);
	
	int isrc[] = {10, 20, 30, 40, 50};
	int n = sizeof(isrc)/sizeof(isrc[0]);
	int idest[n], i;
	ft_memcpy(idest, isrc,  sizeof(isrc));
	printf("\nCopied array is ");
	for (i=0; i<n; i++)
		printf("%d ", idest[i]);
	
	return 0;
}