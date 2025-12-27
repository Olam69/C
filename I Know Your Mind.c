#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>


int main() {

   // C program for generating random number in a given range
    // Generates and prints 'x' random
    // numbers in range [lower, upper].
    void printRandoms(lower,upper,x)
    {
        int i,RandOutcome;
        for (i = 0; i < x; i++) 
        {
            RandOutcome = ( rand() % (upper - lower + 1) ) + lower;
            printf("%d",RandOutcome);
        }
    
    
    //C program for the timer
float x_seconds=0;
float x_milliseconds=0;
float count_down_time_in_secs=0;
float time_left=0;

clock_t x_startTime,x_countTime;

count_down_time_in_secs=1.3;
 /*Any number you write here
multiplied by 10 is the total
number of seconds you want your
timer to have*/
    
    

    char cont[50]="~Type cont to continue~";
    char SELECT[50]="Use your keyboard to select an option\n~";
    char InCh[50]="Invalid choice.\nType 0 to go back and reselect\n~";
    char nxt[50]="type 2 to next\n~";
    char ntnlttr[50],anslttr[50];
    int answer;
    

Start:
    clrscr();
    printf("Welcome to the smashing app,\n'I know your Mind!'\nOh you will be surprised I really do.\n");
    printf("                  -Made by RST~\n\n");
    printf("%s",cont);
    scanf("%s",&ntnlttr);

Menu:
    clrscr();
    printf("1. Start\n");
    printf("2. Credits\n");
    printf("3. Exit\n");
    printf("%s",SELECT);
    scanf("%d",&answer);
    if(answer==1) {
        goto Step1;
    }
    else if(answer==2) {
    goto Credits;
    }
    else if(answer==3) {
        goto Exit;
    }
    else if(answer==2001) {
    clrscr ();
    printf("_Developer Mode_\n");
    printf("Skipping All Intro...\n");
    printf("Set RandOutcome(1-5): ");
    scanf("%d",&RandOutcome);
    goto Rands;
    }
    else {
        clrscr();
        printf("%s",InCh);
        scanf("%s",&ntnlttr);
        goto Menu;
    }

Exit:
    clrscr();
    printf("Sure to quit?\n");
    printf("1. Yes\n");
    printf("2. No\n");
    printf("%s",SELECT);
    scanf("%d",&answer);
    if(answer==1) {
        goto Exit_Cont;
    }
    else {
        goto Menu;
    }

Exit_Cont:
    clrscr();
    printf("Quiting program...");
    return 0;

Credits:
clrscr ();
printf ("'I Know Your Mind' is a simple but advanced program, ");
printf("made from Math and made to give you some fun.\n");
printf("Hope you liked it.\n");
printf("                - R.S.T Studios\n");
printf("All thanks to God. This app is just an idea of the developer. Share.\n");
printf("~Type cont to go to Main Menu~\n");
scanf("%s",&ntnlttr);
goto Menu;

Step1:
    clrscr();
    printf("_STEP 1_\n");
    printf("Pick any two-digit number (i.e; any number from 10-99). Don't tell me.\nDon't tell anyone.\n");
    printf("Example: I choose\n         68 \nChoose yours\n");
    printf("%s",cont);
    scanf("%s",&ntnlttr);
    goto Step2;


Step2:
    clrscr();
    printf("_Step 2_\n");
    printf("Remember the number is two-digits, add the first digit to the second\n");
    printf("E.g: From the 68 I chose;\n");
    printf("            6 + 8 = 14\n");
    printf("Do yours.\n");
    printf("%s",cont);
    scanf("%s",&ntnlttr);

Step3:
    clrscr();
    printf("_Step 3_\n");
    printf("Your answer from step 2, subtract it from your original number\n");
    printf("E.g: My 12 subtracted from my 68\n");
    printf("          68 - 12 = 54\n");
    printf("Are you through?~");
    scanf("%s",&ntnlttr);

StepFinish:
    clrscr();
    printf("Well, that's all. Pick, add, subtract. Do you have a final answer now?\n");
    printf("1. Yes. And I've written it somewhere\n");
    printf("2. No. Retake thesteps carefully\n");
    printf("%s",SELECT);
    scanf("%d",&answer);
    if(answer==1) {
        goto Continue;
    }
    else if(answer==2) {
        goto Step1;
    }
    else {
        clrscr();
        printf("%s",InCh);
        scanf("%s",&ntnlttr);
        goto StepFinish;
    }

Continue:
clrscr ();
printf("NOTE: Go through your calculations once again. Make sure there is no error\n");
printf("Not to worry though, 'I Know Your Mind' has been designed to check your calc with some highly complex algorithm ");
printf("and then display the correct answer; that is if you made a mistake somewhere.\n");
printf("But pls, don't give my app too tough a time. Thank you.\n");
printf("     -A note from the developer\n");
printf("%s",cont);
scanf("%s",&ntnlttr);
goto Rands;

Rands:
if(RandOutcome==1){goto Board_1;}
else if(RandOutcome==2){goto Board_2;}
else if(RandOutcome==3){goto Board_3;}
else if(RandOutcome==4){goto Board_4;}
else if(RandOutcome==5){goto Board_5;}



Board_1:
clrscr();
printf("Look for your final answer on these pages and memorize the shape under it...\n");
printf("0      2     3     4     5     6\n");
printf("¶      π     ×     ÷     Ω     ×\n");
printf("   7     8     9    10    11\n");
printf("   ÷     Ω     ∆     π     √\n");
printf("12   13    14    15    16    17\n");
printf("∆     •     √     ¶     •     ÷\n");
printf("%s",nxt);
scanf("%s",&ntnlttr);

B_1_2:
clrscr ();
printf("  18    19    20    21    22\n");
printf("   ∆     ÷     π     Ω     ×\n");
printf("23    24    25    26    27    28\n");
printf("π      ÷     ∆     ¶     ∆     √\n");
printf("  29    30    31    32    33\n");
printf("   ÷     •     ×     Ω     •\n");
printf("1. Previous\n");
printf("2. Next\n");
printf("3. Mult Next (I Found My Number)\n~");
scanf("%d",&answer);
if(answer==1){goto Board_1;}
else if(answer==2){goto B_1_3;}
else if(answer==3){goto B_1_2_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_1_2;
}
B_1_2_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_1_Telelink;}
else if(answer==2){goto B_1_2;}


B_1_3:
clrscr ();
printf("34    35    36    37    38    39\n");
printf("√      ¶     ∆     π     ×     •\n");
printf("   40    41    42    43    44\n");
printf("    ÷     ×     √     •     ∆\n");
printf("45    46    47    48    49    50\n");
printf("∆      √     ×     ¶     •     Ω\n");
printf("1. Previous\n");
printf("2. Next\n");
printf("3. Found it\n~");
scanf("%d",&answer);
if(answer==1){goto B_1_2;}
else if(answer==2){goto B_1_4;}
else if(answer==3){goto B_1_3_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_1_3;
}
B_1_3_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_1_Telelink;}
else if(answer==2){goto B_1_3;}


B_1_4:
clrscr ();
printf("   51    52    53    54    55\n");
printf("    •     ¶     Ω     ∆     √\n");
printf("56    57    58    59    60    61\n");
printf("∆      π     √     ÷     ×     π\n");
printf("   62    63    64    65    66\n");
printf("    ÷     ∆     √     Ω     ¶\n");
printf("1. Previous\n");
printf("2. Next\n");
printf("3. Found it\n~");
scanf("%d",&answer);
if(answer==1){goto B_1_3;}
else if(answer==2){goto B_1_5;}
else if(answer==3){goto B_1_4_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_1_4;
}
B_1_4_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_1_Telelink;}
else if(answer==2){goto B_1_4;}


B_1_5:
clrscr ();
printf("67    68    69    70    71    72\n");
printf("÷      ¶     ÷     √     Ω     ∆\n");
printf("   73    74    75    76    77\n");
printf("    ×     ∆     •     ¶     √\n");
printf("78    79    80    81    82    83\n");
printf("√      ¶     ÷     ∆     •     π\n");
printf("1. Previous\n");
printf("2. Next\n");
printf("3. Found it\n~");
scanf("%d",&answer);
if(answer==1){goto B_1_4;}
else if(answer==2){goto B_1_6;}
else if(answer==3){goto B_1_5_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_1_5;
}
B_1_5_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_1_Telelink;}
else if(answer==2){goto B_1_5;}


B_1_6:
clrscr ();
printf("   84    85    86    87    88\n");
printf("    ∆     •     ¶     √     Ω\n");
printf("89    90    91    92    93    94\n");
printf("×      ∆     Ω     •     •     ¶\n");
printf("   95    96    97    98    99\n");
printf("    √     ×     π     ÷     ∆\n");
printf("1. Previous\n");
printf("2. Found it\n~");
scanf("%d",&answer);
if(answer==1){goto B_1_4;}
else if(answer==2){goto B_1_6_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_1_6;
}
B_1_6_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_1_Telelink;}
else if(answer==2){goto B_1_6;}


Board_1_Telelink:
clrscr ();
printf("Perfect! Creating a telepathic link to your brain....\n");
printf("1. Surprise me\n");
scanf("%s",&ntnlttr);
goto Board_1_Timer;

Board_1_Timer:
clrscr ();

printf("Penetrating your skull\n");
printf("Fifteen seconds max\n");
printf("Don't forget your shape...\n\n");

x_startTime=clock();

time_left=(count_down_time_in_secs-x_seconds);

while (time_left>0)
{
    x_countTime=clock(); // current clock

    x_milliseconds=x_countTime-x_startTime;

    x_seconds=x_milliseconds/(CLOCKS_PER_SEC);

    time_left=count_down_time_in_secs-x_seconds;

}

goto Board_1_Magic;


Board_1_Magic:
clrscr ();
printf("        This is your shape...\n");
printf("                 ∆           \n");
printf("                ∆∆∆          \n");
printf("               ∆∆∆∆∆         \n");
printf("              ∆∆∆∆∆∆∆        \n");
printf("Is this correct?\n");
printf("1. Very correct\n");
printf("2. No\n~");
scanf("%d",&answer);
if(answer==1){goto Vict;}
else {goto Step1;}




Board_2:
clrscr();
printf("Look for your final answer on these pages and memorize the shape under it...\n");
printf("0     2     3     4     5     6\n");
printf("π     √     •     ÷     ¶     ×\n");
printf("   7     8     9    10    11\n");
printf("   ÷     Ω     ¶     π     √\n");
printf("12   13    14    15    16    17\n");
printf("∆     π     √     ×     •     ÷\n");
printf("%s",nxt);
scanf("%s",&ntnlttr);

B_2_2:
clrscr ();
printf("  18    19    20    21    22\n");
printf("   ¶     π     ÷     Ω     ×\n");
printf("23    24    25    26    27    28\n");
printf("π      ÷     ×     π     ¶     √\n");
printf("  29    30    31    32    33\n");
printf("   ÷     √     ×     ∆     •\n");
printf("1. Previous\n");
printf("2. Next\n");
printf("3. Mult Next (I Found My Number)\n~");
scanf("%d",&answer);
if(answer==1){goto Board_2;}
else if(answer==2){goto B_2_3;}
else if(answer==3){goto B_2_2_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_2_2;
}
B_2_2_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_2_Telelink;}
else if(answer==2){goto B_2_2;}


B_2_3:
clrscr ();
printf("34    35    36    37    38    39\n");
printf("√      ×     ¶     π     ×     ¶\n");
printf("   40    41    42    43    44\n");
printf("    ÷     ×     √     •     ∆\n");
printf("45    46    47    48    49    50\n");
printf("¶      π     ×     Ω     •     Ω\n");
printf("1. Previous\n");
printf("2. Next\n");
printf("3. Found it\n~");
scanf("%d",&answer);
if(answer==1){goto B_2_2;}
else if(answer==2){goto B_2_4;}
else if(answer==3){goto B_2_3_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_2_3;
}
B_2_3_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_2_Telelink;}
else if(answer==2){goto B_2_3;}


B_2_4:
clrscr ();
printf("   51    52    53    54    55\n");
printf("    ∆     •     Ω     ¶     √\n");
printf("56    57    58    59    60    61\n");
printf("∆      π     ÷     √     ∆     π\n");
printf("   62    63    64    65    66\n");
printf("    ÷     ¶     •     √     ¶\n");
printf("1. Previous\n");
printf("2. Next\n");
printf("3. Found it\n~");
scanf("%d",&answer);
if(answer==1){goto B_2_3;}
else if(answer==2){goto B_2_5;}
else if(answer==3){goto B_2_4_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_2_4;
}
B_2_4_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_2_Telelink;}
else if(answer==2){goto B_2_4;}


B_2_5:
clrscr ();
printf("67    68    69    70    71    72\n");
printf("∆      ×     ÷     √     Ω     ¶\n");
printf("   73    74    75    76    77\n");
printf("    •     ∆     •     ×     √\n");
printf("78    79    80    81    82    83\n");
printf("π      ✓     ÷     ¶     ∆     Ω\n");
printf("1. Previous\n");
printf("2. Next\n");
printf("3. Found it\n~");
scanf("%d",&answer);
if(answer==1){goto B_2_4;}
else if(answer==2){goto B_2_6;}
else if(answer==3){goto B_2_5_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_2_5;
}
B_2_5_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_2_Telelink;}
else if(answer==2){goto B_2_5;}


B_2_6:
clrscr ();
printf("   84    85    86    87    88\n");
printf("    ∆     •     ∆     √     ¶\n");
printf("89    90    91    92    93    94\n");
printf("×      ¶     Ω     •     •     ×\n");
printf("   95    96    97    98    100\n");
printf("    √     Ω     π     ×     ∆\n");
printf("1. Previous\n");
printf("2. Found it\n~");
scanf("%d",&answer);
if(answer==1){goto B_2_5;}
else if(answer==2){goto B_2_6_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_2_6;
}
B_2_6_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_2_Telelink;}
else if(answer==2){goto B_2_6;}


Board_2_Telelink:
clrscr ();
printf("Perfect! Creating a telepathic link to your brain....\n");
printf("1. Surprise me\n");
scanf("%s",&ntnlttr);
goto Board_2_Timer;

Board_2_Timer:
clrscr ();

printf("Penetrating your skull\n");
printf("Fifteen seconds max\n");
printf("Don't forget your shape...\n\n");

x_startTime=clock();

time_left=(count_down_time_in_secs-x_seconds);

while (time_left>0)
{
    x_countTime=clock(); // current clock

    x_milliseconds=x_countTime-x_startTime;

    x_seconds=x_milliseconds/(CLOCKS_PER_SEC);

    time_left=count_down_time_in_secs-x_seconds;

}

goto Board_2_Magic;



Board_2_Magic:
clrscr ();
printf("        This is your shape...\n");
printf("                   ¶¶         \n");
printf("                  ¶¶¶         \n");
printf("                   ¶¶         \n");
printf("                   ¶¶         \n");
printf("Is this correct?\n");
printf("1. Very correct\n");
printf("2. No\n~");
scanf("%d",&answer);
if(answer==1){goto Vict;}
else {goto Step1;}





Board_3:
clrscr();
printf("Look for your final answer on these pages and memorize the shape under it...\n");
printf("0     2     3     4     5     6\n");
printf("π     √     •     ÷     ¶     ×\n");
printf("   7     8     9    10    11\n");
printf("   ÷     Ω     π     •     √\n");
printf("12   13    14    15    16    17\n");
printf("∆     π     √     ×     ∆     ÷\n");
printf("%s",nxt);
scanf("%s",&ntnlttr);

B_3_2:
clrscr ();
printf("  18    19    20    21    22\n");
printf("   π     ∆     ÷     Ω     ×\n");
printf("23    24    25    26    27    28\n");
printf("∆      Ω     ×     •     π     √\n");
printf("  29    30    31    32    33\n");
printf("   ÷     √     ×     ∆     •\n");
printf("1. Previous\n");
printf("2. Next\n");
printf("3. Mult Next (I Found My Number)\n~");
scanf("%d",&answer);
if(answer==1){goto Board_3;}
else if(answer==2){goto B_3_3;}
else if(answer==3){goto B_3_2_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_3_2;
}
B_3_2_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_3_Telelink;}
else if(answer==2){goto B_3_2;}


B_3_3:
clrscr ();
printf("34    35    36    37    38    39\n");
printf("∆      ×     π     •     ×     ¶\n");
printf("   40    41    42    43    44\n");
printf("    ¶     ×     √     •     ∆\n");
printf("45    46    47    48    49    50\n");
printf("π      Ω     ×     Ω     •     Ω\n");
printf("1. Previous\n");
printf("2. Next\n");
printf("3. Found it\n~");
scanf("%d",&answer);
if(answer==1){goto B_3_2;}
else if(answer==2){goto B_3_4;}
else if(answer==3){goto B_3_3_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_3_3;
}
B_3_3_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_3_Telelink;}
else if(answer==2){goto B_3_3;}


B_3_4:
clrscr ();
printf("   51    52    53    54    55\n");
printf("    ∆     •     Ω     π     √\n");
printf("56    57    58    59    60    61\n");
printf("∆      π     ×     √     ∆     ¶\n");
printf("   62    63    64    65    66\n");
printf("    •     π     ∆     √     ¶\n");
printf("1. Previous\n");
printf("2. Next\n");
printf("3. Found it\n~");
scanf("%d",&answer);
if(answer==1){goto B_3_3;}
else if(answer==2){goto B_3_5;}
else if(answer==3){goto B_3_4_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_3_4;
}
B_3_4_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_3_Telelink;}
else if(answer==2){goto B_3_4;}


B_3_5:
clrscr ();
printf("67    68    69    70    71    72\n");
printf("√      ×     ÷     √     Ω     π\n");
printf("   73    74    75    76    77\n");
printf("    ¶     ÷     •     ×     √\n");
printf("78    79    80    81    82    83\n");
printf("π      •     ∆     π     ÷     Ω\n");
printf("1. Previous\n");
printf("2. Next\n");
printf("3. Found it\n~");
scanf("%d",&answer);
if(answer==1){goto B_3_4;}
else if(answer==2){goto B_3_6;}
else if(answer==3){goto B_3_5_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_3_5;
}
B_3_5_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_3_Telelink;}
else if(answer==2){goto B_3_5;}


B_3_6:
clrscr ();
printf("   84    85    86    87    88\n");
printf("    ∆     •     Ω     √     ¶\n");
printf("89    90    91    92    93    94\n");
printf("×      π     Ω     ÷     •     ×\n");
printf("   95    96    97    98    100\n");
printf("    √     •     π     ×     ∆\n");
printf("1. Previous\n");
printf("2. Found it\n~");
scanf("%d",&answer);
if(answer==1){goto B_3_4;}
else if(answer==2){goto B_3_6_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_3_6;
}
B_3_6_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_3_Telelink;}
else if(answer==2){goto B_3_6;}


Board_3_Telelink:
clrscr ();
printf("Perfect! Creating a telepathic link to your brain....\n");
printf("1. Surprise me\n");
scanf("%s",&ntnlttr);
goto Board_3_Timer;

Board_3_Timer:
clrscr ();

printf("Penetrating your skull\n");
printf("Fifteen seconds max\n");
printf("Don't forget your shape...\n\n");

x_startTime=clock();

time_left=(count_down_time_in_secs-x_seconds);

while (time_left>0)
{
    x_countTime=clock(); // current clock

    x_milliseconds=x_countTime-x_startTime;

    x_seconds=x_milliseconds/(CLOCKS_PER_SEC);

    time_left=count_down_time_in_secs-x_seconds;

}

goto Board_3_Magic;


Board_3_Magic:
clrscr ();
printf("        This is your shape...\n");
printf("                πππππ        \n");
printf("                 π π         \n");
printf("                 π π         \n");
printf("                 π  π        \n");
printf("Is this correct?\n");
printf("1. Very correct\n");
printf("2. No\n~");
scanf("%d",&answer);
if(answer==1){goto Vict;}
else {goto Step1;}




Board_4:
clrscr();
printf("Look for your final answer on these pages and MEMORIZE THE SHAPE under it...\n");
printf("0     2     3     4     5     6\n");
printf("π     √     •     ÷     ¶     ×\n");
printf("   7     8     9    10    11\n");
printf("   ¶     Ω     √     π     ÷\n");
printf("12   13    14    15    16    17\n");
printf("∆     ×     ¶     •     ÷     ∆\n");
printf("%s",nxt);
scanf("%s",&ntnlttr);

B_4_2:
clrscr ();
printf("  18    19    20    21    22\n");
printf("   √     π     ÷     Ω     ×\n");
printf("23    24    25    26    27    28\n");
printf("π      ¶     Ω     π     √     ÷\n");
printf("  29    30    31    32    33\n");
printf("   ¶     Ω     √     ∆     π\n");
printf("1. Previous\n");
printf("2. Next\n");
printf("3. Mult Next (I Found My Number)\n~");
scanf("%d",&answer);
if(answer==1){goto Board_4;}
else if(answer==2){goto B_4_3;}
else if(answer==3){goto B_4_2_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_4_2;
}
B_4_2_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_4_Telelink;}
else if(answer==2){goto B_4_2;}


B_4_3:
clrscr ();
printf("34    35    36    37    38    39\n");
printf("√      ×     √     π     ×     ¶\n");
printf("   40    41    42    43    44\n");
printf("    ÷     ×     •     ∆     ÷\n");
printf("45    46    47    48    49    50\n");
printf("√      π     ×     Ω     •     Ω\n");
printf("1. Previous\n");
printf("2. Next\n");
printf("3. Found it\n~");
scanf("%d",&answer);
if(answer==1){goto B_4_2;}
else if(answer==2){goto B_4_4;}
else if(answer==3){goto B_4_3_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_4_3;
}
B_4_3_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_4_Telelink;}
else if(answer==2){goto B_4_3;}


B_4_4:
clrscr ();
printf("   51    52    53    54    55\n");
printf("    ∆     •     Ω     √     ∆\n");
printf("56    57    58    59    60    61\n");
printf("√      π     ÷     •     ∆     π\n");
printf("   62    63    64    65    66\n");
printf("    ÷     √     Ω     π     ¶\n");
printf("1. Previous\n");
printf("2. Next\n");
printf("3. Found it\n~");
scanf("%d",&answer);
if(answer==1){goto B_4_3;}
else if(answer==2){goto B_4_5;}
else if(answer==3){goto B_4_4_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_4_4;
}
B_4_4_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_4_Telelink;}
else if(answer==2){goto B_4_4;}


B_4_5:
clrscr ();
printf("67    68    69    70    71    72\n");
printf("¶      π     ÷     ∆     ¶     √\n");
printf("   73    74    75    76    77\n");
printf("    ¶     ∆     •     ×     π\n");
printf("78    79    80    81    82    83\n");
printf("π      ¶     ÷     √     ∆     Ω\n");
printf("1. Previous\n");
printf("2. Next\n");
printf("3. Found it\n~");
scanf("%d",&answer);
if(answer==1){goto B_4_4;}
else if(answer==2){goto B_4_6;}
else if(answer==3){goto B_4_5_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_4_5;
}
B_4_5_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_4_Telelink;}
else if(answer==2){goto B_4_5;}


B_4_6:
clrscr ();
printf("   84    85    86    87    88\n");
printf("    ∆     π     •     √     ¶\n");
printf("89    90    91    92    93    94\n");
printf("×      √     Ω     π     ÷     ×\n");
printf("   95    96    97    98    100\n");
printf("    •     Ω     π     ×     ∆\n");
printf("1. Previous\n");
printf("2. Found it\n~");
scanf("%d",&answer);
if(answer==1){goto B_4_4;}
else if(answer==2){goto B_4_6_Q;}
else{
    clrscr ();
    printf("%s",InCh);
    scanf("%s",&ntnlttr);
    goto B_4_6;
}
B_4_6_Q:
clrscr ();
printf("Good. But sure you memorized the correct shape very well?\n");
printf("1. Yes\n");
printf("2. Let me make sure\n~");
scanf("%d",&answer);
if(answer==1){goto Board_4_Telelink;}
else if(answer==2){goto B_4_6;}


Board_4_Telelink:
clrscr ();
printf("Perfect! Creating a telepathic link to your brain....\n");
printf("1. Surprise me\n");
scanf("%s",&ntnlttr);
goto Board_4_Timer;

Board_4_Timer:
clrscr ();

printf("Penetrating your skull\n");
printf("Don't forget your shape...\n\n");

x_startTime=clock();

time_left=(count_down_time_in_secs-x_seconds);

while (time_left>0)
{
    x_countTime=clock(); // current clock

    x_milliseconds=x_countTime-x_startTime;

    x_seconds=x_milliseconds/(CLOCKS_PER_SEC);

    time_left=count_down_time_in_secs-x_seconds;

}

goto Board_4_Magic;


Board_4_Magic:
clrscr ();
printf("This is your shape...\n");
printf("              √√        \n");
printf("             √√         \n");
printf("      √√ √√          \n");
printf("       √√√           \n");
printf("Is this correct?\n");
printf("1. Very correct\n");
printf("2. No\n~");
scanf("%d",&answer);
if(answer==1){goto Vict;}
else {goto Step1;}





Vict:
clrscr ();
printf("Told you I Know Your Mind!\n");
printf("Thank you for trying the program\n");
printf("1. Who made this\n~");
scanf("%s",ntnlttr);
goto Credits;






Board_5:
goto Board_1;






//Am adding return 0 for now so
//that uncompleted labels can make
//sense until I complete them (by
//adding the gotos and they should
//have)
//
//Return 0 here is not for int main
//at all.

return 0;














//closing void printRandoms(lower,upper,x)
}


// Driver code for the random generator part
    int lower,upper,x;
  //printf("Print x random number(s) betweena given range; lower and upper\n");
    x=1;
    lower=1;
    upper=5;
   
  //We use current time as seed for random generator
    srand(time(0));
    printf("\n\nPrint %d random number(s) between%d and %d\n\nAnswer:",x,lower,upper);
    printRandoms(lower,upper,x);

    
//Closing int main();
return 0;
}
    