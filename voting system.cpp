#include <string.h>
int main() {
    char gender[10];
    int age;
    int numParties;
    int bjpVotes = 0, congressVotes = 0, abcVotes = 0;
    printf("Enter your gender (Male/Female/Other): ");
    scanf("%s", gender);
    printf("Enter your age: ");
    scanf("%d", &age);
    if (strcmp(gender, "Male") == 0 || strcmp(gender, "Female") == 0 || strcmp(gender, "Other") == 0)
	 {
        if (age >= 18)
		 {
            printf("You are eligible to vote!\n");
            printf("Enter the number of voters: ");
            scanf("%d", &numParties);
            printf("You can vote for one of the following parties:\n");
            printf("1. BJP\n2. Congress\n3. ABC\n");
            for (int i = 0; i < numParties; i++) 
			{
                int vote;
                printf("Enter your vote (1 for BJP, 2 for Congress, 3 for ABC): ");
                scanf("%d", &vote);
                switch (vote) {
                    case 1:
                   bjpVotes++;
                    break;
                case 2:
                        congressVotes++;
                    break;
                    case 3:
                  abcVotes++;
              break;
                 default:
              printf("Invalid vote! Please vote again.\n");
                i--; 
                }
            }
       printf("\nVoting Results:\n");
       printf("BJP: %d votes\n", bjpVotes);
       printf("Congress: %d votes\n", congressVotes);
     printf("ABC: %d votes\n", abcVotes);
        } else 
		{
            printf("You are not eligible to vote as you are under 18.\n");
        }
    }
	 else 
	{
        printf("Invalid gender input.\n");
    }

    return 0;
}
