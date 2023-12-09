#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\tC PROGRAM EXAM QUIZ\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t   TO THE  ");
     printf("\n\t\t\t  EXAM QUIZ  ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   BECOME A INTELLIGENT!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the Quiz ");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Exam Quiz  --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before starting:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Exam Quiz ,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to start the quiz if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your quiz starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded by 4 marks!");
    printf("\n    By this way you can win the quiz !!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the quiz!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nWhich of the following is a Palindrome number?");
		printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.23232");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nThe country with the highest environmental performance index is...");
		printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Switzerland");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nWhich animal laughs like human being?");
		printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Hyena");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
		printf("\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nWhich is the third highest mountain in the world?");
        printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Mt. Kanchanjungha");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nWhat is the group of frogs known as?");
		printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.An Army");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nWhich of these is not a relational or logical operator?");
		printf("\n\nA. =\t\tB. ||\n\nC. ==\t\tD. !=");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");
			countr++;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A. =");
		    }

		case 2:
		printf("\n\n\nOut of the following,which one is not valid as an if-else statement?");
		printf("\n\nA. if((char)x){}\t\tB. if(x){}\n\nC. if(func1(x)){}\t\tD. if(if(x==1)){}");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");
			countr++;
			 }
		else
		       {printf("\n\nWrong!!! The correct answer is D. if(if(x==1)){}");
		       }

        case 3:
		printf("\n\n\nwe cannot use the keyword 'break' simply within_ _ _ _ _? ");
		printf("\n\nA.while\t\tB.for\n\nC.if-else\t\tD.do-while");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");
			countr++;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is C. if-else");
		       }

        case 4:
		printf("\n\n\nThe global variables are_ _ _ _ _ _ _?");
		printf("\n\nA.External\t\tB.Internal\n\nC.Both external and internal\t\tD.none of these");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!"); 
			countr++;
			}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.External");
		       }

        case 5:
		printf("\n\n\nThe #include<stdio.h> is a_ _ _ _ _ _?");
		printf("\n\nA.Inclusion directive\t\tB.File inclusion directive\n\nC.Preprocessor directive\t\tD.none of the above");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");
			countr++;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.Preprocessor directive");
		       }

		case 6:
		printf("\n\n\nWhich of these properties of#define is false?");
		printf("\n\nA.these always obey the scope rules\t\tB.we can make use of a pointer to #define\n\nC.The #define can be externally available\t\tD.All of the above");
		if (toupper(getch())=='A' )
			{printf("\n\nCorrect!!!");
			countr++;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.All of the above");
		       }

        case 7:
		printf("\n\n\nWhich one will generate random numbers effectively?");
		printf("\n\nA.rand(time(null));\t\tB.rand(10);\n\nC.rand();\t\tD.all of the above");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");
			countr++;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is C.rand();");
		       }

        case 8:
		printf("\n\n\nwho is the father of c language?");
		printf("\n\nA.Dennis Ritchie\t\tB.Steve Jobs\n\nC.James Gosling\t\tD.Rasmus Lerdorf");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");
			countr++;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Dennis Ritchie");
		       }

        case 9:
		printf("\n\n\nWhich of the following is not a valid c variable name?");
		printf("\n\nA.int number\t\tB.float rate\n\nC.int variable_count\t\tD.int $main");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");
			countr++;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is D.int $main");
		       }

        case 10:
		printf("\n\n\nAll keywords in c are in_ _ _ _ _ _ _ ?");
		printf("\n\nA.Lowercase letters\t\tB.Uppercase letters\n\nC.Camelcase letters\t\tD.none of the mentioned");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");
			countr++;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.none of the mentioned");}

        case 11:
		printf("\n\n\nHow is an array initialized in c language?");
		printf("\n\nA.int a[3]={1,2,3};\t\tB.int a={1,2,3};\n\nC.int a[]=newint(3)\t\tD.int a(3)=[1,2,3];");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");
			countr++;
			}
		else
              {printf("\n\nWrong!!! The correct answer is A.int a[3]={1,2,3};");
            }

        case 12:
		printf("\n\n\nHow is the third element in an array accessed based on pointer notation?");
		printf("\n\nA.*a+3\t\tB.*(a+3)\n\nC.*(*a+3)\t\tD.&(a+3)");
		if (toupper(getch())=='B')
			  {printf("\n\nCorrect!!!");
			  countr++;
			}
		else
              {printf("\n\nWrong!!! The correct answer is B.*(a+3)");
            }

		case 13:
		printf("\n\n\nWhat does the following decleration indicates? int x:8;");
		printf("\n\nA.x stores a value of 8\t\tB.x is an 8 bit integer\n\nC.both a and b\t\tD.none of the above");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is B.x is an 8 bit integer");
		       }

        case 14:
		printf("\n\n\nWhich of the following is an exit controlled loop?");
		printf("\n\nA.while loop\t\tB.for loop\n\nC.do-while loop\t\tD.none of the above");
		if (toupper(getch())=='c')
			{printf("\n\nCorrect!!!");countr++;
			 }
		else
		       {printf("\n\nWrong!!! The correct answer is C.do-while loop");
		      }

		case 15:
		printf("\n\n\nIf p is an integer pointer with a value 1000,then what will the output of p+5?");
		printf("\n\nA.1020\t\tB.1005\n\nC.1004\t\tD.1010");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;
			 }
		else
		       {printf("\n\nWrong!!! The correct answer is A.1020");
		       }

		case 16:
		printf("\n\n\nWhich of the following are not standard header files in c?");
		printf("\n\nA.stdio.h\t\tB.stdlib.h\n\nC.conio.h\t\tD.none of the above");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");
			countr++; 
			}
		else
		       {printf("\n\nWrong!!! The correct answer is D.none of the above");
		       }


		case 17:
		printf("\n\n\nHow to find the length of an array in c");
		printf("\n\nA.sizeof(a)\t\tB.sizeof(a[0])\n\nC.sizeofa(a)/sizeof(a[0])\t\tD.sizeof(a)*sizeof(a[0])");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");
			countr++; 
			}
		else
		       {printf("\n\nWrong!!! The correct answer is C.sizeofa(a)/sizeof(a[0])");
		       }

		case 18:
		printf("\n\n\nWhich of the following is not a storage class specifier in c?");
		printf("\n\nA.volatile\t\tB.extern\n\nC.typedef\t\tD.static\n\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");
			countr++; 
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.volatile");}

		case 19:
		printf("\n\n\nWhich of the following will occur if we call the free() function on a NULL pointer?");
		printf("\n\nA.compilation error\tB.runtime error\n\nC.undefined behaviour\tD.The program will execute normally\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; 
			}
		else
		       {printf("\n\nWrong!!! The correct answer is D.The program will execute normally");
		       }

		case 20:
		printf("\n\n\nWhich of the following should be used to free memory from a pointer allocated using the new operator?");
		printf("\n\nA.free()\t\tB.delete\n\nC.realloc()\t\tD.none of the above");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; 
			}
		else
		       {printf("\n\nWrong!!! The correct answer is B.delete");
		       }

		case 21:
		printf("\n\n\nIn which year was c developed?");
		printf("\n\nA.1962\t\tB.1978\n\nC.1979\t\tD. 1972");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is D.1972");
		       }

		case 22:
		printf("\n\n\nC is a_ _ _ _ _ _ ?");
		printf("\n\nA.Low level language\t\tB.High level language\n\nC.Medium level language\t\tD.none of the above");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; 
			}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Medium level language");
		       }

		case 23:
		printf("\n\n\nHow many keywords are there in c language?");
		printf("\n\nA.32\t\tB.33\n\nC.64\t\tD.18");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.32");getch();goto score;
		       break;}}}
	score:
    system("cls");
	score=(float)countr*4;
	if(score>0.00 && score<100)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You got %.2fmarks",score);goto go;}

	 else if(score==92.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A INTELLIGENT!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN QUIZ EXAM ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the Quiz, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded 4marks.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t********************BEST OF LUCK********************************");
	printf("\n\n\t****C PROGRAM QUIZ EXAM is developed by CODE WITH C TEAM*******");}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
