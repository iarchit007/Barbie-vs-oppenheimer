#include <stdio.h>
main()
{
    int a,i1=250,i2=500,i3=750,i4=1000,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17,i19,i18,i20,i21,i22,i23;
    char ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11,ch12,ch13,ch14;
    printf("Welcome to the The Archit's Grand Multiplex\n");
    printf("Which movie's ticket do you want: \n");
    printf("1. Barbie \n");
    printf("2. Oppenheimer \n");
    printf("Press 1 for barbie and 2 for oppenheimer: ");
    scanf("%d",&a);
    if(a==1)
    {
        printf("Do you want to watch Barbie (enter Y for yes and any other letter for no)? ");
        scanf(" %c",&ch1);
        if(ch1=='y'||ch1=='Y')
        {
            printf("Ok! What type of seat would you prefer: \nh. Front Row (₹%d) \ni. Middle Row (₹%d) \nj. Last Row (₹%d)\nk. Recliner (₹%d)\n",i1,i2,i3,i4);
            printf("Enter the letter: ");
            scanf(" %c",&ch2);
            if(ch2=='h'||ch2=='H')
            {
                printf("Ok. You chose the front row.\nhe price to be paid of 1 ticket after taxes is ₹%d.\n",i1);
                printf("How many tickets do you want to buy?\nEnter the number: ");
                scanf("%d",&i5);
                i13=i5*i1;
                printf("Price to be paid for %d tickets: %d ",i5,i13);
                printf("\nAre you confirmed (enter Y for yes and any other letter for no)? ");
                scanf(" %c",&ch7);
                if(ch7=='y'||ch7=='Y')
                {
                printf("Thank you for booking. Have a great day.");
                }
                else
                {
                printf("Booking terminated due to inconformation.");
                }
            }
            if(ch2=='i'||ch2=='I')
            {
                printf("Ok. You chose the middle row.\nThe price to be paid of 1 ticket after taxes is ₹%d.\n",i2);
                printf("How many tickets do you want to buy?\nEnter the number: ");
                scanf("%d",&i6);
                i14=i6*i2;
                printf("Price to be paid for %d tickets: %d ",i6,i14);
                printf("\nAre you confirmed (enter Y for yes and any other letter for no)? ");
                scanf(" %c",&ch8);
                if(ch8=='y'||ch8=='Y')
                {
                printf("Thank you for booking. Have a great day.");
                }
                else
                {
                printf("Booking terminated due to inconformation.");
                }
            }
            if(ch2=='j'||ch2=='J')
            {
                printf("Ok. You chose the last row.\nThe price to be paid of 1 ticket after taxes is ₹%d.\n",i3);
                printf("How many tickets do you want to buy?\nEnter the number: ");
                scanf("%d",&i7);
                i15=i7*i3;
                printf("Price to be paid for %d tickets: %d ",i7,i15);
                printf("\nAre you confirmed (enter Y for yes and any other letter for no)? ");
                scanf(" %c",&ch9);
                if(ch9=='y'||ch9=='Y')
                {
                printf("Thank you for booking. Have a great day.");
                }
                else
                {
                printf("Booking terminated due to inconformation.");
                }
            }
            if(ch2=='k'||ch2=='K')
            {
                printf("Ok. You chose the recliner row.\nThe price to be paid of 1 ticket after taxes is ₹%d.\n",i4);
                printf("How many tickets do you want to buy?\nEnter the number: ");
                scanf("%d",&i8);
                i16=i8*i4;
                printf("Price to be paid for %d tickets: %d ",i8,i16);
                printf("\nAre you confirmed (enter Y for yes and any other letter for no)? ");
                scanf(" %c",&ch10);
                if(ch10=='y'||ch10=='Y')
                {
                printf("Thank you for booking. Have a great day.");
                }
                else
                {
                printf("Booking terminated due to inconformation.");
                }
            }
            else
            {
                printf("Process terminated due to inconformation.");
            }
        }
        else
        {
            printf("Process terminated due to inconformation.");
        }
    }
    if(a==2)
    {
        printf("Do you want to watch Oppenheimer (enter Y for yes and any other letter for no)? ");
        scanf(" %c",&ch4);
        if(ch4=='y'||ch4=='Y')
        {
            printf("Ok! What type of seat would you prefer: \nl. Front Row (₹%d) \nm. Middle Row (₹%d) \nn. Last Row (₹%d)\no. Recliner (₹%d)\n",i1,i2,i3,i4);
            printf("Enter the letter: ");
            scanf(" %c",&ch5);
            if(ch5=='l'||ch5=='L')
            {
                printf("Ok. You chose the front row.\nhe price to be paid of 1 ticket after taxes is ₹%d.\n",i1);
                printf("How many tickets do you want to buy?\nEnter the number: ");
                scanf("%d",&i9);
                i17=i9*i1;
                printf("Price to be paid for %d tickets: %d ",i9,i17);
                printf("\nAre you confirmed (enter Y for yes and any other letter for no)? ");
                scanf(" %c",&ch11);
                if(ch11=='y'||ch11=='Y')
                {
                printf("Thank you for booking. Have a great day.");
                }
                else
                {
                printf("Booking terminated due to inconformation.");
                }
            }
            if(ch5=='m'||ch5=='M')
            {
                printf("Ok. You chose the middle row.\nThe price to be paid of 1 ticket after taxes is ₹%d.\n",i2);
                printf("How many tickets do you want to buy?\nEnter the number: ");
                scanf("%d",&i10);
                i18=i10*i2;
                printf("Price to be paid for %d tickets: %d ",i10,i18);
                printf("\nAre you confirmed (enter Y for yes and any other letter for no)? ");
                scanf(" %c",&ch12);
                if(ch12=='y'||ch12=='Y')
                {
                printf("Thank you for booking. Have a great day.");
                }
                else
                {
                printf("Booking terminated due to inconformation.");
                }
            }
            if(ch5=='n'||ch5=='N')
            {
                printf("Ok. You chose the last row.\nThe price to be paid of 1 ticket after taxes is ₹%d.\n",i3);
                printf("How many tickets do you want to buy?\nEnter the number: ");
                scanf("%d",&i11);
                i19=i11*i3;
                printf("Price to be paid for %d tickets: %d ",i11,i19);
                printf("\nAre you confirmed (enter Y for yes and any other letter for no)? ");
                scanf(" %c",&ch13);
                if(ch13=='y'||ch13=='Y')
                {
                printf("Thank you for booking. Have a great day.");
                }
                else
                {
                printf("Booking terminated due to inconformation.");
                }
            }
            if(ch5=='o'||ch5=='O')
            {
                printf("Ok. You chose the recliner row.\nThe price to be paid of 1 ticket after taxes is ₹%d.\n",i4);
                printf("How many tickets do you want to buy?\nEnter the number: ");
                scanf("%d",&i12);
                i20=i12*i4;
                printf("Price to be paid for %d tickets: %d ",i12,i20);
                printf("\nAre you confirmed (enter Y for yes and any other letter for no)? ");
                scanf(" %c",&ch14);
                if(ch14=='y'||ch14=='Y')
                {
                printf("Thank you for booking. Have a great day.");
                }
                else
                {
                printf("Booking terminated due to inconformation.");
                }
            }
            else
            {
                printf("Process terminated due to inconformation.");
            }
            
        }
        else
        {
            printf("Process terminated due to inconformation.");
        }
    }
    else
    {
        printf("Sorry, the booking was cancelled due to inconformation.");
    }
    printf("\n\n\nMADE BY: MR. ARCHIT CHOUDAHA");
}