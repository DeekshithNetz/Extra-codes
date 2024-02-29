#include<stdio.h>
#include<conio.h>
int reg();
int login();
int dashboard();
int profile();
int global_score();
int global_avg();
int quiz();
int attendence();
//int quote();
int write_post();
int sourcecode();
int number();
int multiplication ();
int star();
int sourcecode1();
int sourcecode2();
int sourcecode3();
int dev();
//int logindev();
//int devdash();
struct hello
{
int pass,number;
char name[100],mail[100];
int score;
float attendance_percentage;
};
struct hello h[5];
int current_user=0;
int pass_value=1;
//char postwords[1000];
int score=0;
int total=0;
int attendance_percentage=0;
void main()
{
int a,i=0;
clrscr();
printf("hello enter 1 to start\n");
scanf("%d",&a);
if(a==1)
{
home(i);
}
else
{
home(i);
}
getch();
}

/*void transfer()
{
   int i=1;
reg(i);
}*/
int home(int i)
{
int a;
clrscr();
printf("\t\t\tpress 1 for SIGN UP\n\t\t\tpress 2 for login\n");
scanf("%d",&a);
if(a==1)
{
reg(i);
}
else
if(a==2)
{
login();
}
else
{
exit(0);
}
return 0;
}
int reg(int i)
{
clrscr();
if(i<pass_value)
{
printf("\t\t\twelcome to signup page\n");
printf("");
printf("enter name\n");
scanf("%s",h[i].name);
printf("enter G-mail\n");
scanf("%s",h[i].mail);
printf("enter mobile number\n");
scanf("%d",&h[i].number);
printf("enter pass\n");
scanf("%d",&h[i].pass);
i++;
reg(i);
}
else
{
total++;
login();
}
return 1;
}
int login()
{
int l_pass,i;
char l_name[100];
clrscr();
printf("\t\t\twelcome to login page\n");
printf("enter login name\n");
scanf("%s",l_name);
printf("enter pass\n");
scanf("%d",&l_pass);
for(i=0;i<2;i++)
{
if(strcmp(h[i].name,l_name)==0&&h[i].pass==l_pass)
{
clrscr();
printf("login succes\n");
current_user=i;
dashboard(current_user);
return 1;
}
}
printf("login fail\n");
return 0;
}
int dashboard(int current_user)
{
int a;
clrscr();
printf("\t\t\twelcome\n");
printf("\t\t\thello  %s\n\n",h[current_user].name);
printf("\t\t\t________________________________\n");
printf("\t\t\t1.attendence percent checker\n");
printf("\t\t\t________________________________\n");
printf("\t\t\t2.quiz\n");
printf("\t\t\t________________________________\n");
printf("\t\t\t3.profile\n");
printf("\t\t\t________________________________\n");
printf("\t\t\t5.Global quiz score\n");
printf("\t\t\t________________________________\n");
printf("\t\t\t6.Global users attendence Percentage \n");
printf("\t\t\t________________________________\n");
printf("\t\t\t7.Browse code\n");
printf("\t\t\t________________________________\n");
scanf("%d",&a);
if(a==1)
{
attendence(current_user);
}
else
if(a==2)
{
quiz(current_user);
}
else
if(a==3)
{
profile(current_user);
}
/*else
if(a==4)
{
quote();
}*/
else
if(a==5)
{
global_score(current_user);
}
else
if(a==6)
{
global_avg(current_user);
}
else
if(a==7)
{
sourcecode(current_user);
}
/*if(a==8)
{
logindev(current_user);
}*/
else
{
printf("\t\t\tplease enter Correct choice\n");
}
return 1;
}
int profile(int current_user)
{
int a;
clrscr();
printf("\t\t\thi....  %s\n",h[current_user].name);
printf("\t\t\t________________________________\n");
printf("\t\t\tyour mobile number:%d\n",h[current_user].number);
printf("\t\t\t________________________________\n");
printf("\t\t\tg mail            :%s\n",h[current_user].mail);
printf("\t\t\t________________________________\n");
printf("\t\t\tattendence Percent:%f\n",h[current_user].attendance_percentage);
printf("\t\t\t________________________________\n");
printf("\t\t\ttotal highscore   : %d\n ",h[current_user].score);
printf("\t\t\t________________________________\n");
printf("\t\t\tpress 5 to log out\npress 1 to home page\n");
printf("\t\t\t________________________________\n");
printf("\t\t\tAre you a Developer press 3");
scanf("%d",&a);
if(a==5)
{
pass_value++;
home(current_user+1);
}
else
if(a==1)
{
dashboard(current_user);
}
else
if(a==3)
{
dev(current_user);
}
else
{
printf("\t\t\tplease enter a legit value\n");
}
return 0;
}
int global_score(int current_user)
{
int i,enter;
clrscr();
printf("\t\t\tUser name\t\tquiz score\n");
for(i=0;i<total;i++)
{
printf("\t\t\t%s\t\t\t%d\n",h[i].name,h[i].score);
}
printf("\t\t\tpress 1 to go home page\n");
scanf("%d",&enter);
if(enter==1)
{
dashboard(current_user);
}
else
{
dashboard(current_user);
}
return 0;
}
int global_avg(int current_user)
{
int i,choice;
clrscr();
printf("\t\t\tuser name\t\tattendence percent\n");
for(i=0;i<total;i++)
{
printf("\t\t\t%s\t\t%f\n",h[i].name,h[i].attendance_percentage);
}
printf("\t\t\tenter 1 to go home\n");
scanf("%d",&choice);
if(choice==1)
{
dashboard(current_user);
}
else
{
dashboard(current_user);
}
return 0;
}
int quiz(int current_user)
{
    int answer,press;
    clrscr();
    printf("\t\t\tWelcome to the Quiz!\n\n");

    // Question 1
    printf("1. What is the capital of France?\n");
    printf("1. Paris\n2. Berlin\n3. London\n");
    scanf("%d", &answer);
    if (answer == 1) {
	printf("Correct!\n");
	h[current_user].score++;
    } else {
	printf("Wrong answer!\n");
    }
    printf("\n");

    // Question 2
    printf("2. What is the largest country in the world?\n");
    printf("1. Russia\n2. Canada\n3. United States\n");
    scanf("%d", &answer);
    if (answer == 1) {
	printf("Correct!\n");
	h[current_user].score++;
    } else {
	printf("Wrong answer!\n");
    }
    printf("\n");

    // Question 3
    printf("3. What is the name of the tallest mountain in the world?\n");
    printf("1. Mount Everest\n2. Mount Kilimanjaro\n3. Mount McKinley\n");
    scanf("%d", &answer);
    if (answer == 1) {
	printf("Correct!\n");
	h[current_user].score++;
    } else {
	printf("Wrong answer!\n");
    }
    printf("\n");

    // Question 4
    printf("4. Who is the author of the Harry Potter series?\n");
    printf("1. J.K. Rowling\n2. Stephen King\n3. George R.R. Martin\n");
    scanf("%d", &answer);
    if (answer == 1) {
	printf("Correct!\n");
	h[current_user].score++;
    } else {
	printf("Wrong answer!\n");
    }
    printf("\n");

    // Question 5
    printf("5. What is the symbol for the element Oxygen?\n");
    printf("1. O2\n2. O\n3. Ox\n");
    scanf("%d", &answer);
    if (answer == 2) {
	printf("Correct!\n");
	h[current_user].score++;
    } else {
	printf("Wrong answer!\n");
    }
    printf("\n");

    // Question 6
    printf("6. Who is the current CEO of Tesla?\n");
    printf("1. Steve Jobs\n2. Elon Musk\n3. Bill Gates\n");
    scanf("%d", &answer);
    if (answer == 2) {
	printf("Correct!\n");
	h[current_user].score++;
    } else {
	printf("Wrong answer!\n");
    }
    printf("\n");

    // Question 7
    printf("7. What is the largest organ in the human body?\n");
    printf("1. Heart\n2. Liver\n3. Skin\n");
    scanf("%d", &answer);
    if (answer == 3) {
	printf("Correct!\n");
	h[current_user].score++;
    } else {
	printf("Wrong answer!\n");
    }
    printf("\n");

    // Question 8
    printf("8. Who directed the movie 'Jurassic Park'?\n");
    printf("1. Steven Spielberg\n2. George Lucas\n3. Martin Scorsese\n");
    scanf("%d", &answer);
    if (answer == 1) {
	printf("Correct!\n");
	h[current_user].score++;
    } else {
	printf("Wrong answer!\n");
    }
    printf("\n");
 printf("Total score is %d\n",h[current_user].score);
printf("\t\t\tpress 1 to play again \n\t\t\tpress 2 for home page");
scanf("%d",&press);
if(press==1)
{
quiz(current_user);
}
/*else
if(press==2)
{
dashboard(current_user);
}*/
else
{
dashboard(current_user);
}
return 0;
//getch();
}
int attendence(int current_user)
{
    int total_days, present_days,press;
    clrscr();

    printf("Enter the total number of working days: ");
    scanf("%d", &total_days);

    printf("Enter the number of days present: ");
    scanf("%d", &present_days);

    h[current_user].attendance_percentage = ((float)present_days / total_days) * 100;

    printf("\nAttendance Percentage = %.2f%%\n",h[current_user]. attendance_percentage);
    printf("Shortage = %d days\n", total_days - present_days);
    printf("\t\t\tpress 1 to recalculate\n\t\t\tpress 2 for home page\n");
  scanf("%d",&press);
if(press==1)
{
attendence(current_user);
}
else
if(press==2)
{
dashboard(current_user);
}
else
{
printf("\t\t\twrong input\n");
}
      return 0;
}
/*int quote(int current_user)
{
int i,press;
clrscr();
for(i=0;i<5;i++)
{
printf("%s",h[i].article);
printf("_______________________________________");
}
printf("Press 1 to write a post\n");
scanf("%d",&press);
if(press==1)
{
write_post(current_user);
}
else
{
dashboard(current_user);
}
return 0;
}
int write_post(int current_user)
{
int press;
clrscr();
    printf("write a post\n");
    scanf("%1000[^\n]",h[current_user].article);
   // printf("You entered:\n%s",h[current_user].article);
printf("press 1 to post\n");
scanf("%d",&press);
if(press==1)
{
dashboard(current_user);
}
else
{
dashboard(current_user);
}
    return 0;
}*/
int sourcecode(int current_user)
{
int a,b;
clrscr();
printf("\t\t\twelcome to source code\n");
printf("\t\t\t1.Right angled triangle with numbers\n");
printf("\t\t\t2.Multiplication table\n");
printf("\t\t\t3.Right Angled triangle with star\n");
printf("\t\t\tYour choice\n");
scanf("%d",&a);
if(a==1)
{
number(current_user);
}
else
if(a==2)
{
multiplication(current_user);
}
else
if(a==3)
{
star(current_user);
}
else
if(a==4)
{
dashboard(current_user);
}
else
{
printf("bad choice\n");
printf("\t\t\tpress 1 to exit\n");
scanf("%d",&b);
if(b==1)
{
dashboard(current_user);
}
else
{
dashboard(current_user);
}
}
return 0;
//getch();
}
int multiplication(int current_user)
{
int press;
int n, i;
clrscr();
printf("Enter a number: ");
scanf("%d", &n);
printf("\t\t\tMultiplication Table of %d:\n", n);
for(i = 1; i <= 10; i++)
{
printf("%d x %d = %d\n", n, i, n*i);
}
printf("\t\t\tpress 1 to get source code\n\t\t\tpress 2 for exit\n");
scanf("%d",&press);
if(press==1)
{
sourcecode2(current_user);
}
else
{
sourcecode(current_user);
}
return 0;
}
int number(int current_user)
{
int press;
int n, i, j;
clrscr();
printf("\t\t\tEnter a number: ");
scanf("%d", &n);
for(i = 1; i <= n; i++)
{ for(j = 1; j <= i; j++)
{
 printf("%d ", j);
}
printf("\n");
}
printf("\t\t\tProgram complete!\n");
printf("\t\t\tpress 1 to get source code\n\t\t\tpress 2 for exit\n");
scanf("%d",&press);
if(press==1)
{
sourcecode3(current_user);
}
else
{
sourcecode(current_user);
}
return 0;
}
int star(int current_user)
{
int press;
int n, i, j;
clrscr();
printf("Enter a number: ");
scanf("%d", &n);
for(i = 1; i <= n; i++)
{
for(j = 1; j <= i; j++)
{
printf("* ");
}
printf("\n");
}
printf("Program complete!\n");
printf("\t\t\tpress 1 to get source code\npress 2 for exit\n");
scanf("%d",&press);
if(press==1)
{
sourcecode1(current_user);
}
else
{
sourcecode(current_user);
}
return 0;
}
int sourcecode1(int current_user)
{
int press;
clrscr();
printf("#include <stdio.h>");
printf("int main() {");
   printf("int n, i, j;");
   printf("#Enter a number: \n");
   printf("scanf(\"%%d\", &n);\n");
   printf("for(i = 1; i <= n; i++) {\n");
   printf("   for(j = 1; j <= i; j++) {\n");
   printf("      printf(\"* \");\n");
   printf("   }\n");
   printf("   printf(\"\\n\");\n");
   printf("}\n");
   printf("printf(\"Program complete!\\n\");\n");
   printf("return 0;\n");
printf("}");

printf("press 1 for exit\n");
scanf("%d",&press);
if(press==1)
{
star(current_user);
}
else
{
star(current_user);
}
return 0;
}
int sourcecode2(int current_user)
{
int press;
clrscr();
printf("void multiplication() {\n");
      printf("   int n, i;\n");
      printf("   printf(\"Enter a number: \");\n");
      printf("   scanf(\"%%d\", &n);\n");
      printf("   printf(\"Multiplication Table of %%d:\\n\", n);\n");
      printf("   for(i = 1; i <= 10; i++) {\n");
      printf("      printf(\"%%d x %%d = %%d\\n\", n, i, n*i);\n");
      printf("   }\n");
      printf("}\n");
printf("press 1 for exit\n");
scanf("%d",&press);
if(press==1)
{
multiplication(current_user);
}
else
{
multiplication(current_user);
}
return 0;
}
int sourcecode3(int current_user)
{
int press;
clrscr();
   printf("#include <stdio.h>\n\n");
   printf("int main() {\n");
   printf("   int n, i, j;\n");
   printf("   printf(\"Enter a number: \");\n");
   printf("   scanf(\"%%d\", &n);\n");
   printf("   for(i = 1; i <= n; i++) {\n");
   printf("      for(j = 1; j <= i; j++) {\n");
   printf("         printf(\"%%d \", j);\n");
   printf("      }\n");
   printf("      printf(\"\\n\");\n");
   printf("   }\n");
   printf("   printf(\"Program complete!\\n\");\n");
   printf("   return 0;\n");
   printf("}\n");
printf("press 1 for exit\n");
scanf("%d",&press);
if(press==1)
{
number(current_user);
}
else
{
number(current_user);
}
return 0;
}
int dev(int current_user)
{
int a=1011,b=1012,c,d,p,i;
clrscr();
printf("enter id\n");
scanf("%d",&c);
printf("enter pass\n");
scanf("%d",&d);
if(a==c&&b==d)
{
printf("hey dev\n");
for(i=0;i<total;i++)
{
printf("\t\t\tuser name         : %s\n",h[i].name);
printf("\t\t\tuser mobile number: %d\n",h[i].number);
printf("\t\t\tuser g-mail       : %s\n",h[i].mail);
printf("\t\t\tuser attendence   : %f\n",h[i].attendance_percentage);
printf("\t\t\ttotal highscore   : %d\n ",h[i].score);
printf("\t\t\tpassword          : %d\n",h[i].pass);
printf("________________________\n");
}
}
else
{
printf("bad login\n");
}
printf("press 1 to exit\n");
scanf("%d",&p);
if(p==1)
{
dashboard(current_user);
}
else
{
dashboard(current_user);
}
return 0;
}