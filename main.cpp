/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    
    //program 1 
    int Number;
    {
        cout<<" Enter Number: ";//enter number
        cin>>Number;
        
        if (Number %2 != 0)//see if divisble by 2 
            cout<<"Number is odd. \n";
            
        else 
            cout<<"Number is even. \n";
    
    }
    
    cout<<"1******************************************************************1 \n";
    
    {
     //program 2
    cout << "Enter a Number: ";//enter number
    cin >> Number;
    
    if (Number > 0) { //see if pos, neg or = to 0
        cout << Number << " is a positive number. \n" << endl;
    } 
    else if (Number == 0) {
        cout << Number << " is equal to zero. \n" << endl;
    } 
    else {
        cout << Number << " is a negative number. \n" << endl;
    }
    }
    
    cout<<"2******************************************************************2 \n";
    
    {
    //program 3
    int score;
    int Grade;
    
    {
    cout<<"Enter score: ";//enter score
    cin>>score;
    
    if (score>=90 && score<=100)//see in which category score falls on
        cout<<"Grade is A. \n";
        
    else if (score <=89 && score >=80)
             cout<<"Grade is B. \n";
            
    else if (score <=79 && score >=70)
             cout<<"Grade is C. \n";
             
    else if (score <=69 && score >=60)
             cout<<" Grade is D. \n";
             
    else
        cout<<"Grade is F. \n";
         
    }
    }
    
    cout<<"3******************************************************************3 \n";
    
    {
    //program 4
    int Num1;
    int Num2;
    
    cout<<"Enter Num1 \n";
    cin>>Num1;
    
    cout<<"Enter Num2 \n";
    cin>>Num2;
    
    if (Num1 > Num2 )//see which number is greater
        cout<<"Num1 is greater \n";
    
    else if(Num2< Num1)
            cout<<"Num2 is greater \n";
    else
        cout<<"They are equal \n";
    }
    
    cout<<"4*****************************************************************4 \n ";
    
    {
     //program 5
    int Num1;
    int Num2;    
    int Num3;
    
    cout<<"Enter Num1 \n";
    cin>>Num1;
    
    cout<<"Enter Num2 \n";
    cin>>Num2;
    
    cout<<"Enter Num3 \n";
    cin>>Num3;
    
    if (Num1 < Num2 && Num1 < Num3)//see which number is smaller
        cout<<"Num1 is smaller \n";
        
    else if (Num2 < Num1 && Num2 < Num3)
             cout<<"Num2 is smaller \n";
             
    else if (Num3 < Num1 && Num3 < Num2)
             cout<<"Num3 is smaller \n";
    else
        cout<<"They are equal \n";  
        
    }
    
     cout<<"5*****************************************************************5 \n";

    {   //program 6
        char letter; 
        
        cout<<"Enter character: \n";//enter character
        cin>>letter;
        
        if (letter == 'a'&& letter=='e' && letter=='i'&& letter=='o'&& letter=='u')
            cout<<"Character is a vowel \n";//see is character is a vowel
            
        else
            cout<<"Character is a consonant \n";//or consonant
    }
    
    cout<<"6*****************************************************************6 \n";
    
    {
        //program 7
    double num1, num2;
    char operation;
   
    cout<<"Enter operation \n";//decide which operation to enter
    cin>>operation;
   
    cout<<"Enter number \n";//enter number
    cin>>num1;
   
    cout<<"Enter number \n";
    cin>>num2;
   
    switch(operation) { //give sum depending on operation chosen 
    case '+':
           cout<<" Sum "<<num1 +num2<<endl;
         break;
    case '-':
           cout<<" Sum "<<num1 -num2<<endl;
         break;
    case '*':
           cout<<" Sum "<<num1 *num2<<endl;
         break;
    case '/':
           cout<< " Sum " << num1 / num2 << endl;
         break;
    default:
           cout<<" Sum ";
    }
   
    }
    
    cout<<"7*****************************************************************7 \n";
    
    {
        //program 8
        int month, days;
    
    cout<<"Enter month number \n";
    cin>>month;
    
    switch(month) { 
        case 2:
              days = 28;// February - 28 or 29 days depending on leap year
            break;
         
        case 4:
        case 6:
        case 9:
        case 11:
              days = 30; // April, June, September, November - 30 days each
            break;
        
        default: 
              days = 31; // January, March, May, July, August, October, December - 31 days each
            break;
            
    }
    
     cout << "The month " << month << " has " << days << " days." << endl;
            
    }
    
    cout<<"8*****************************************************************8 \n";
    
    {//program 9
    double price, amount, discount;
    double finalprice;
    
    {
    cout<<"Enter amount \n";//enter amount
    cin>>amount;
     
     
    if(amount>=100 && amount<500){ //see total of products & give dicount
       discount=amount *10/100;
    }
    else
      {discount=amount *20/100;
      }
    
    
    cout<<"Discount is: \n"<<discount<<endl;
    }

    finalprice =amount -discount;//give final price/outcome
    
    cout<<"Final price is: \n"<<finalprice;
    
    }
    
    cout<<"\n9*****************************************************************9 \n";
    
    {
        //program 10
        char color;

    cout<<"Enter the color of the traffic light (Red, Yellow, Green) \n";
    cin>>color; //enter color


    switch(color){ //see what action to do depending on color
        case 'r':
                cout<<"Stop. \n";
            break;
        case 'y':
                cout<<"Slow down.. \n";
            break;
        case 'g':
                cout<<"Go... \n";
            break;
    }
    }
    
    cout<<"\n10*************************************************************10 \n";
    
    { //program 11
        int weekday, number;
     
     cout<<"Enter number: (0-6) \n";//enter number
     cin>>weekday;
     
     switch(weekday){//see where it falls on & give result
        case 0:
            cout<<"Sunday \n";
            break;
        case 1:
            cout<<"Monday \n";
            break;
        case 2:
            cout<<"Tuesday \n";
            break;
        case 3:
            cout<<"Wednesday \n";
            break;
        case 4:
            cout<<"Thursday \n";
            break;
        case 5:
            cout<<"Friday \n";
            break;
        case 6:
            cout<<"Saturday \n";
            break;
    }
    }
    
    cout<<"\n11*************************************************************11 \n";

    {
        //program 12
        int years, salary;
    double bonus;

    cout<<"Enter your years worked: \n";//enter years
    cin>>years;

    cout<<"Enter your gross salary: \n";//enter salary
    cin>>salary;


    if( years >= 5 ) {  //calculate bonus depending on years worked and gross salary
    bonus= salary *10/100;
    }
    else {
    bonus= salary *5/100;
    }

    cout << "Your bonus amount is $  " << bonus << endl;//give bonus

    }
    
    cout<<"\n12*************************************************************12 \n";
    
    {
        //program 13
    double price, amount, discount;
    double finalprice;
    
    {
    cout<<"Enter amount \n";//enter amount
    cin>>amount;
     
     
    if(amount<50){ //see total of products & give dicount
       discount=0;
    }
    else if(amount >= 50 && amount <=200)
      {discount=amount *5/100;
      }
    else
       { discount =amount *10/100;
    
    cout<<"Discount is: \n"<<discount<<endl;
    }

    finalprice =amount -discount;//give final price/outcome
    
    cout<<"Final price is: \n"<<finalprice;
    }

    }
    
    cout<<"\n13*************************************************************13 \n";
    
    {
        //program 14
        int number;

    cout<<"Enter number \n";//enter number
    cin>>number;

    if(number %3 == 0 && number %5 ==0)//see if # can be divided by 3 & 5
       cout<<"Number is divisble by 3 & 5 \n";
   
   else 
       cout<<"Number is not divisble by 3 & 5";
    }
    
    cout<<"\n14*************************************************************14 \n";
    
    {
        //program 15
        double age;

    cout<<"Enter your age: \n";
    cin>>age;

    if(age>= 18)
       cout<<"You are eligible to vote \n";
  
    else
        cout<<"You do NOT fulfill the requirments to be eligible to vote \n";
    }
    
    cout<<"\n15*************************************************************15 \n";
    
    {
        //program 16 
         int age;
        
        cout<<"Enter your age: \n";
        cin>>age;
        
        if(age >= 0 && age <=12)
           cout<<"You are a child \n";
           
        else if(age >=13 && age <= 19)
                cout<<"You are a teenager \n";
        
        else if(age>=20 && age <=59)
                cout<<"Your are an adult \n";
                
        else
            cout<<"You are a senior \n";
    }
    
    cout<<"\n16*************************************************************16 \n";
    
    {
        //program 17
        int year;

    cout<<"Enter desired year: \n";//enter year 
    cin>>year;
    /*find out if it's a leap year:
     1. The year must be evenly divisible by 4.
     2. If year is also evenly divisible by 100, then it's NOT a leap year, unless...
     3. ...it's also evenly divisible by 400. Then it is a leap year.*/

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout << year << " is a leap year." << endl;
    }
    else {
        cout << year << " is not a leap year." << endl;
    }
    }
    
    cout<<"\n17*************************************************************17 \n";
    
    {
        //program 18
        double side1, side2, side3;

cout<<"Enter the first side: \n";//enter lenght os side
cin>>side1;

cout<<"Enter the second side: \n";
cin>>side2;

cout<<"Enter the third side: \n";
cin>>side3;

if(side1==side2 && side1==side3) //discover what type of triangle based on length of side
   cout<<"Triangle is a Equilateral Triangle \n";
   
else if((side1 == side2 || side1 == side3) || (side2==side3 || side2==side1))
        cout<<"Triangle is a Isosceles Triangle \n";

else
    cout<<"Triangle is a Scalene Triangle \n";
   
    }
    
    cout<<"\n18*************************************************************18 \n";
    
    {
        //program 19
    double packageweight;

    cout<<"Enter package weight: \n";
    cin>>packageweight;
    
    if(packageweight>=0 && packageweight<=1)
       cout<<"Shipping cost is: $5 \n";
    
    else if(packageweight>=1.1 && packageweight<=3)
            cout<<"Shipping cost is: $10 \n";
        
    else if(packageweight>=3.1 && packageweight <=5)
            cout<<"Shipping cost is: $15 \n";
        
    else
        cout<<"Shipping cost is: $20 \n";
    }
    
    cout<<"\n19*************************************************************19 \n";
    
    {
        //program 20
        double angle1, angle2, angle3;

    cout<<"Enter the first angle: \n";//enter angles 1, 2 and 3
    cin>>angle1;

    cout<<"Enter the second angle: \n";
    cin>>angle2;

    cout<<"Enter the third angle: \n";
    cin>>angle3;

    if(angle1 + angle2 + angle3 ==180)
       cout<<"Shape is a valid trianlge \n";//discover if angles = to 180
   
    else
        cout<<"Shape is NOT a valid trianlge \n";
    }
    
    cout<<"\n20**************************************************************20 \n";
    
    {
        //program 21
    double score, attendance;

    cout<<"Enter your exam score: \n";//enter score
    cin>>score;

    cout<<"Enter your attendance percentage: \n";//enter attendance percentage
    cin>>attendance;

    if(score>60 && attendance > 75)
       cout<<"Congratulations! You pass the course \n";//see if you passed, almost passed or failed
   
    else if(score>60 && attendance <75 || score<60 && attendance >75)
            cout<<"Wow! You almost passed the course \n";
        
    else
        cout<<"Tough luck! You failed the course \n";
    }
    
    cout<<"\n21**************************************************************21 \n";
    
    {
        //program 22
        double x, y;
    
    cout << "Enter the x-coordinate: ";//enter coordinates
    cin >> x;
    
    cout << "Enter the y-coordinate: ";
    cin >> y;

    if (x == 0 && y == 0) { //see where coordinates fall
        cout << "The point is at the origin (0, 0). It does not belong to any quadrant." << endl;
    }
    else if (x > 0 && y >= 0) {
        cout << "The point (" << x << ", " << y << ") belongs to Quadrant I." << endl;
    }
    else if (x < 0 && y >= 0) {
        cout << "The point (" << x << ", " << y << ") belongs to Quadrant II." << endl;
    }
    else if (x < 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") belongs to Quadrant III." << endl;
    }
    else if (x > 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") belongs to Quadrant IV." << endl;
    }
    }
    
    cout<<"\n22**************************************************************22 \n";
    
    {
        //program 23
    double temp, fahrenheit, celsius; // input temperature
    char scale;  // input temperature scale ('C' for Celsius or 'F' for Fahrenheit)

    // Ask the user for the temperature value and its scale
    cout << "Enter a temperature: \n";
    cin >> temp;

    cout << "Enter the scale (C or F): \n";
    cin >> scale;

    // Convert the temperature to the desired scale
    if (scale == 'C') {
        fahrenheit = (temp * 9.0/5.0) + 32.0; // Celsius to Fahrenheit formula
        cout << temp <<"°C is "<< fahrenheit <<"°F. " <<endl;
    }
    else if (scale == 'F') {
             celsius = (temp - 32.0) * 5.0/9.0; // Fahrenheit to Celsius formula
             cout << temp <<"°F is "<< celsius <<"°C. " <<endl;
    }
    else {
        cout<<"Invalid scale. Please enter either 'C' or 'F'. " <<endl;
        return 1; // terminate the program with an error code
    }
    }
    
    cout<<"\n23**************************************************************23 \n";
    
    {
      //program 24
      
    int year, month; 

    
    cout<<"Enter a year: \n";//enter year
    cin>>year;
    
    cout<<"Enter a month (1-12): \n";//enter month
    cin>>month;

    // Determine the number of days in the given year and month
    switch(month) {
        case 2: { // February
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
                   cout<<"February "<<year<<" has 29 days. "<<endl;
        }
            else {
                cout<<"February " <<year<<" has 28 days. "<<endl;
            }
            break;
        }
        case 4: 
        case 6: 
        case 9: 
        case 11: { // April, June, September, November
                cout<<"The "<<month<<" month of the year "<<year<<" has 30 days. "<<endl;
            break;
        }
    default: { // January, March, May, July, August, October, December
                cout<<"The "<<month<<" month of the year " <<year<<" has 31 days. "<<endl;
            break;
        }
    }
    }
    
    cout<<"\n24*************************************************************24 \n";
    
    {
        //program 25
        double age;

    cout<<"Enter your age: \n";
    cin>>age;
    
    if(age>=0 && age<=4)
       cout<<"Movie ticket is FREE. \n";
    
    else if(age>=5 && age<=12)
            cout<<"Movie ticket cost is $8. \n";
        
    else if(age>=13 && age<=59)
            cout<<"Movie ticket cost is $12. \n";
        
    else
        cout<<"Movie ticket cost is $6. \n";
    }
    
    cout<<"\n25*************************************************************25 \n";
    
    {
        //program 26
    double height;

   cout<<"Enter your height (centimeters) : \n";
   cin>>height;
  
   if(height>=0 && height <=149)
      cout<<"You are short. \n";
 
   else if(height>= 150 && height<=180)
           cout<<"You are average. \n";
        
   else
       cout<<"You are tall. \n";
    }
    
    cout<<"\n26*************************************************************26 \n";
    
    {
        //program 27
        string password; 

    // enter your password
    cout << "Enter your password: \n";
    cin>>password;

    // Determine the strength of the password based on its length
    if (password.length() < 8) {
        cout << "Weak password. Consider using a longer one. \n"<<endl;
    }
    else if (password.length() >= 8 && password.length() <= 12) {
             cout << "Medium-strength password. \n"<<endl;
    }
    else {
        cout << "Strong password! " <<endl;
    }
    }
    
    cout<<"\n27**************************************************************27 \n";
    
    {
        //program 28
        double gigabytes;
 
    cout<<"Enter amount of gigabytes used: \n";
    cin>>gigabytes;
 
    if(gigabytes >=0 && gigabytes <=2)
       cout<<"The cost of your phone plan is $30. \n";
    
    else if(gigabytes>=2.1 && gigabytes<= 5)
            cout<<"The cost of your phone plan is $40. \n";
    
    else if(gigabytes >= 5.1 && gigabytes <=10)
            cout<<"The cost of your phone plan is $50. \n";
        
    else
        cout<<"The cost of your phone plan is $60. \n";
    }
    
    cout<<"\n28*************************************************************28 \n";
    
    {
        //program 29
    double age;
    char student;
 
    cout<<"Enter your age: \n";
    cin>>age;
  
    cout<<"Are you a student? (Y/N) \n";
    cin>>student;
 
    if(age<18 && student =='y')
       cout<<"Your Musuem ticket is FREE. \n";
       
    else if(age>=18 && age <=25 && student =='y')
            cout<<"The cost of your Musuem ticket is $10. \n";

    else if(age>=18 && age<=25 && student =='n')
            cout<<"The cost of your Musuem ticket is $15. \n";
        
    else
        cout<<"The cost of your Musuem ticket is $20. \n";
          
    }
    
    cout<<"\n29*************************************************************29 \n";
    
    {
        //program 30
    string mood; // enter mood

     // Ask for their current mood
    cout << "How are you feeling today? (happy, sad, excited, or scared): \n";
    getline(cin, mood);

    // Determine and suggest a genre based on the user's mood
    if (mood == "happy" || mood == "excited") {
        cout<<"You should watch a comedy or action movie! \n"<<endl;
    }
    else if (mood == "sad") {
             cout<<"A drama might help you process your feelings. \n"<<endl;
    }
    else if (mood == "scared") {
        cout<<"Horror movies can be a thrilling way to face your fears! \n"<<endl;
    }
    else {
        cout<<"Sorry, I didn't understand that mood. Please Try again! \n"<<endl;
    }
    }
    
    return 0;
}