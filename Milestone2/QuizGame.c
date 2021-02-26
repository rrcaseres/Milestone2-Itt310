#include <stdio.h>
#include <stdbool.h> 

int main(void) {
// These are the variables that store answers, categories and completion of the quiz.
    char answer; 
    int category;
    int isDone = 1;
    //This is the loop that goes untill the quiz is complete 
    while (isDone == 1) {
        // These are the categories that the user can select from 
        printf("Enter category number 1 - Music, 2 - Animals, 3 - Cybersecurity\n");
        scanf_s("%d", &category);
        if (category == 1) {
            printf("You selected category Music!\n"); 
            printf("Who is the artist of the song '4 your eyez'\n"); // This is the first question
            printf("a)J Cole \nb)Lil Wayne \nc)Drake \nd)Nas \n"); // This is the first set of answers
            scanf_s("%c", &answer);// The program execution wasnt stopping at the first scanf so i used 2 
            scanf_s("%c", &answer); //  user input
            if (answer == 'a') { // if the  answer is correct you proceed to the next question. Otherwise it prints incorrect and restats the loop
                printf("Correct!\n");
                printf("Who sings the song 'Dangerously in Love'\n"); // This is the Seconod question
                printf("a)SZA \nb)Destiny's Child \nc)TLC \nd)Aaliyah \n"); //This is the second set of answers
                scanf_s("%c", &answer); //The program execution wasnt stopping at thefirst scanf so i used 2
                scanf_s("%c", &answer); // user input
                if (answer == 'b') { // if the  answer is correct you proceed to the next question. Otherwise it prints incorrect and restats the loop
                    printf("Correct!\n");
                    printf("Who was on 'Degrassi'\n"); // This is the third question
                    printf("a)J Cole \nb)Lil Wayne \nc)Drake \nd)Nas \n"); // This is the third set of answers
                    scanf_s("%c", &answer);//The program execution wasnt stopping at thefirst scanf so i used 2
                    scanf_s("%c", &answer); //user input
                    if (answer == 'a') { // if the  answer is correct you proceed to the next question. Otherwise it prints incorrect and restats the loop
                        printf("Correct!\n");
                    }

                    printf("Congratulations You finished the quiz\n"); // prints the statement you finsihed the quiz
                    isDone = 0;
                }
                else {
                    printf("Incorrect, Please start over\n");
                }
            }
            else {
                printf("Incorrect, Please start over\n");
            }
        }
        // This is the second category of questions and each line works exaclty like the category above. 
        else if (category == 2) {
            printf("You selected category Animals!\n"); // Select the category 
            printf("What animal is the king of the jungle\n"); // Question 1 
            printf("a)Lion \nb)Mouse \nc)Horse \nd)Pony \n"); // Answers
            scanf_s("%c", &answer);
            scanf_s("%c", &answer); // user input 
            if (answer == 'a') { // if correct proceed 
                printf("Correct!\n");
                printf("What animal is a house pet\n"); // question 2 
                printf("a)Lion \nb)Rhino \nc)Dragon \nd)Dog \n"); // Answeres
                scanf_s("%c", &answer);
                scanf_s("%c", &answer); // user input
                if (answer == 'd') {
                    printf("Correct!\n");
                    printf("What animal was Timon from Lion King\n"); // question 3
                    printf("a)Elephant \nb)Snake \nc)Aligator \nd)MeerKat \n"); // Answeres
                    scanf_s("%c", &answer);
                    scanf_s("%c", &answer); // user input 
                    if (answer == 'd') {
                        printf("Correct!\n"); // if correct he quiz is finished, if incorrect the loop will restart 
                    }
                    printf("You finished quiz\n");
                    isDone = 0;
                }
                else {
                    printf("Incorrect, Please start over\n");
                }
            }
            else {
                printf("Incorrect, Please start over\n");
            }
        }
        // This is the second category of questions and each line works exaclty like the category above. 
        else if (category == 3) { // third category of questions
            printf("You selected category Cybersecurity!\n");
            printf("What does DNS stand for?\n"); // first question
            printf("a)Domain Name Server \nb)Domain Name System \nc)Domain Name scan \nd)Domain Name size \n"); // Answers
            scanf_s("%c", &answer);
            scanf_s("%c", &answer); // user input 
            if (answer == 'a') { // if the correct answer is selected then you proceed
                printf("Correct!\n");
                printf("What does IP stand for?\n"); // second question
                printf("a)Interweb Permission \nb)Internet Protocol \nc)Internet Pass \nd)Internet Push \n"); // Answers
                scanf_s("%c", &answer); 
                scanf_s("%c", &answer); // user input
                if (answer == 'b') {
                    printf("Correct!\n");
                    printf("Port number 53 is assocaited with what protocol?\n"); //Third question
                    printf("a)DNS \nb)SSH \nc)Telnet \nd)HTTPS \n"); // Answers
                    scanf_s("%c", &answer);
                    scanf_s("%c", &answer); // user input 
                    if (answer == 'a') {
                        printf("Correct!\n");
                        printf("You finished quiz\n");
                        isDone = 0; // The quiz is complete 
                    }
                    else {
                        printf("Incorrect, Please start over\n");
                    }
                }
                else {
                    printf("Incorrect, Please start over\n");
                }
            }
        }
       
    } 
    return 0;
}