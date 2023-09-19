#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct movieticket
{
    char name[100];
    char number[100];
    int id;
    int seat;
}user[400];
void ticket1(int choice, char name[50],int id,int price);
void ticket2(int choice, char name[20],int id,int price);
void ticket3(int choice, char name[20],int id,int price);
int id=1000;
int Count=0;

int pricechnage(int price)
{
    char pas[20],pass[20]="dipu";
    printf("Enter the password to change the price of a ticket: ");
    cin>>pas;
    if(strcmp(pas,pass)==0)
    {
        cout<<"Please enter a new price: ";
        cin>>price;
        system("PAUSE");
        system("CLS");
    }
    else
		cout<<"The entered password is wrong!! ";
	return price;
}
int choisel(void)
{
    int choice;
    printf("                        simple Movie Ticket Booking System                            \n");
    printf("**************************************************************************************\n");
    printf("**                    1- To edit price of ticket (only for admin)                   **\n");
    printf("**                    2- To view Reserved ticket (only for admin)                   **\n");
    printf("**                    3- To purchase ticket:                                        **\n");
    printf("**                    4- To cancel the seat:                                        **\n");
    printf("**                    5- Exit system:                                               **\n");
    printf("***************************************************************************************\n");
    cout<<"Enter yout choice: ";
    cin>>choice;
    return choice;
}
void reservation(int *seat,int price,int slecte)
{
    system("cls");
    int i,j;
    char personname[100];
    cout<<"\n                               screen\n\n";
    for(i=1;i<=100;i++)
    {
        cout<<i<<"\t";
        if(i%10==0)
           cout<<"\n\n";
    }
    cout<<"Please enter your name: ";
    cin>>user[Count].name;
    cout<<"Please enter your phone number: ";
    cin>>user[Count].number;
    cout<<"Which seat number you want? ";
    cin>>j;
    if(j>100 || j<1)
    {
        cout<<"This seat number is unavailable in this theater. \n";
        cout<<"Please re-enter your seat number: ";
        cin>>j;
    }

		if (seat[j]==1)
			{
				cout<<"Sorry, this ticket is already booked! Please choose another seat.\n";
				cin>>j;;
			}
		else
        {
            seat[j]=1;
        }

         user[Count].seat=j;
        if (slecte==1)
			ticket1(user[Count].seat,user[Count].name,id,price);
		else if (slecte==2)
			ticket2(user[Count].seat,user[Count].name,id,price);
		else
			ticket3(user[Count].seat,user[Count].name,id,price);
		id++;


}

void ticket1(int choice, char name[50],int id,int price)
{
    system("cls");
    cout<<"\n\n\t\t************************THEATER BOOKING TICKET************************\n";
    cout<<"\t\t*************************************************************************\n";
    cout<<"\t\t  Booking ID : "<<id<<"            Show Name: Avenger: Endgame \n";
    cout<<"\t\t  Customer   : "<<name<<"                                      \n";
    cout<<"\t\t                                    Date       : 28-12-2022 \n";
    cout<<"\t\t                                    Time       : 7:45PM       \n";
    cout<<"\t\t                                    Hall       : 5          \n";
    cout<<"\t\t                                   Seat No     : "<<choice<<"\n";
    cout<<"\t\t                                    price      : "<<price<<"\n";
    user[Count].id=id;
    cout<<"\t\t*************************************************************************\n";
    return;
}
void ticket2(int choice, char name[20],int id,int price)
{
    system("cls");
    cout<<"\n\n\t\t************************THEATER BOOKING TICKET************************\n";
    cout<<"\t\t*************************************************************************\n";
    cout<<"\t\t  Booking ID : "<<id<<"            Show Name: Avater \n";
    cout<<"\t\t  Customer   : "<<name<<"                                      \n";
    cout<<"\t\t                                    Date       : 28-12-2022 \n";
    cout<<"\t\t                                    Time       : 10:45PM      \n";
    cout<<"\t\t                                    Hall       : 3          \n";
    cout<<"\t\t                                   Seat No     : "<<choice<<"\n";
    cout<<"\t\t                                    price      : "<<price<<"\n";
    user[Count].id=id;
    cout<<"\t\t*************************************************************************\n";
    return;
}
void ticket3(int choice, char name[20],int id,int price)
{
    system("cls");
    cout<<"\n\n\t\t************************THEATER BOOKING TICKET************************\n";
    cout<<"\t\t*************************************************************************\n";
     cout<<"\t\t  Booking ID : "<<id<<"            Show Name: Spider-man: Far From Home \n";
    cout<<"\t\t  Customer   : "<<name<<"                                      \n";
    cout<<"\t\t                                    Date       : 28-12-2022 \n";
    cout<<"\t\t                                    Time       : 04:00PM      \n";
    cout<<"\t\t                                    Hall       : 1          \n";
    cout<<"\t\t                                   Seat No     : "<<choice<<"\n";
    cout<<"\t\t                                    price      : "<<price<<"\n";
    user[Count].id=id;
    cout<<"\t\t*************************************************************************\n";
    return;
}

int movie(void)
{
    system("cls");
    int a;
    cout<<"                    which movie do you want to see?               \n";
    cout<<"------------------------------------------------------------------\n";
    cout<<"\n                  press 1 for Avenger: Endgame                  \n";
    cout<<"\n                  press 2 for Avatar                            \n";
    cout<<"\n                  press 3 for Spider-man: Far From Home         \n";
    cin>>a;
    return a;
}
void ticketdetail(void )
{
	int i;
	char pas[10],pass[10]="dipu";
	cout<<"Enter the password to see ticket details: ";
	cin>>pas;
	if (strcmp(pas,pass)==0)
	{

		for (i=0;i<Count;i++)
		{
			cout<<"seat no: "<<user[i].seat<<" is booked by "<<user[i].name<<" booking id is "<<user[i].id<<"\n";
		}

	}

	else
		cout<<"Entered password is wrong \n";
		system("PAUSE");
		system("CLS");

}
int cmovie(void)
{
	int i;
	cout<<"\t\t\twhich movie ticket you want to cancel\n";
	cout<<"\t\t\t-------------------------------------\n";
	cout<<"\t\t\tpress 1 for Avengers: EndGame\n\n";
	cout<<"\t\t\tpress 2 for Captain Marvel\n\n";
	cout<<"\t\t\tpress 3 for Spider-Man: Far From Home\n";
	cin>>i;
	return i;
}
void cancel(int *seat)
{
      int cancelseat,i,stop;
	  cout<<"Please enter ID number of ticket: ";
	  cin>>cancelseat;
	  for (i=0;i<300;i++)
	  {
	  		if(cancelseat==user[i].id)
	  		{
					 stop=10;
					 system("cls");
					 cout<<"\t"<<user[i].name<<" your seat is "<<user[i].seat<<" canceled\n\n";
					 seat[user[i].seat]=0;
					 i=300;
	  		}
	  }

	  if (stop!=10)
	  		cout<<"Ticket ID number is incorrect please enter your ID again to cancel the ticket: \n";
}
int main()
{
   int *seat,choice,price=500,slecte,i,n;
	seat=(int *)calloc(101,sizeof(int ));



    while(n!=5)
    {
        choice=choisel();
        switch(choice)
        {
    case 1:
        price=pricechnage(price);
        break;
    case 2:
        ticketdetail();
        break;
    case 3:
        slecte=movie();
        reservation(seat, price,slecte);
        Count++;
        break;
    case 4:
        slecte=cmovie();
        cancel(seat);
        break;
    case 5:
        n=5;
        break;
    default:
        cout<<"Choice not available\n";
        break;

        }

    }


}
