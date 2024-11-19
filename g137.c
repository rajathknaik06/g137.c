/*Preet loves traveling by train and has noted down the train names for each day. He wants your help to write a program that identifies the corresponding train name for a given day using only string concepts.



The program that takes a day as input and prints the corresponding train name based on the following criteria:



If the input day starts with 'mon', print "Express 1".
If the input day starts with 'tue', print "Rapid 2"
If the input day starts with 'wed', print "Swift 3".
If the input day starts with 'thur', print "Lightning 4".
If the input day starts with 'fri', print "Thunder 5".
If the input day starts with 'sat', print "Bullet 6".
If the input day starts with 'sun', print "Weekend Express".
If the input day doesn't match any of the above criteria, print "Invalid day".
Input format :
The input consists of the string representing the day of the week, It contains only lower case letters.

Output format :
The output displays a string, the corresponding train name based on the given criteria.

If the input does not match any criteria, print "Invalid day".

*/


#include <stdio.h>

int main() {
    char day[10];

    scanf("%s", day);

    if (day[0] == 'm' && day[1] == 'o' && day[2] == 'n') {
        printf("Express 1");
    } else if (day[0] =='t' && day[1] == 'u' && day[2] == 'e') {
        printf("Rapid 2");
    } else if (day[0] == 'w' && day[1] == 'e' && day[2] == 'd') {
        printf("Swift 3");
    } else if (day[0] == 't' && day[1] == 'h' && day[2] == 'u' && day[3] == 'r') {
        printf("Lightning 4");
    } else if (day[0] == 'f' && day[1] == 'r' && day[2] == 'i') {
        printf("Thunder 5");
    } else if (day[0] == 's' && day[1] == 'a' && day[2] == 't') {
        printf("Bullet 6");
    } else if (day[0] == 's' && day[1] == 'u' && day[2] == 'n') {
        printf("Weekend Express");
    } else {
        printf("Invalid day");
    }

    return 0;
}
