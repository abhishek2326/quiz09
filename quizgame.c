 #include <stdio.h>

int main()
{
    int ans, score = 0, correct = 0, wrong = 0;

    printf("      Welcome to the quiz game Quiz Game!      \n");

// Question 1
    printf("Q.1 Who is created C language?\n");
    printf("1.Elon Musk\t\t2.Stephen C.Johnson\n");
    printf("3.Dennis Ritchie\t4.Ken Thompson\n");
    printf("\nSelect Option:");
    scanf("%d", &ans);

    if (ans == 3)
    {


        score += 10;
        correct++;
        printf("Correct answer!\n");
    }
    else
    {
        wrong++;
printf("Wrong answer! The correct option is 3\n");
    }

// Question 2
    printf("Q.2 How many days in a year?\n");
    printf("1.365 days\t2.192 days\n");
    printf("3.265 days\t4.465 days\n");
    printf("\nSelect Option:");
    scanf("%d", &ans);

    if (ans == 1)
    {

        score += 10;
        correct++;
        printf("Correct answer!\n");
    }
    else
    {
        wrong++;
printf("Wrong answer! The correct option is 1\n");
    }

// Question 3
    printf("Q.3 In which year C language is created\n");
    printf("1.1979\t2.1972\n");
    printf("3.1975\t4.1990\n");
    printf("\nSelect Option:");
    scanf("%d", &ans);

    if (ans == 2)
    {

        score += 10;
        correct++;
        printf("Correct answer!\n");
    }
    else
    {
        wrong++;
printf("Wrong answer! The correct option is 2\n");
    }
// Question 4

    printf("Q.4 How many days in a week?\n");
    printf("1.12 days\t 2.8 days\n");
    printf("3.6 days \t 4.7days\n");
    printf("\nSelect Option:");
    scanf("%d", &ans);

    if (ans == 4)
    {

        score += 10;
        correct++;
        printf("Correct answer!\n");
    }
    else
    {
        wrong++;
printf("Wrong answer! The correct option is 4\n");
    }
// Question 5

    printf("Q.5 How many months in a year?\n");
    printf("1.18 months \t 2.10 months\n");
    printf("3.12 months \t 4.14 months\n");
    printf("\nSelect Option:");
    scanf("%d", &ans);

    if (ans == 3)
    {

        score += 10;
        correct++;
        printf("Correct answer!\n");
    }
    else
    {
        wrong++;
        printf("Wrong answer! The correct option is 3\n");
    }
printf("\n    Quiz finished!   \n");
     printf("    Your score: %d   \n", score);

   
    return 0;
}





// According to chatGPT 'quiz game' code.... 

// #include <stdio.h>

// int main() 
// {
//     int score = 0;

//     printf("Welcome to the Quiz Game!\n\n");

//     // Question 1
//     printf("Question 1: What is the capital of France?\n");
//     printf("a) Paris\n");
//     printf("b) London\n");
//     printf("c) Berlin\n");
//     printf("Your answer: ");
//     char answer1;  
//     scanf(" %c", &answer1);
//     if (answer1 == 'a' || answer1 == 'A') {
//         printf("Correct!\n");
//         score++;
//     } else {
//         printf("Incorrect.\n");
//     }

//     // Question 2
//     printf("\nQuestion 2: What is the largest planet in our solar system?\n");
//     printf("a) Jupiter\n");
//     printf("b) Saturn\n");
//     printf("c) Earth\n");
//     printf("Your answer: ");
//     char answer2;
//     scanf(" %c", &answer2);
//     if (answer2 == 'a' || answer2 == 'A') {
//         printf("Correct!\n");
//         score++;
//     } else {
//         printf("Incorrect.\n");
//     }

//     // Question 3
//     printf("\nQuestion 3: Who painted the Mona Lisa?\n");
//     printf("a) Vincent van Gogh\n");
//     printf("b) Leonardo da Vinci\n");
//     printf("c) Pablo Picasso\n");
//     printf("Your answer: ");
//     char answer3;
//     scanf(" %c", &answer3);
//     if (answer3 == 'b' || answer3 == 'B') { 
//         printf("Correct!\n");
//         score++;
//     } else {
//         printf("Incorrect.\n");
//     }

//     printf("\nQuiz finished!\n");
//     printf("Your score: %d/3\n", score);

//     return 0;
// }