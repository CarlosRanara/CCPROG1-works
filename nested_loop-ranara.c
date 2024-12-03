#include <stdio.h> 

/*
	Task: Implement the generateTeamNumbers() function
	
	This function will generate the team numbers and their respective jersey numbers.
	Refer to the sample runs for the display format.
	
	@param: teams - number of teams to generate jerseys for
*/
void generateTeamNumbers(int teams) 
{
        int i = 0, j = 0;
        for (i = 1; i <= teams; i++) {
               
                printf ("Team %d: \n", i);
                
                for (j = 1; j <= 8; j++){
                        printf("%02d ", i * j);

                        if (j % 4 == 0){
                                printf("\n");
                        }
                }

                printf("\n");
        }
        
}

int main()
{

        int teams;
	
	printf("How many teams? ");
	scanf("%d", &teams);
	printf("\n");
	
	generateTeamNumbers(teams);
	
	return 0;
}

