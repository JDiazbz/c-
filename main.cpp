/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.


*******************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void myFunction();//1
double addNumbers(double, double);//2
int twice(int);//3 
string calculateGrade(int);//4 
void printOddorEven(int);//5 
bool isLeapYear(int);//6 
string checkSign(int);//7 
string vowelOrConsonant(char);//8
string ageCategory(int);//9
string triangleType(int, int, int);//10
double maxNumber(double, double);//11
double minNumber(double, double);//12
double squareNumber(double);//13
double areaOfCircle(double);//14
double circumferenceOfCircle(double);//15



int main() 
{
    myFunction();//1
    
    addNumbers(5, 5);//2 
    
   int num, result;//3 
    cout << "Enter a number: ";
    cin >> num;

    result = twice(num);
    cout << "Twice the number: \n" << result << endl;
    
   int score;//4 
    cout << "Enter a score: ";
    cin >> score;

    string resul= calculateGrade(score);
    cout << "Grade: " << resul << endl;
    
    printOddorEven(15);//5 
    
    int year;//6 
    bool setboolalpha;
    
    cout << "Enter a year: ";
    cin >> year;

    bool isLeap = isLeapYear(year);

    cout << fixed << boolalpha;
    cout << isLeap<<endl;
   
    
    int numb;//7
    cout << "Enter a number: ";
    cin >> num;

    string resu = checkSign(num);
    cout << "Sign: " << resu << endl;
    
    char c;//8
    cout << "Enter a character: ";
    cin >> c;

    string res = vowelOrConsonant(c);
    cout << "Result: " << result << endl;
    
      int age;//9
    cout << "Enter an age: ";
    cin >> age;

    string resol= ageCategory(age);
    cout << "Category: " << resol << endl;
    
    int side1, side2, side3;//10
    cout << "Enter the lengths of the sides of a triangle: ";
    cin >> side1 >> side2 >> side3;

    string reso = triangleType(side1, side2, side3);
    cout << "Triangle type: " << reso << endl;
    
    double numb1, numb2;//11
    cout << "Enter two numbers: ";
    cin >> numb1 >> numb2;
     
    result = maxNumber(numb1, numb2);
    cout << "Max number: " << fixed << result << endl;
    
     double numbe1, numbe2;//12
    cout << "Enter two numbers: ";
    cin >> numbe1 >> numbe2;

    double resoolt = minNumber(numbe1, numbe2);
    cout << "Min number: " << fixed << setprecision(2) << resoolt << endl;
    
    double numbe;//13
    cout << "Enter a number: ";
    cin >> numbe;

    double resoult = squareNumber(numbe);
    cout << "Square: " << fixed << resoult << endl;
    
     double radius;//14
    cout << "Enter the radius of a circle: ";
    cin >> radius;

    double resouolt = areaOfCircle(radius);
    cout << "Area: " << fixed << resouolt << endl;
    
     double radiu;//15
    cout << "Enter the radius of a circle: ";
    cin >> radiu;

    double resooult = circumferenceOfCircle(radiu);
    cout << "Circumference: " << fixed << setprecision(2) << resooult << endl;









    return 0;
}

void myFunction()//1
{
    cout<<"Joel Diaz"<<endl;
}
double addNumbers(double num1, double num2)//2

{
    double sum= num1+ num2;
    cout<<sum<<endl;
    return sum;
}

int twice(int num){//3
    
    int result = num * 2;
    return result;
    }
    
string calculateGrade(int score){//4
    string grade;
    
     if (score >= 90) {
        grade = "A";
    } else if (score >= 80) {
        grade = "B";
    } else if (score >= 70) {
        grade = "C";
    } else if (score >= 60) {
        grade = "D";
    } else {
        grade = "F";
    }

    return grade;
}

void printOddorEven(int number){//5 
    if(number %2!=0)
    cout<<"Number 15 is odd \n";
}

bool isLeapYear(int year) {//6 
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    } else {
        return false;
    }
} 

string checkSign(int numb) {//7
    if (numb > 0) {
        return "Positive \n ";
    } else if (numb < 0) {
        return "Negative \n";
    } else {
        return "Zero \n";
    }
}

string vowelOrConsonant(char c) {//8 
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return "Vowel";
    } else {
        return "Consonant";
    }
}

string ageCategory(int age) {//9
    if (age < 13) {
        return "Child";
    } else if (age >= 13 && age <= 19) {
        return "Teenager";
    } else {
        return "Adult";
    }
}

string triangleType(int side1, int side2, int side3) {//10
    if (side1 == side2 && side2 == side3) {
        return "Equilateral";
    } else if ((side1 == side2 && side2 != side3) || (side2 == side3 && side3 != side1) || (side3 == side1 && side1 != side2)) {
        return "Isosceles";
    } else {
        return "Scalene";
    }
}

double maxNumber(double numb1, double numb2) {//11
    if (numb1 > numb2) {
        return numb1;
    } else {
        return numb2;
    }
}

double minNumber(double numbe1, double numbe2) {//12
    if (numbe1 < numbe2) {
        return numbe1;
    } else {
        return numbe2;
    }
}
double squareNumber(double numbe) {
    return numbe* numbe;
}

double areaOfCircle(double radius) {
    const double PI = 3.1415;
    return PI * radius * radius;
}

double circumferenceOfCircle(double radiu) {//15
    const double PI = 3.1415;
    return 2 * PI * radiu;
}