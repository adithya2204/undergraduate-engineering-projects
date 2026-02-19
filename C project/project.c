#include <stdio.h>
#include <string.h>
#define Rows 29
#define Columns 20
#define string 100
int rec(int month);
void revback(int* total,int* month);
int hotel(int state,char arr[Rows][Columns][string],int tempadd,int hotelcost,int course,int* choose);
void feedback(void);
void printline(void);
int main(void)
{
	char name[50];
	int state;
	int budget;
	int course;
	int array[14]={0,0,31,28,31,30,31,30,31,31,30,31,30,31};
	int month;
	int day;
	int year;
	int tempdate;
	int tempmonth;
	int tempyear=2023;
	int total;
	int temp;
	int member;
    int cost=2000;
    int tempadd;
    int hotelcost;
	int totalcost;
	int choosen;
	int agreement;
	char place [Rows][Columns][string]=
	{
		{},
		{"Andhra Pradesh","","1.Vishakapatanam","2.Araku Valley","3.Amaravathi","1.Vijayawada","2.Kurnool","3.Rajamundhry","1.Tirupathi","2.Ananthagiri Hills","3.Borra Caves","Novotel","The Oberoi","The leela Palace","Lemon Tree Premier","The park","The lalit Ashok","Hotel Surya","Hotel akshaya","Hotel Prakash"},
		{"Arunachal Pradesh","","1.Tawang","2.Ziro Valley","3.Tezu","1.Gompa","2.Ita Fort","3.Selapa","1.Nuranang Falls","2.Jaswant Gargh","3.Buddha Temple","The st.regis","The park hyatt","The ITC grand","The four seasons hotel","The Hilton garden","The radisson blue plaza","Hotel shanthi","Hotel krishna palace","Hotel prakash"},
		{"Assam","","1.Ghuwati","2.Silchar","3.Shilong","1.Majuli","2.Umananda Island","3.Chandubi Lake","1.Khamakya Temple","2.Bramhaputra","3.Wild Life Sancutary","The rambagh palace","The oberoi","The park Hyatt","The st.regins","Hiliton","The gate way hotel","Hyatt regence","Hotel swagat","Hotel plaza",},
		{"Bihar","","1.Patna","2.Bodhgaya","3.Buxar Fort","1.Pawapuri","2.Sitamarhi","3.Tomb of sher sahi suri","1.Mundan Temple","2.Muzaffarpur","3.Bhagalpur","The st.regis","The park hyatt","The ITC grand","The four seasons hotel","The Hilton garden","THe radisson blue plaza","Hotel shanthi","Hotel krishna palace","Hotel prakash"},
		{"Chhattisgarh","","1.Raipur","2.Kakolat Falls","3.Bijapur","1.Rajim","2.Madku Dweep","3.Bilha","1.Barnaw apara","2.Wild life sancutary","3.Trigath Falls","Taj lake palace","The carlton","The oberoi","Lemon tree premier","The park","the park","Fairfield hotel","Fairfield hotel","Fairfield hotel"},
		{"Goa","","1.Candolim Beach","2.Vagator","3.Porvorim","1.Agonda Beach","2.Panaji","3.Club Cubana","1.Baga beach","2.Agona Beach","3.Maruthi Temple","The st.regis","The park hyatt","The ITC grand","The four seasons hotel","The Hilton garden","THe radisson blue plaza","Hotel shanthi","Hotel krishna palace","Hotel prakash"},
		{"Gujarat","","1.Ahmedabad","2.Vadodara","3.Gandhi Nagar","1.Statue of unity","2.Rani ki vav","3.sun temple","1.Somnat valley temple","2.Sabaramata River","3.White desert","The ITC grand","The leela palace","the taj palace","Hyatt recedency","Radisson blu","Four points by shearton","Holiday Inn","Hotel priya","Hotel vimal"},
		{"Haryana","","1.Gurgaon","2.Rohtak","3.Sonipat","1.Ambeince mall","2.Fun City","3.Aravali park","1.Sai ka angan temple","2.Leiusu valley park","3.Sheetla mata park","The st.regis","The park hyatt","The ITC grand","The four seasons hotel","The Hilton garden","THe radisson blue plaza","Hotel shanthi","Hotel krishna palace","Hotel prakash"},
		{"Himachal Pradesh","","1.Manali","2.Malana","3.Solang Valley","1.Rohtang Pass","2.Daniker park","3.Manikaran Gurudwara","1.Himdbetta dwell temple","2.Beas river","3.Trinind Hills","The ITC grand","The leela palace","the taj palace","Hyatt recedency","Radisson blu","Four points by shearton","Holiday Inn","Hotel priya","Hotel vimal"},
		{"Jharkhand","","1.Ranchi","2.West Singhabum","3.Jamshedpur","1.Jubalier Park","2.Paratu Valley","3.Parasnath Hills","1.Jagannath Mandi","2.Dasau falls","3.Jonba Falls","The four seasons hotel","The JW Marriott","The hotel of rich","Country inn and SUITS","Holiday inn","IBIS hotels","Hotel pankaj","Hotel sitarm","hotel ramsetu"},
		{"Karnataka","","1.Benguluru","2.Cooke Town","3.Benson Town","1.Mysore Palace","2.Bangalore Palace","3.OM Beach","1.Savandurga","2.Yercuda","3.Skandagiri","Taj lake palace","The carlton","The oberoi","Lemon tree premier","The park","The park","Fairfield hotel","Fairfield hotel","Fairfield hotel"},
		{"Kerala","","1.Kochi","2.Tiruvananthapuram","3.Kozhikode","1.Munnar","2.Allapuzha","3.Wayannad","1.Parambikulam-palakkad-","2.Kasaragod","3.Varkala beach","Grand hyatt kochi","old harbour hotel","The postland Mandalay hall","Fort square home stay","Oiasis inn","Surya residency","Gopika residency","Hiliya resort","The leaf munnar"},
		{"Madhya Pradesh","","1.Bhopal","2.Gwalior","3.Orccha","1.Indore","2.Ship Palace","3.Ship Palace","1.shree maha kaleshwar temple","2.kanha national park","3.Bimbhettka","The ITC grand","The leela palace","the taj palace","Hyatt recedency","Radisson blu","Four points by shearton","Holiday Inn","Hotel priya","Hotel vimal"},
		{"Maharashtra","","1.Mumbai","2.Juhu","3.Chowpatty beach","1.Pune","2.Rajmachi","3.Nagpur","1.Mraine drive","2.Ellora Caves","3.Ajanta Caves","Taj Mahal Palace","The Oberoi","The st.Rejis","Lemon tree hotels","Four points by sheraton","Ginger Hotels","Holiday inn","Hotel simran","Hotel jadu",},
		{"Manipur","","1.The war Cemetery in Imphal","2.The iskon temple","3.Singda dam","1.LOKTAK lake","2.Kangla fort","3.INA museum","1.The iskon temple","2.Singda dam","3.LOKTAK lake","The four seasons hotel","The Hilton garden","THe radisson blue plaza","Hotel shanthi","Hotel krishna palace","Hotel prakash"},
		{"Meghalaya","","1.Shillong","2.Mawsynram","3.Williamnagar","1.Jowai","2.Nongoph","3.Dawki","1.Kongtong","2.Cherrapunje","3.Cherrapunje","The four seasons hotel","The JW Marriott","The hotel of rich","Country inn and SUITS","Holiday inn","IBIS hotels","Hotel pankaj","Hotel sitarm","hotel ramsetu"},
		{"Mizoram","","1.Aizawl","2.Lunglei","3.Mamit","1.Solomon's Temple","2.Tamdil lake","3.Mizoram state museum","1.Burra bazar","2.Champai","3.Kalasib","The ITC grand","The leela palace","the taj palace","Hyatt recedency","Radisson blu","Four points by shearton","Holiday Inn","Hotel priya","Hotel vimal"},
		{"Nagaland","","1.kohima","2.Mon","3.Beneru","1.Kiphere","2.phek","3.Naga heritage valley","1.Dimapur","2.japfu peak","3.Longleng","The st.regis","The park hyatt","The ITC grand","The four seasons hotel","The Hilton garden","THe radisson blue plaza","Hotel shanthi","Hotel krishna palace","Hotel prakash"},
		{"Odisha","","1.Khordha","2.Bubaneshwar","3.Talasari Beach","1.Shree jagannath temple","2.Simlipal national park","3.Khandagiri caves","1.Chandipur","2.Pipli","3.Roopark","The four seasons hotel","The JW Marriott","The hotel of rich","Country inn and SUITS","Holiday inn","IBIS hotels","Hotel pankaj","Hotel sitarm","hotel ramsetu"},
		{"Punjab","","1.Amritsar","2.Ludhiana","3.patiala","1.Ropar","2.Nangal","3.Pathankot","1.Mohali","2.Sirhind","3.Jalandhar","The st.regis","The park hyatt","The ITC grand","The four seasons hotel","The Hilton garden","THe radisson blue plaza","Hotel shanthi","Hotel krishna palace","Hotel prakash"},
		{"Rajasthan","","1.Rmbagh palace jaipur","2. Jodhpur","3.Samode palace","1,RAAS DEVIGARGH","2.The kumbha bagh","3.Neemrana palace","1.Jag mandir","2.Jag mandir","3.Jag mandir","The ITC grand","The leela palace","The taj palace","Hyatt recedency","Radisson blu","Four points by shearton","Holiday Inn","Hotel priya","Hotel vimal"},
		{"Sikkim","","1.Gangtok","2.Nathula pass","3.kanchenjunga base pass","1.pelling","2.cholamu","3.Yangtey","1.Singailaia","2.Green lake","3.Zero point","The ITC grand","The leela palace","the taj palace","Hyatt recedency","Radisson blu","Four points by shearton","Holiday Inn","Hotel priya","Hotel vimal"},
		{"Tamilnadu","","1.Chennai","2.Poindicherry","3.Mudumalai","1.Trichy","2.Nagapattinam","3.Vellore","1.Yanam","2.Tranquebar","3.Chettinad","Novotel","The Oberoi","The leela Palace","Lemon Tree Premier","The park","The lalit Ashok","Hotel Surya","Hotel akshaya","Hotel Prakash"},
		{"Telangana","","1.Hyderabad(famous for biryani)","2.Warangal","3.Khammam","1.Nalagonda","2.Ramoji Film city","3.charminar","1.Nehru Zoological park","2.Golconda Fort","3.Shilparamam","Novotel","The Oberoi","The leela Palace","Lemon Tree Premier","The park","The lalit Ashok","Hotel Surya","Hotel akshaya","Hotel Prakash"},
		{"Tripura","","1.Ujjanta palace","2.jampui hils","3.kunjaban palace","1.Neer mahal palace","2.Tepaina park","3.Pilak","1.Gunavati group of temples","2.Mekhlipara tea estate","3.Trishna wild life sanctuary","The Leela palace","Taj lake palace","The park hyatt","The st.regis","The park hyatt","The ITC grand","The four seasons hotel"},
		{"Uttar Pradesh","","1.Lucknow","2.Hazratganj","3.Gomti Nagar","1.Aliganj","2.Mahanagar","3.Agra fort","1.Sarnath","2.Dasaswamedh ghat","3.Ganges river","The st.regis","The park hyatt","The ITC grand","The four seasons hotel","The Hilton garden","THe radisson blue plaza","Hotel shanthi","Hotel krishna palace","Hotel prakash"},
		{"Uttarakhand","","1.Jim corbett","2.Binsar","3.bhimbtal","1.kanatal","2.chopta","3.Almora","1.Pangot","2.tunganath","3.Champawat","The four seasons hotel","The JW Marriott","The hotel of rich","Country inn and SUITS","Holiday inn","IBIS hotels","Hotel pankaj","Hotel sitarm","hotel ramsetu"},
		{"West Bengal","","1.Bhawanipore","2.Alipore","3.Salt lake","1.Park street","2.Victoria memoria hall","3.Mother house","1.Park street","2.Tiger hall","3.Belur Math","The four seasons hotel","The JW Marriott","The hotel of rich","Country inn and SUITS","Holiday inn","IBIS hotels","Hotel pankaj","Hotel sitarm","hotel ramsetu"},
	};
	printf("\t\t\t\t***Welcome to 'THE INCREDIBLE JOURNEY'***\n");
	printf("Enter your name please:\n");
	gets(name);
	printf("\n\n Hello %s \n\n welcome aboard\n",name);
	printline();
	printf("\n these are the different states in India.\n\n Select your desired destination state to travel\n");
	  printf("\n1-Andhra Pradesh         2-Arunanchal Pradesh      3-Assam           4-Bihar \n ");
    printf("\n5-Chhattisgarh             6-Goa                     7-Gujarat         8-Haryana\n");
    printf("\n9-Himachal Pradesh         10-Jharkhand              11-Karnataka      12-Kerala \n");
    printf("\n13-Madhya Pradesh          14-Maharashtra            15-Manipur        16-Meghalaya\n");
    printf("\n17-Mizoram                 18-Nagland                19-Orissa         20-Punjab \n");
    printf("\n21-Rajasthan               22-Sikkim                 23-Tamil Nadu     24-Telangana  \n");
    printf("\n25-Tripura                 26-Uttar pradesh          27-Uttarakhand    28-WestBengal\n");
    printline();
    printf("\n\n");
    label_2:
    printline();
	printf("\nChoose your destination state:  ");
	scanf("%d",&state);
	
	if(state<=29 && state>0)
	{
	printf("\nYou have chosen *'%s'* state\n",place[state][0]);
}
else
{
	printf("the number you have choosen is wrong\n");
	goto label_2;
}
	printline();
	printf("\n Desired duration of stay:(max 10)\n");
	scanf("%d",&course);
	if(course>0 && course<=10)
	{
	printline();
	printf("\nEnter the day and month of time of arrival in DDMM format: ");
	scanf("%d",&temp);
	month=temp%100;
	day=temp/100;
	if(day<=array[month+1] && day>0 && month>0 && month<13)
	{
		printf("\nYour arrival date is %d-%d-2023\n",day,month);
		tempdate=day;
		tempmonth=month;
	total=rec(month)+day;
	total+=course;
	if(total<=365)
	{
		year=2023;
	revback(&total,&month);
	printf("\nYour departure date is %d-%d-%d\n\n",total,month,year);
}
else
{
	revback(&total,&month);
	month=1;
	year=2024;
	printf("\nYour departure date is %d-%d-%d\n",total,month,year);
}

}
else
printf("the number of days reached its maximum limit\n");

}
	else
	{
	printf("\nThe number of days that you have entered is wrong\n");
}
printline();
  printf("\n****Letus book a cab to %s****\n",place[state][0]);
    printf("     Introductory price of booking cab is %d per person only!!!!!\n",cost);
    printf("How many are going?   (max 4)\n-->");
    scanf("%d",&member);
    if(member<=4 && member>0)
    {
      printf(" ****SO THE TOTAL COST OF YOUR CAB IS: %d\n",member*cost);
    }
    else
    printf("**MAX LIMIT REACHED**\n");
    printline();
    label_1:
	printf("\nNow enter your budget:\n");
	scanf("%d",&budget);
	printf("\nThe places available for your budget are :\n");
	if(budget>=40000 && budget<=60000)
	{
		for (int j=2;j<5;j++)
	{
		printf("%s\t",place[state][j]);
		}
		{
		tempadd=0;
		hotelcost=2000;
		totalcost=hotel(state,place,tempadd,hotelcost,course,&choosen);
		printf("\nTotal cost for staying in hotel is %d",totalcost);
	}
	}
	
		else if(budget>=20000 && budget<39999)
		{
		for (int k=5;k<8;k++)
	{
		printf("%s\t",place[state][k]);
		}
		{
		tempadd=3;
		hotelcost=1200;
		totalcost=hotel(state,place,tempadd,hotelcost,course,&choosen);
		printf("\nTotal cost for staying in hotel is %d",totalcost);
	}
			
}
		else if(budget>=10000 && budget<20000 )
		{
		for (int l=8;l<11;l++)
	{
		printf("%s\t",place[state][l]);
	}
	{
		tempadd=6;
        hotelcost=800;
		totalcost=hotel(state,place,tempadd,hotelcost,course,&choosen);
		printf("\nTotal cost for staying in hotel is %d",totalcost);
	}	
}
	else
	{
	printf("Max limit of budget is reached or is under the minimum requirement\n please try again");
	goto label_1;
}
printf("\n");
printline();
printf("\nDo you want to confirm the ticket\n if yes;Press 1:\n");
scanf("%d",&agreement);
if ((agreement=1))
{
printf("\n\n    **HERE IS YOUR TICKET**\n\n");
    printf(" ======================================================================================================================\n");
    printf("                                                 'THE INCREDIBLE JOURNEY'                                \n");
    printf("                                                                            date of arrival %d-%d-%d     \n",tempdate,tempmonth,tempyear);
    printf("                                                                            date of departure %d-%d-%d     \n",total,month,year);
    printf("                                     NAME:- %s                          \n",name);
    printf("                                     Total no of Passengers:- %d        \n",member);
    printf("                                     STATE:- %s                         \n",place[state][0]);
    printf("                                     PLACE:- %s                         \n",place[state][choosen+tempadd+1]);
    printf("                                     HOTEL:- %s                         \n",place[state][choosen+tempadd+10]);
    printf("                                     course of the trip:- %d            \n",course);
    printf("                                     TOTAL COST(incl cab):- %d          \n",totalcost+(member*cost));
    printf("                                              ---HAVE A HAPPY VACATION---                                     \n");
    printf(" =======================================================================================================================\n");
    
    feedback();
    printf("Our agencies will contact you for the required payment mode");
}
else
{
	printf("Please try again");
}
	return 0;
}
int hotel(int state,char arr[Rows][Columns][string],int tempadd,int hotelcost,int course,int* choose)
{
		printf("\n\nSelect the place: \n");
		scanf("%d",choose);
		printf("The hotel near to your specified location is: %s\n",arr[state][*choose+tempadd+10]);
		hotelcost*=course;
		return hotelcost;
	}

int rec(int month)
{
	int array[14]={0,0,31,28,31,30,31,30,31,31,30,31,30,31};
	if (month==0)
	return 0;
	else
	return (array[month]+rec(month-1));
}
void revback(int* total,int* month)
{
	int array[15]={0,0,31,28,31,30,31,30,31,31,30,31,30,31};
	int sum=0;
	for(int i=1;i<=*month;i++)
	{
		sum+=array[i];
	}
	*total-=sum;
	if(*total>=array[*month+1])
	{
	*total-=array[*month+1];
	*month+=1;
}
	return;
}
void feedback(void)
{
	int feed;
	printf("\n\nRate our website in a scale of 1 to 5\n");
	scanf("%d",&feed);
	switch(feed)
	{
		case 1:
		case 2:
		case 3:
		printf("Sorry for the unsatisfactory results\n we will improve next time\n");
		break;
		case 4:
		case 5:
		printf("Thank you for the review\n plese visit us again for the same satisfactory service\n ");
		break;
		default:
		printf("Please enter the correct number between 1 to 5");
		break;
	}
		return;
	}
	void printline(void)
	{
		printf("----------------------------------------------------------------------------------------------------------");
		return;
	}
	
