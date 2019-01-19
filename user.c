#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int n,w,v,q=1,g,i,z,r1,t,flightno,no,hotelno,roomno,ch7,ch3,ch5,ch8,c,ch,d,r,ch2,z=0;
int plane[10] = {0},ny, p=0,irstClass=1,economy=6,choice;
char response[2],firstname[35], lastname[35],dept[10],arr[10],fname[10],lname[10],k[10],l[10],f[10],
age[10],dptdate[20],tt[10],rtndate[10],hotel[10];
void airtickt();
void airbook();
void take();
void airline();
void displayair();
void lugg();
void foode();
void main();
void cab();
void cabbook();
void displaycab();
void displayhotel();
void hotelww();
void bookhotel();
void normalhotel();

int i=0;
struct web{
    char name[30],pass[30];
    } we[99];

int m; 
void login(void);
void reg(void);

    
void main()
{
	clrscr();
	 printf("\n\n\n\t\t\tTOUR PLANNING");
	 printf("\n\t\t\t Press ENTER to continue");
    if(getchar()==13)
    XY:
    printf(" ");
    printf("\n\n\n\t\t\t1. LOGIN\t\t2. REGISTER");
    printf("\n\n\n\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d",&m);
    switch(m){
	case 1:

	    login();
	    if(z==1) goto AB ;
	    break;
	case 2 :
		    reg();
	    break ;
	default:
	    printf("\n\n\t\t\t\tNO MATCH FOUND");
            // printf("\n\n\t\t\tPress Enter to re-Enter the choice");
            // if(getchar()==13)
            //clrscr();
            goto XY ;
	       }
   
   AB:
    while(q>0)
{
  printf("************************************************************\n");
  printf("MENU\n");
    printf("\nAirticket Booking - 1\nCab Booking - 2\nHotel Booking Ticket - 3\nExit - 4\nEnter:");
    scanf("%d",&ch2);
            switch(ch2)
            {
                case 1:
                    airtickt();
                    break;
                case 2:
                    cab();
                    break;
                case 3:
                    hotelww();              
                    break;
                case 4:
                      exit(0);
                default:
                    printf("Not a valid input at this stage\n");
            }
   
}
}

void airtickt()
{
  printf("************************************************************\n");
  printf("\tBook Ticket -1\n");
  printf("\t Luggage Details-2\n");
  printf("\t Food Details-3\n");
  printf("\t Print Details-4\n");
  printf("************************************************************\n");
 printf("Choose your option:");
  scanf("%d",&ch7);
  switch(ch7)
  {
    case  1 :  airbook();
                break;    
    case  2 :   lugg();
                break;
    case  3 :   foode();
                break;
    case  4 :  displayair();
        break;
     default:
             printf("Not a valid input at this stage\n");
    }
}

void airbook()
{
  printf("************************************************************\n");
  printf("\t\t TRIP\n");
  printf("************************************************************\n");
  printf("AVAILABLE PACKAGES\n");
  printf("1.FAMILY PACKAGES\n");
  printf("2.GROUP PACKAGES\n");
  printf("Select Choice \n");
  scanf("%d",&c);
  printf("************************************************************\n");
  if(c==1)
    {printf("************************************************************\n");
        printf("2.MAURITIUS TOUR PACKAGE\n");
        printf("Select the choice\n");
        scanf("%d",&ch);
    }
  else
  {
    printf("************************************************************\n");
  printf("1.EUROPE TOUR PACKAGE\n");
        printf("2.MANALI TOUR PACKAGE\n");
        printf("Select the choice\n");
        scanf("%d",&ch3);
        
  }
  take();
printf("************************************************************\n");
printf("Which Flight do you prefer?\n");
printf("1.AIRINDIA\n");
printf("2.JETAIRWAYS\n");
printf("3.AIRARABIA\n");
printf("4.AIRASIA\n");
printf("5.JETLITE\n");
printf("************************************************************\n");
printf("Select the No :\n");
scanf("%d",&no);
switch(no)
{
  case  1 : printf("************************************************************\n");
  printf("Flights Available for AIRINDIA:\n");
  printf("************************************************************\n");
          airline();
          printf("Select Flight No:\n");
          scanf("%d",&flightno);
          break;
case  2 : printf("************************************************************\n");
printf("Flights Available for JETAIRWAYS:\n");
printf("************************************************************\n");
        airline();
        printf("Select Flight No:\n");
        scanf("%d",&flightno);
        break;
case  3 : printf("************************************************************\n");
printf("Flights Available for AIRARABIA:\n");
printf("************************************************************\n");
        airline();
        printf("Select Flight No:\n");
        scanf("%d",&flightno);
        break;
case  4 : printf("************************************************************\n");
printf("Flights Available for AIRASIA:\n");
printf("************************************************************\n");
        airline();
        printf("Select Flight No:\n");
        scanf("%d",&flightno);
        break;
case  5 : printf("************************************************************\n");
printf("Flights Available for JETLITE:\n");
printf("************************************************************\n");
        printf("FlightNo \t From-To \t\t Date \t Time \t Fair\n");
        airline();
        printf("Select Flight No:\n");
        scanf("%d",&flightno);
        break;


}

printf("No of Passengers:\n");
scanf("%d",&ny);

    while(p<ny)
{
  
  printf("\n%s\n%s\n", "Please type 1 for \"First class\"","Please type 2 for\"Economy\"");
  scanf("%d", &choice);
  printf("Do you want side seat ? Yes/No?\n");
  scanf("%s",f);
  if(choice==1)
  {
    p=p+1;

    printf("\nEnter first name:");
    scanf("%s",firstname);

    printf("\nEnter lastname :");
    scanf("%s", lastname);

    printf("************************************************************\n");
    printf(" *                            *\n");
    printf("    NAME:%s, %s                 \n",lastname,firstname);
    printf(" *                            *\n");
    printf("    CLASS:%d                      \n",choice);
    printf(" *                            *\n");
    printf("    SEAT:%d                      \n",p);
    printf(" *                            *\n");
    printf("                               \n");
    printf("************************************************************\n");
}

else if(choice==2)
{

  
    p=p+1;
   

    printf("\nEnter first name:");
    scanf("%s",firstname);

    printf("\nEnter lastname :");
    scanf("%s", lastname);

    printf("************************************************************\n");
    printf(" *                            *\n");
    printf("    NAME:%s, %s                 \n",lastname,firstname);
    printf(" *                            *\n");
    printf("    CLASS:%d                      \n",choice);
    printf(" *                            *\n");
    printf("    SEAT:%d                      \n",p);
    printf(" *                            *\n");
    printf("                               \n");
    printf("************************************************************\n");

}
if(p>ny) 
{
  printf("seat is full\n");
}
}
}
void take()
{
printf("\nENTER THE DEPARTURE AIRPORT:");
scanf("%s",dept);
printf("\nENTER THE ARRIVAL AIRPORT:");
scanf("%s",arr);
printf("DEPARTURE DATE:\n");
scanf("%s",dptdate);
printf("Type '1' for ONE WAY \n '2' for ROUND TRIP:\n");
scanf("%s",tt);
if(tt=="2")
{
printf("RETURNING DATE:\n");
scanf("%s",rtndate);
}
}
void airline()
{
  printf("************************************************************\n");
printf("FlightNo \t From-To \t\t Date \t Time \t Fair\n");
printf("************************************************************\n");
printf("1531 \t %s-%s \t %s \t 07:12-11:50 \t 14444\n",dept,arr,dptdate);
printf("1235 \t %s-%s \t %s \t 22:24-01:00 \t 17000\n",dept,arr,dptdate);
printf("21335 \t %s-%s \t %s \t 22:24-01:00 \t 12100\n",dept,arr,dptdate);
printf("6236 \t %s-%s \t %s \t 07:12-11:30 \t 1114\n",dept,arr,dptdate);
printf("92433 \t %s-%s \t %s \t 08:23-12:50 \t 21300\n",dept,arr,dptdate);
printf("22276 \t %s-%s \t %s \t 16:12-21:30 \t 19644\n",dept,arr,dptdate);
}


void displayair()
{
  printf("************************************************************\n");
  printf("PACKAGE:\t");
  printf("************************************************************\n");
  if(ch==1)
  {
    printf("ASIA HOLIDAY PACKAGE\n");
  }else
  {
    printf("MAURITIUS TOUR PACKAGE\n");
  }
  if(ch3==1)
  {
    printf("EUROPE TOUR PACKAGE\n");
  }else
  {
    printf("MANALI TOUR PACKAGE\n");
  }
  if(choice==1)
  {
    printf("Flight Type: \tFirstClass\n");
  }
  else
  {
    printf("Flight Type: \tEconomy\n");
  }
  printf("\nDEPARTURE AIRPORT:\t%s\n",dept);
printf("\nARRIVAL AIRPORT:\t%s\n",arr);
printf("DEPARTURE DATE:\t%s\n",dptdate);
if(tt=="2")
{
printf("RETURNING DATE:\t%s\n",rtndate);
}
printf("No of Passengers:\t%d\n",ny);
printf("Selected Flight No:\t%d \n",flightno);
}


void foode()
{
printf("Food and Beverages\n");
printf("Non-veg or Veg?\n");
scanf("%s",k);
printf("Do you want Beverages facilities? Yes or No?\n");
scanf("%s",l);
}
void lugg()
{
  printf("Allowed luggage =20kg\n");
printf("Want to upgrade luggage? 1=Yes or 2=No\n");
scanf("%d",&v);
if(v==1)
{
  printf("500 per kg\n");
}

}


void displaycab()
{printf("************************************************************\n");
printf("DETAILS OF CAB BOOKED\n");
printf("************************************************************\n");
  if(w==1)
  {
    printf("************************************************************\n");
    printf("Vehicle:Two Wheeler\n");
    printf("************************************************************\n");
    if(r==1)
    {
      printf("Model:CBR\tPrice: 9200\n");
    }
    else if (r==2)
    {
      printf("Model:Vespa\tPrice: 12322\n");
    }
    else if (r==3)
    {
      printf("Model:Harley Davidson\tPrice: 21322\n");
    }
    else
    {
         printf("Model:Kawasaki\tPrice:12000\n");
    }
  }
  else if(w==3)
  {
    printf("************************************************************\n");
    printf("Vehicle:Four-Wheeler\n");
    printf("************************************************************\n");
    if (r1==1)
    {
      printf("Model:BMW\tPrice: 129200\n");
    }
    else if (r1==2)
    {
      printf("Model:Audi\tPrice: 2212322\n");
    }
    else if (r1==3)
    {
      printf("Model:Bugatti\tPrice: 2221322\n");
    }
    else
    {
         printf("Model:Ferrari\tPrice:4312000\n");
    }
   }
  
}
void cabbook()
{
  printf("************************************************************\n");
printf("Select the option\n");
printf("1.Two Wheeler\n");
printf("2.Three Wheeler\n");
printf("3.Four Wheeler\n");
scanf("%d",&w);
printf("************************************************************\n");
switch(w)
{
  case 1  : printf("************************************************************\n");
  printf("Two-Wheelers\n");
  printf("************************************************************\n");
        printf("Available Models \t\t Price per day\n");
        printf("1.CBR \t\t\t 9200\n");
        printf("2.Vespa \t\t\t 12322\n");
        printf("3.Harley Davidson\t\t 21322\n");
        printf("4.Kawasaki \t\t\t 12000\n");
        printf("Select Model\n");
        scanf("%d",&r);
        printf("No of Passengers:\n");
        scanf("%d",&g);
        if(g>2)
        {
          goto a;
        }       
        break;
  case 2  : printf("************************************************************\n");
            printf("Three-Wheelers\n");
            printf("************************************************************\n");
            printf("Unavailable\n");
            break;
  case 3  : 
        a :printf("************************************************************\n");
         printf("Four-Wheelers\n");
         printf("************************************************************\n");
        printf("Available Models \t\t Price per day\n");
        printf("1.BMW \t\t\t 129200\n");
        printf("2.Audi \t\t\t 2212322\n");
        printf("3.Bugatti\t\t\t 2221322\n");
        printf("4.Ferrari \t\t\t 4312000\n");
        printf("Select Model\n");
        scanf("%d",&r1);
        break;
}
}
void cab()
{
 printf("************************************************************\n");
  printf("\tBook Cab-1\n");
  printf("\tPrint Details-2\n");
  printf("************************************************************\n");
  printf("Choose your option:");
  scanf("%d",&ch8);
  switch(ch8)
  {
    case  1 :  cabbook();
                break;
    case  2 :  displaycab();
                break;
     default:
             printf("Not a valid input at this stage\n");
}
}

void highhotel()
{
printf("1.Single\n");
printf("2.Double\n");
printf("3,Triple\n");
printf("4.Quad\n");
printf("5.Queen\n");
printf("6.King\n");
}
void normalhotel()

{
printf("1.Single\n");
printf("2.Double\n");
printf("3,Triple\n");
}
void displayhotel()
{
  printf("************************************************************\n");
  printf("DETAILS OF HOTEL BOOKING\n");
  printf("************************************************************\n");
  if(z==1)
  {
    printf("************************************************************\n");
    printf("Type:Delux or luxury\n");
     printf("************************************************************\n");
      if(hotelno==1)
      {
        printf("Hotel:Taj \t 1098\n");
      }
      else if(hotelno==2)
      {
        printf("Hotel:Zisx \t 2198\n");
      }
      else if(hotelno==3)
      {
        printf("Hotel:Flog \t 1298\n");
      }
      else{
        printf("Hotel:Santorini \t 1098\n");
      }
  }
  else if(z==2)
  {
    printf("************************************************************\n");
    printf("Type:First class or superior tourist\n");
     printf("************************************************************\n");
      if(hotelno==1)
      {
        printf("Hotel:Bulgari Resort \t2500\n");
      }
      else if(hotelno==2)
      {
        printf("Hotel:Aspen Chalets \t 3500\n");
      }
      else if(hotelno==3)
      {
        printf("Hotel:Raffles \t2500\n");
      }
      else{
        printf("Hotel:Palazzo Versace\t3000\n");
      }
  }
  else if(z==3)
  {
    printf("************************************************************\n");
    printf("Type:Standard budjet class or economy\n");
     printf("************************************************************\n");
      if(hotelno==1)
      {
        printf("Hotel:Atlantis \t1800\n");
      }
      else if(hotelno==2)
      {
        printf("Hotel:Grand Hyatt\t 1700\n");
      }
      else if(hotelno==3)
      {
        printf("Hotel:Five palm \t1500\n");
      }
      else if(hotelno==4)
      {
        printf("Hotel:rosvenor\t1400\n");
      }
      else
      {
        printf("Hotel:Oberoi\t1200");
      }
   }

  else{
    printf("Not a valid input at this stage\n");
  }
}

void bookhotel()
{
  printf("************************************************************\n");
  printf("Available Hotel rooms near %s\n",arr);
  printf("Select type:\n");
  printf("1.Delux or luxury\n");
  printf("2.First class or superior tourist \n");
  printf("3.Standard budjet class or economy\n");
  scanf("%d",&z);
  switch(z)
  {
    case 1  :printf("************************************************************\n");
    printf("Delux or luxury\n");
    printf("************************************************************\n");
     printf("Hotel Name \t Place \t Room Fair\n");
  printf("1.Taj \t\t %s \t 1098\n",arr);
  printf("2.Zisx \t\t %s \t 2198\n",arr);
  printf("3.Flog \t\t %s \t 1298\n",arr);
  printf("4.Santorini \t %s \t 1098\n",arr);
  printf("Select the Hotel No.:\n");
  scanf("%d",&hotelno);
  printf("Rooms available\n");
          highhotel();
          printf("Select Room Type No:\n");
        scanf("%d",&roomno);
  printf("************************************************************\n");
  break;
  case  2 :printf("************************************************************\n");
  printf("First class or superior tourist \n");
  printf("************************************************************\n");
  printf("Hotel Name \t Place \t Room Fair\n");
  printf("1.Bulgari Resort \t %s \t2500\n",arr);
  printf("2.Aspen Chalets \t %s \t3500\n",arr);
  printf("3.Raffles \t\t %s \t2500\n",arr);
  printf("4.Palazzo Versace\t %s \t 3000\n",arr);
  printf("Select the Hotel No.:\n");
  scanf("%d",&hotelno);
  printf("Rooms available\n");
          highhotel();
          printf("Select Room Type No:\n");
        scanf("%d",&roomno);
  printf("************************************************************\n");
  break;
case  3 :printf("************************************************************\n");
printf("Standard budjet class or economy\n");
printf("************************************************************\n");
printf("Hotel Name \t Place \t Room Fair\n");
  printf("1.Atlantis \t\t %s \t1800\n",arr);
  printf("2.Grand Hyatt\t %s \t1700\n",arr);
  printf("3.Five palm \t %s \t 1500\n",arr);
  printf("4.rosvenor\t\t %s \t1400\n",arr);
  printf("5.Oberoi\t\t %s \t1200\n",arr);
  printf("Select the Hotel No.:\n");
  scanf("%d",&hotelno);
  printf("Rooms available\n");
          normalhotel();
          printf("Select Room Type No:\n");
        scanf("%d",&roomno);
  printf("************************************************************\n");
  break;
default:
             printf("Not a valid input at this stage\n");
  }

}


void hotelww()
{
  printf("************************************************************\n");
  printf("\tBook Room-1\n");
  printf("\tPrint Details-2\n");
  printf("************************************************************\n");
  printf("Choose your option:");
  scanf("%d",&ch5);
  switch(ch5)
  {
    case  1 :  bookhotel();
		break;
    case  2 :  displayhotel();
		break;
     default:
	     printf("Not a valid input at this stage\n");
}
}



void reg(){
    FILE *fp;
    char ss,checker[30]; int qq2=0;
    fp=fopen("Web_reg.txt","ab +");
    printf("\n\n\t\t\t\tWELCOME TO REGISTER ZONE");
    printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^");
    for(i=0;i<100;i++){
	printf("\n\n\t\t\t\t ENTER USERNAME: ");
	scanf("%s",checker);
	while(!feof(fp)){
	    fread(&we[i],sizeof(we[i]),1,fp);
	    if(strcmp(checker,we[i].name) ==0){
		printf("\n\n\t\t\tUSERNAME ALREDY EXISTS");
		//clrscr();
		reg();
		}
	    else{
		strcpy(we[i].name,checker);
		break;
		}
	    }
	printf("\n\n\t\t\t\t DESIRED PASSWORD: ");
	scanf("%s",we[i].pass);
	// while((c=getchar())!=13){
	    // w[i].pass[z++]=c;
	    // printf("%c",'*');
	    // }
	fwrite(&we[i],sizeof(we[i]),1,fp);
	fclose(fp);
	// printf("\n\n \tPress enter if you agree with Username and Password");
	// if((c=getchar())==13){
	    //clrscr();
	    printf("\n\n\t\tYou are successfully registered");
	    printf("\n\n\t\tTry login your account??\n\n\t\t " );
	    printf("> PRESS 1 FOR YES\n\n\t\t > PRESS 2 FOR NO\n\n\t\t\t\t");
	    scanf("%d",&m);
	    switch(m){
		case 1:
		    //clrscr();
		    login();
		    break;
		case 2 :
		    //clrscr();
		    printf("\n\n\n\t\t\t\tTHANK YOU FOR REGISTERING\n");
		    exit(0);
		    break;
		}
	    // }
	break;
	}
    getchar();
    }

void login()
{
    FILE *fp;
    char ss,name[30],pass[30]; int qq2=0;
    int checku,checkp;
    fp=fopen("Web_reg.txt","rb");
    printf("\n\n\t\t\t\tWELCOME TO LOG IN ZONE");
    printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^");
    for(i=0;i<1000;i++){
	printf("\n\n\t\t\t\t ENTER USERNAME: ");
	scanf("%s",name);
	printf("\n\n\t\t\t\t ENTER PASSWORD: ");
	scanf("%s",pass);
	// while((c=getchar())!=13){
	    // pass[z++]=c;
	    // printf("%c",'*') ;
	    // }
	// pass[z]='\0';
	while(!feof(fp)){
	    fread(&we[i],sizeof(we[i]),1,fp);
	    checku=strcmp(name,we[i].name);
	    checkp=strcmp(pass,we[i].pass);
	    if(checku==0&&checkp==0){
		//clrscr();
		printf("\n\n\n\t\t\tYOU HAVE LOGGED IN SUCCESSFULLY!!");
		printf("\n\n\n\t\t\t\tWELCOME, HAVE A NICE DAY");
		qq2=1;
		break;
		}
	    else if(checku==0&&checkp!=0){
		printf("\n\n\n\t\t\tWRONG PASSWORD!! Not %s??",name);
		printf("\n\n\t\t\t\t (Press 'Y' to re-login)");
		if(getchar()=='y'||getchar()=='Y')
		login();
		}
	    else if(checku!=0){
		printf("\n\n\n\t\t\tYou are not a Registered User\n \t\t\tYou are being redirected to Register Zone");
		// if(getchar()==13)
		//clrscr();
		reg();
		}
	    }
	break;
	}
    getchar();
    //return;
    }
