#include<stdio.h>
int main()
{

int i;
int ans1,ans2,ans3,ans4,ans5;
int point1,point2,point3,point4,point5;
int point01,point02,point03,point04,point05;
int total1,total2,total3;

printf("   welcome to the game\n\n");
printf("> press 7 to start the game\n ");
printf("> press 0 to quit the game\n");

scanf("%d", &i);

if (i == 7)
{
printf("the game has started\n\n");
}
else if (i == 0)
{
printf("the game has ended\n\n");
}
else
{
printf("invalid \n\n");    
}
if (i == 7)
{
printf("1) which one is the first search engine in internet?\n\n");
printf("1) google\n");
printf("2) archie\n");
printf("3) wais\n");
printf("4) altavista\n");

printf("enter your answer:");
scanf("%d", &ans1);}
if (ans1==2)
{
printf("correct answer\n");
point01 = 5;
printf("you have scored %d point\n", point01);    
}
else
{
printf("wrong answer\n");
point01 = 0;
printf("you have scored %d point\n",point01);
}
printf("2) which one is the first web browser invented in 1990?\n\n");
printf("1) internet explorer\n");
printf("2) mosic\n");
printf("3) mozilla\n");
printf("4) nexus\n");

printf("enter your answer:");
scanf("%d", &ans2);
if (ans2 == 4)

{
printf("correct answer\n");
point2 = 5;
printf("you have scored %d point\n",point2);
}
else
{
printf(" wrong answer\n");
point02 = 0;
printf("you have scored %d point\n", point02);
}
printf("3) first computer virys is known as?\n");
printf("1) rabbit\n");
printf("2) creeper virus\n");
printf("3) E1k cloner\n");
printf("4) SCA virus\n");


printf("Enter your answer:");
scanf("%d", &ans3);
 
 if (ans3 == 2)
{
printf("Correct answer\n");
point3 =5;
printf("you have scored %d point\n", point3);
}
else 
{
printf("wrong answer\n");
point03 = 0;
printf("you have scored %d point\n", point03);
}
printf("4) Firewall in computer is used for\n\n");
printf("1) Security\n");
printf("2) Data Transmission\n");
printf("3) Monitoring\n");
printf("4) Authentication\n");

printf("Enter Your Answer\n");
scanf("%d", &ans4);
if (ans4 == 1)
{
printf("Correct Answer\n");
point4 = 5;
printf("you have scored %d point\n", point4);
}

else 
{
printf("Wrong Answer\n");
point04 = 0;
printf("you have scored %d point\n", point04);
}
printf("5) Which of the following is not a database management software?\n\n");
printf("1) Mysql\n");
printf("2) Oracle\n");
printf("3) Sobal\n");
printf("4 Sybase\n");

printf("Enter Your Answer:");
scanf("%d", &ans5);


if (ans5 == 3)
{
printf("Correct Answer\n");
point5 = 5;
printf("You have scored %d point\n", point5);
}
else
{
printf("Wrong Answer\n");
point05 = 0;
printf("You have scored %d point\n", point05);

}
total1 = point01+point02+point03+point04+point05+point1+point2+point3+point4+point5;
printf("you have got total mark %d \n", total1);
}

