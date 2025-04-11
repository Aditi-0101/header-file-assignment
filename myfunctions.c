#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum value: %d\n", max);
}

void findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Minimum value: %d\n", min);
}

void sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("Sum of array elements: %d\n", sum);
}

void sumofArrays(int arr1[], int arr2[], int size){
    int sum[size];
    for(int i=0;i<size;i++){
        sum[i]=arr1[i]+arr2[i];
    }
    printf("Sum of arrays: ");
    for(int i=0;i<size;i++){
        printf("%d ",sum[i]);
    }
    printf("\n");
}

void reverseArray(int arr[], int size) {
    printf("Reversed Array: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void getIndexOfElement(int arr[], int size, int element){
    int index=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            index=i;
            printf("Index: %d\n",index);
            return;
        }
    }
    printf("Element not found\n");
}

void replaceElement(int arr[], int size, int oldVal, int newVal){
    int found=0;
    for(int i=0;i<size;i++){
        if(arr[i]==oldVal){
            arr[i]=newVal;
            found=1;
        }
    }
    if(!found){
        printf("Element not found \n");
    }
    printf("New array: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void deleteElement(int arr[], int size, int element){
    int index=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            index=i;
            break;
        }
    }
    if(index!=-1){
        for(int i=index;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
    }
    else{
        printf("Element not found\n");
        return;
    }
    printf("New Array: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void factorial(int n){
    if(n<0){
        printf("Factorial not defined for negative numbers");
    }
    else{
        int f=1;
        for(int i=1;i<=n;i++){
            f*=i;
        }
        printf("Factorial: %d\n",f);
    }
}

void isPrime(int num){
    int i, isPrime = 1;
    if (num < 2) {
        isPrime = 0;
    }
    else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime){
        printf("%d is a prime number.\n", num);
    }
    else{
        printf("%d is not a prime number.\n", num);
    }
}

void isPalindrome(int num){
    int original=num, reversed=0, digit;
    if(original<0){
        printf("Negative numbers cannot be palindromes\n");
    }
    while(num>0){
        digit=num%10;
        reversed=reversed*10+digit;
        num/=10;
    }
    if(original==reversed){
        printf("%d is a palindrome number\n", original);
    }
    else{
        printf("%d is not a palindrome number\n", original);
    }
}

void checkEvenorOdd(int num){
    if(num%2==0){
        printf("%d is even\n",num);
    }
    else{
        printf("%d is odd\n",num);
    }
}

void isArmstrong(int num){
    int count=0;
    int temp=num, remainder, power, sum=0;
    while(temp!=0){
        temp/=10;
        count+=1;
    }
    temp=num;
    while(temp!=0){
        remainder=temp%10;
        power=1;
        for(int i=0;i<count;i++){
            power*=remainder;
        }
        sum+=power;
        temp/=10;
    }
    if(sum==num){
        printf("%d is an Armstrong number\n", num);
    }
    else{
        printf("%d is not an Armstrong number\n", num);
    }
}

void isPerfect(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        printf("%d is a perfect number\n",num);
    }
    else{
        printf("%d is not a perfect number\n",num);
    }
}

void eligibletovote(int age, int eligibleage){
    if(age>=eligibleage){
        printf("Person is eligible to vote\n");
    }
    else{
        printf("Person is not eligible to vote\n");
    }
}

void simpleCalculator(float num1, float num2, char operator){
    float result;
    switch(operator){
        case '+':
            result=num1+num2;
            printf("%.2f\n",result);
            break;
        case'-':
            result=num1-num2;
            printf("%.2f\n",result);
            break;
        case'*':
            result=num1*num2;
            printf("%.2f\n",result);
            break;
        case'/':
            if(num2!=0){
                result=num1/num2;
                printf("%.2f\n",result);
            }
            else{
                printf("A number cannot be divided by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }
}

void isLeapYear(int year){
    if((year%4==0 && year%100!=0)||(year%400==0)){
        printf("%d is a leap year\n", year);
    }
    else{
        printf("%d is not a leap year\n", year);
    }
}

void grademarking(int marks){
    if(marks>90){
        printf("Grade: A\n");
    }
    else if(marks>80 && marks<=90){
        printf("Grade: B\n");
    }
    else if(marks>70 && marks<=80){
        printf("Grade: C\n");
    }
    else if(marks>60 && marks<=70){
        printf("Grade: D\n");
    }
    else if(marks>50 && marks <=60){
        printf("Grade: E\n");
    }
    else{
        printf("Fail\n");
    }
}

void calculateSI(float principal, float rate, float time){
    float SI;
    if(principal>0 && rate>0 && time>0){
        SI=(principal*rate*time)/100;
        printf("Simple Interest: %.2f\n",SI);
    }
    else{
        printf("Invalid Values\n");
    }
}

void isLowerCaseorUpperCase(char ch){
    if(ch>='A' && ch<='Z'){
        printf("%c is in uppercase\n", ch);
    }
    else if(ch>='a' && ch<='z'){
        printf("%c is in lowercase\n", ch);
    }
    else{
        printf("%c in not a letter\n", ch);
    }
}

void isVowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("%c is a vowel\n", ch);
    }
    else{
        printf("%c is not a vowel\n", ch);
    }
}

void convertCase(char ch){
    if(ch>='A' && ch<='Z'){
        ch=ch+32;
        printf("%c\n", ch);
    }
    else if(ch>='a' && ch<='z'){
        ch=ch-32;
        printf("%c\n", ch);
    }
    else{
        printf("Invalid Input\n");
    }
}

void sumOfDigits(int num){
    int sum=0;
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    printf("%d\n",sum);
}

void fibonacciSeries(int n){
    int a=0, b=1, next;
    for(int i=0;i<n;i++){
        printf("%d ", a);
        next=a+b;
        a=b;
        b=next;
    }
    printf("\n");
}

void evenwithinrange(int start, int end){
    for(int i=start;i<end;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}

void oddwithinrange(int start, int end){
    for(int i=start;i<end;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}

void areaofCircle(float radius){
    float pi=3.14;
    float area;
    if(radius>0){
        area=pi*radius*radius;
        printf("%.2f\n",area);
    }
    else{
        printf("Invalid values\n");
    }
}

void areaofRectangle(float length, float width){
    float area;
    if(length>0 && width>0){
        area=length*width;
        printf("%.2f\n",area);
    }
    else{
        printf("Invalid values\n");
    }
}

void areaofTriangle(float base, float height){
    float area;
    if(base>0 && height>0){
        area=0.5*base*height;
        printf("%.2f\n",area);
    }
    else{
        printf("Invalid values\n");
    }
}

void areaofSquare(float side){
    float area;
    if(side>0){
        area=side*side;
        printf("%.2f\n", area);
    }
    else{
        printf("Invalid values\n");
    }
}

void numberswithinrange(int start, int end){
    for(int i=start;i<=end;i++){
        printf("%d\n", i);
    }
}

void iterationsum(int start, int end){
    int sum=0;
    for(int i=start;i<=end;i++){
        sum=sum+i;
        printf("%d\n",sum);
    }
}

void sumwithinrange(int start, int end){
    int sum=0;
    for(int i=start;i<=end;i++){
        sum=sum+i;
    }
    printf("%d\n",sum);
}

void isadam(int num){
    int original=num, rev=0, square, squareOfRev, revSquare=0;
    square=original*original;
    int temp=original;
    while (temp>0) {
        rev= rev* 10 + temp % 10;
        temp/= 10;
    }
    squareOfRev=rev*rev;
    while(squareOfRev>0){
        revSquare= revSquare* 10 + squareOfRev % 10;
        squareOfRev /= 10;
    }
    if(square==revSquare){
        printf("%d is an adam's number\n", num);
    }
    else{
        printf("%d is not an adam's number\n", num);
    }
}