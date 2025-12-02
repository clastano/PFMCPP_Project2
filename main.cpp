#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 
 int
 unsigned int
 float
 double
 char
 bool
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int size = 4;
    int height = 67;
    int weight = 23;
    unsigned int dontKnow = 0;
    unsigned int inputValue = 8922;
    unsigned int rawData = 1234;
    float amount = 4.5f;
    float testValue = 78.f;
    float readCount = 323.8f;
    double iterations = 4;
    double divisionOutcome = 3.9;
    double mainValue = 265.89;
    char firstLetter = 'a';
    char separator = '|';
    char plusSign = '+';
    bool isSuccess = true;
    bool computeVallue = false;
    bool hasInternalComponent = true;
    
    ignoreUnused(number, size, height, weight, dontKnow, inputValue, rawData, amount, testValue, readCount, iterations, divisionOutcome, mainValue, firstLetter, separator, plusSign, isSuccess, computeVallue, hasInternalComponent); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void openCase(int secureKey = -1)
{
    ignoreUnused(secureKey); 
}

/*
 2)
 */
char getFirstLetterOfTitle(int titleId, bool searchOnLine = true)
{ 
    ignoreUnused(titleId, searchOnLine);
    return {}; 
}

/*
 3)
 */
int countHotelReservations(int hotelId, char customerType = 'a', float costLimit = 1000.f)
{ 
    ignoreUnused(hotelId, customerType, costLimit);
    return {}; 
}

/*
 4)
 */
bool isYourHouseYellow(char cityId = 'B', int zipCode = 90210)
{ 
    ignoreUnused(cityId, zipCode);
    return {}; 
}

/*
 5)
 */
float computeBalance(bool applyRoundValues = true, char algorithmId = 'g')
{
    ignoreUnused(applyRoundValues, algorithmId);
    return {}; 
}

/*
 6)
 */
void verifyPresence(char itemType, float bucketId = 9999)
{
    ignoreUnused(itemType, bucketId); 
}

/*
 7)
 */
bool isTestPassed(char testIdentifier = 'k', double testInputValue = 4.56)
{ 
    ignoreUnused(testIdentifier, testInputValue);
    return {}; 
}

/*
 8)
 */
float getCircleRadius(char shapeId = 'r', double circleLength = 234.4, int parentContainer = 3)
{
    ignoreUnused(shapeId, circleLength, parentContainer); 
    return {}; 
}

/*
 9)
 */
void cantThinkAnyFunctionsAnymore(bool guess = true)
{
    ignoreUnused(guess);
}

/*
 10)
 */
bool didIGetItRight(char moneySwapType = 'h', bool isRushTime = false, int divider = 7)
{
    ignoreUnused( moneySwapType, isRushTime, divider);
    return {}; 
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    openCase();
    
    //2)
    auto firstLetterOfTitle = getFirstLetterOfTitle(789, false);
    
    //3)
    auto reservationsCount = countHotelReservations(45);
    
    //4)
    auto isYellow = isYourHouseYellow('Q');
    
    //5)
    auto balance = computeBalance(false, 'u');
    
    //6)
    verifyPresence('r', 23);
    
    //7)
    auto isPassed = isTestPassed('p', 67);
    
    //8)
    auto radius = getCircleRadius('s', 345, 90);
    
    //9)
    cantThinkAnyFunctionsAnymore(true);
    
    //10)
    auto gotIt = didIGetItRight('e', false, 12);
    
    
    ignoreUnused(carRented, firstLetterOfTitle, reservationsCount, isYellow, balance, isPassed, radius, gotIt);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
