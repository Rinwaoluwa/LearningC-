#include <iostream>
// using namespace std;
#include <stdio.h>

// //  what these does is to hint the compiler that these functions exist
// int get_text(void)
// void printout(int text);

int addition(int, int);
// passing by reference ----- &
void duplicate (int&, int&, int&);

void printarray(int arg[], int length);

std::string get_string(std::string text);
int compute_score(std::string data);
void validate_password(std::string password);
std::string replace(std::string);

int main(int argc, char *argv[])
{
    int m = 2, p = 3, o = 4;
    duplicate(m, p, o);
    printf(" %i, %i,%i", m, p, o);
    printf("hello, world %s \n", "toby");
    // cout << "Hey!!! \n";

    //Loops
    int i = 3;
    while (i > 0) {
        printf("Hello there \n");
        i--;
    }

    // FOR LOOP
    for(int i = 0; i < 3; i++) {
        printf("Meow %s \n", "taiwo");
    }

    //  INFINITE LOOP
    // while (true || 1) {
    //     printf("Hello there \n");
    // }
    // declaring a constant
    const int n = 3;

    for(int i = 0; i < n + 1; i++)
    {

        for(int j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
    int B = 3;
    int A = ++B;

    //  The value B is increased before it copided to A
    // cout << A << endl << B << endl;

    int D = 3;
    int C = D++;

    //  The value D is NOT increased before it copided to C
    // cout << D << endl << C << endl;

    // string myString = "String literal \n";
    // cout << myString;
    // myString = "this forms " "a single " "string " "of characters";
    // cout << myString << endl; // -- endl creates a newLine

    //  return the size in bi=yte of varibale or type
    // cout << sizeof(char) << endl;

    int x;
    // cout << "Please enter number: ";
    // cin >> x;
    // cout << "The number you entered is " << x;
    // cout << " and x2 = " << x*2 << endl;

    // string mystr;
    // float price=0;
    // int quantity=0;
    // cout << "Enter price: ";
    // getline (cin,mystr);
    // stringstream(mystr) >> price;
    // cout << "Enter quantity: ";
    // getline (cin,mystr);
    // stringstream(mystr) >> quantity;
    // cout << "Total price: " << price*quantity << endl;

    int z;
    z = addition(5,3);
    // cout << "The result is " << z << endl;


// //  implementing a do while loop  trying to use cs50 libary here
//     int num;
//     do
//     {
//         n = 43;
//     }

//     while (n < 10);
    // ARRAYS
    int billy [] = {2, 3, 4, 5, 6};
    billy[3] = 99;
    int b = billy[billy[0]] = billy[2] + 5;
    int a = billy[3];
    // string greetings[] = {"Hello", "Hey", "Hi"};
    // cout << billy << " Array" << endl;
    // cout << greetings <<" Greet!" << endl;
    // cout << "b is " << b << endl;
    // char century [100][365][24][60][60];
    // cout << sizeof(century);


    int firstarray[] = {5, 10, 15};
    int secondarray[] = {2, 4, 6, 8, 10};

    printarray(firstarray,3);
    printarray(secondarray,5);

    //  MultiDimensional Arrays
    char thirdarray[3][4] = {"H", "E", "L"}; // an array of 3 rows and 4 columns

    // Character Sequence
    char question[] = "Please, enter your first name: "; // string literal constant
    char greeting[] = "Hello, ";
    char yourname[80];
    // cout << question;
    // cin >> yourname;
    // cout << greeting << yourname << "\n";

    // converting char array to string objects
    // string mystring;
    // char myntcs[] = "some text";
    // mystring = myntcs;
    // cout << myString << "\n" << myntcs << "\n";

    // Reference Operator
    int * ted;
    int andy = 25;
    int fred = andy;
    ted = &andy; // & this is the reference operator -- not sure why it is throwing an error research why!!

    // cout << fred << "\n" << ted << "\n";

    // deference operator --to access the value of a pointer
    int beth = *ted;
    // cout << beth << "\n";

    beth = *ted + 5;
    // cout << beth << "\n";

    int firstvalue = 5, secondvalue = 15;
    int * p1, * p2;

    p1 = &firstvalue; // address
    p2 = &secondvalue;

    // cout << p1 << p2 << "\n";

    // deferrence operator
    *p1 = 10; // value pointed by p1 = 10
    *p2 = *p1;
    // cout << *p1 << *p2 << "\n";

    p1 = p2; // value of pointer is copied frfom p2 to p1
    *p1 = 20;
    // cout << p1  << *p1 << "\n";

    // Pointers and Arrays
    int numbers[5];
    int * f;
    // variable operation with pointers
    f = numbers; *f = 10;
    // cout << numbers << " " << f << "\n";

    // int * address = &numbers[0];
    // cout << address << "\n";
    // cout << numbers + 2 << " " << &numbers[2] <<"\n"; // number + 2 means index at positon 0 + 2

    f++; *f = 20;
    f = &numbers[2]; *f = 30;
    f = numbers + 3; *f = 40;
    f = numbers; *(f+4) = 50;

    // cout << f[3] << " " << *(f + 3) << "\n";

    // for (int n=0; n<5; n++) cout << numbers[n] << ", ";

    const int NUM = 8;

    for(int i = 0; i < NUM; i++) { // row loop

        for(int x = NUM - i; x > 0; x--) {
            printf(" ");
        }

        for(int j = 0; j < i; j++) { // colomn loop
            printf("#");
        }

        printf("\n");
    };

    // get_int("pick a number ?");

    // STRINGS
    std::string name = "Can i get your name please ?";

    // for(int i = 0; int w = strlen(name), i < n; i++) {
    //     //  the error means that it can't convert string type to char type
    //     printf("Hello, %c", toupper(name[i]));
    //     return 200;
    // }


    // const std::string player_1 = get_string("Player 1: Please input a letter: ");
    // const std::string player_2 = get_string("Player 2: Please input a letter: ");
    // const int score_1 =  compute_score(player_1);
    // const int score_2 =  compute_score(player_2);

    // if(score_1 > score_2) std::cout << "Player 1 wins!";
    // if(score_2 > score_1) std::cout << "Player 2 wins!";
    // if(score_1 == score_2) std::cout << "Tie!";

    // validate_password("hello");
    // validate_password("h3ll(");
    // validate_password(" h3LL0!");
    if(argc < 1) {
        std::cout << "please input a commandline argument" << std::endl;
        return 1;
    } else if(argc > 2) {
        std::cout << "please use 1 argument" << std::endl;
        return 1;
    }

    const std::string replace_words = replace(argv[1]);
    std::cout << replace_words << std::endl;
}

    std::string get_string(std::string text) {
        std::cout << text << " ";
        std::string data;
        std::cin >> data;
        return data;
    }

    std::string replace(std::string arg) {

        for(char& ch : arg) {
            switch(ch) {
                case 'a':
                    ch = '6';
                    break;
                case 'e':
                    ch = '3';
                    break;
                case 'i':
                    ch = '1';
                    break;
                case 'o':
                    ch = '0';
                    break;
            }
        }

        return arg;
    }

    void validate_password(std::string password) {
        bool is_uppercase, is_lowercase, is_number, is_symbol = false;

        for(int index = 0; index < password.size(); index++) {
            if(password[index] >= 'A' && password[index] <= 'Z') is_uppercase = true;
            if(password[index] >= 'a' && password[index] <= 'z') is_lowercase = true;
            if(password[index] >= 0 && password[index] <= 9) is_number = true;
            if(password[index] >= '!' && password[index] <= '.') is_symbol = true;
        }
        std::string is_valid_password = is_uppercase && is_lowercase && is_number && is_symbol ? "Password Valid!" :
        "Your password needs at least one uppercase letter, lowercase letter, number and symbol!";

        std::cout << is_valid_password << std::endl;
    }

    int compute_score(std::string word) {
        const int POINTS[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
        int score_points = 0;

        for(int index = 0; index < word.size(); index++) {
            // Converts to Uppercase
            if (word[index] >= 'a' && word[index] <= 'z') {
                score_points += POINTS[word[index] - 97];
            }

            if(word[index] >= 'A' && word[index] <= 'Z') {
                score_points+= POINTS[word[index] - 65];
            }
        }
        return score_points;
    }

    void printarray(int arg[], int length) {
        for (int n=0; n<length; n++) {
            // cout << arg[n] << " ";
            // cout << "\n";
        }
    };

    void duplicate (int& a, int& b, int& c) {
        a*=2;
        b*=2;
        c*=2;
    }

// // Function
// int get_text(void)
// {
//     int n;
//     do
//     {
//         n = "Testing";
//     }

//     while (n == "");
//     return n
// }

// // Sideeffect function
// void printout(int text)
// {
//     for (int i = 0; i < text.length; i++)
//     {
//         for (int j = o; j < text.length; j++)
//         {
//             printf("dont't know what i am doing")
//         }

//         printf("\n")
//     }
// }

int addition (int a, int b) {
    int r;
    r=a+b;
    return (r);
}