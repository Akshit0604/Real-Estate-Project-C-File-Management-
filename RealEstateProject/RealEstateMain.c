#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){

FILE *userfile;
int c=0,i=0,j=0, unum;
char un[20],fiun[20],unu[1];
char pw[20], fpw[20];
printf("Welcome to the plot management system.\n");

while(1){  // Login 

printf("Enter Username: ");
gets(un);
printf("Enter password: ");
gets(pw);

unu[0]=un[4];
unum=atoi(unu); // atoi converts char/string to int

switch(unum){ // Opening userfile according to username using switchcase
case 1: userfile=fopen("User1.txt","r");
break;
case 2: userfile=fopen("User2.txt","r");
break;
case 3: userfile=fopen("User3.txt","r");
break;
case 4: userfile=fopen("User4.txt","r");
break;
case 5: userfile=fopen("User5.txt","r");
break;
case 6: userfile=fopen("User6.txt","r");
break;
case 7: userfile=fopen("User7.txt","r");
break;
case 8: userfile=fopen("User8.txt","r");
break;
case 9: userfile=fopen("User9.txt","r");
break;
default: printf("Incorrect Username!");
}

i=0;
c=0;
while(fgets(fpw,20,userfile)) //read each line in the file string by string
{
i++;
if(i==2){ // password is stored in second line of file so i=2
for(int j=0;j<strlen(fpw);j++){
if(pw[j]==fpw[j]) // checking if entered password matches password in file
c++;
}
break;
}}

if(c==strlen(pw))
{printf("Welcome %s\n",un);
break;}
else
printf("Incorrect Username or Pasword!\n");
} //Login Loop end

while(1){ // Buying and selling
printf("What would you like to do?\n");
printf("1.Buy Plots\n2.Sell Plots\n");
scanf("%d",&i);

if(i==1){ //Buy Loop
break;
}// Buy end

else if (i==2){ //Sell Loop
break;
}// Sell end

else 
printf("Please enter a valid response.\n");

} // End of buying and selling


while(1) { // Payment Loop 

char fp[20];
int j,p,q,buy;

if(i==1){
printf("Enter pin: "); // pin is stored in 3rd line of file
scanf("%d",&q);
j=0;
while(fgets(fp,20,userfile)) // checking if pin is correct (similar to pw)
{
if(j==0){
p=atoi(fp);
}
j++;
}

if(p==q)
{printf("Payment Successful! Thank you for buying a plot!");
break;}

else 
{printf("Incorrect pin entered.\n");
continue;}}


else if (i==2){
printf("Thank you for putting your plot up for sale.\nYou will be notified if a buyer is interested.\n");
break;}
} // End of Payment

} //4, 2, 3, 9, 7, 6, 11, 14, 10