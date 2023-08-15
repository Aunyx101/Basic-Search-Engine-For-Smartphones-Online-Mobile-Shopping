#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

class check{
	int choice_year;
	int choice_price;
	int choice_battery;
	int choice_rom;
	int choice_camera;
	int choice_screen;
	int choice_names;
	int choice_mslot;
	int choice_dualsim;
	int choice_data;
	int choice_finger;
	int choice_ncamera;
	int choice_fcamera;
	int choice_audioj;
	int choice_process;
	int choice_fcharge;
	int choice_os;
	
	public:	
	char names[50][100]={"QMobile Noir E8", "Iphone 11 Pro Max", "Samsung Galaxy S20 FE", "VIVO V20", "Infinix Note 8","Nokia 1 Plus","Nokia C1","Nokia 3.4","Nokia 2.2","Nokia 7.2","Apple iphone 11","Apple iphone SE 2020","Oppo F17 pro","Oppo Reno 4","Oppo A12","Oppo A11K","Oppo A53","Samsung Galaxy M31","Samsung Galaxy A31","Samsung Galaxy A7","Samsung Galaxy A10s","Samsung Galaxy A11","Samsung Galaxy A21s","Samsung Galaxy A51","Samsung Galaxy Note 10 LITE","Samsung Galaxy Note 20","Samsung Galaxy S20","Samsung Galaxy Z-flip","Apple iphone X","Apple iphone 6","Apple iphone XS max","Honor 9X","Honor 8A","Vivo Y20","Vivo Y51","Vivo V17","Vivo Y11","Vivo Y30","Vivo Y9 1D","OnePlus Nord","OnePlus 8T","OnePlus N10","OnePlus 8","Infinix Hot 9 Play","Infinix ZERO 8","Infinix ZERO 8i","Infinix Hot 10","Infinix Note 7","Tecno Spark 6","Tecno POP 3"};
	
	char years[50][100]={"2015","2020","2020","2020","2020","2019","2019","2020","2020","2020","2019","2020","2020","2020","2020","2020","2020","2020","2020","2020","2018","2019","2020","2019","2021","2020","2020","2020","2017","2016","2018","2019","2019","2020","2020","2019","2019","2020","2018","2020","2020","2020","2020","2020","2020","2020","2020","2020","2020","2020"};     //char mai islie qk string comparison k waqt msla hrha tha!

	char prices[50][100]={"30000","230000","120000","60000","30000","8500","8500","25000","15000","50000","176000","100000","50000","60000","20000","19000","30000","45000","35000","65000","17000","19000","34000","55000","100000","176000","120000","260000","165000","44000","170000","40000","20000","25000","35000","60000","20000","28000","16000","100000","140000","65000","180000","19000","40000","35000","20500","24000","19000","8500"};
		           
	char battery[50][100]={"3500","4000","4500" ,"4000","5000","2500","2500","4000","3000","3500","3000","2000","4000","4000","4000","4000","5000","6000","5000","3500","4000","4000","5000","4000","4500","4500","4000","3500","2500","2000","3000","4000","3000","5000","4500","4000","5000","5000","4000","4000","4500","4500","4500","6000","4500","4500","5000","5000","5000","4000"};
    
	char rom[50][100]={"64","128","128","128","128","16","16","64","32","128","64","64","128","128","32","32","64","64","128","128","32","32","128","128","128","256","128","256","256","32","64","128","64","64","128","64","32","64","32","256","128","128","128","64","128","128","64","128","64","16"};

	char camera[50][100]={"24","12","12","64","64","8","8","13","13","48","12","12","48","48","13","13","13","64","48","24","13","13","48","48","12","64","64","12","12","8","12","48","13","13","48","64","13","13","13","48","48","64","48","13","64","48","16","48","16","8"};

	char screen[50][100]={"6","6.5","6.5","6.4","6.9","5.5","5.5","6.4","5.7","6.4","6","4.7","6.4","6.4","6.2","6.2","6.5","6.4","6.4","6","6.2","6.4","6.5","6.5","6.7","6.7","6.2","6.7","5.8","4.7","6.5","6.7","6","6.5","6.4","6.4","6.4","6.5","6.2","6.4","6.5","6.5","6.5","6.8","6.8","6.8","6.8","6.9","6.8","6.5"};
    
	char mslot[50][4]={"yes","no","yes","yes","yes","yes","yes","yes","yes","yes","no","no","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","no","yes","no","no","no","no","yes","yes","yes","yes","yes","yes","yes","yes","no","no","yes","no","yes","yes","yes","yes","yes","yes","yes"};

	char dualsim[50][4]={"yes","no","yes","yes","yes","yes","yes","yes","yes","yes","no","no","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","no","no","no","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes"};

	char data[50][3]={"3G","4G","4G","4G","4G","4G","3G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G"};

	char finger[50][4]={"yes","no","yes","yes","yes","no","no","yes","no","yes","no","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","no","yes","no","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes",};

	char ncamera[50][100]={"2","4","4","4","5","2","2","4","2","4","3","2","6","5","3","3","4","4","5","4","3","4","5","5","4","4","4","3","4","2","4","4","2","4","5","4","4","5","3","6","5","5","4","3","6","6","5","5","5","2"};

	char fcamera[50][100]={"8","12","32","44","16","5","5","8","5","20","12","8","16","32","5","5","16","32","20","20","8","8","12","32","32","10","10","10","8","8","8","16","8","8","16","44","8","8","8","32","16","16","16","8","48","16","8","16","8","8"};

	char audioj[50][4]={"yes","no","no","yes","yes","yes","yes","yes","yes","yes","no","no","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","no","no","no","no","yes","no","yes","yes","yes","yes","yes","yes","yes","yes","no","no","yes","no","yes","yes","yes","yes","yes","yes","yes"};

	char process[50][100]={"2.0","2.65","2.7","2.3","2.0","1.5","1.3","1.8","2.0","2.2","2.65","2.65","2.2","2.3","2.3","2.3","1.8","2.3","2.0","2.2","2.0","1.8","2.0","2.3","2.7","2.7","2.7","2.9","2.3","1.3","2.5","2.2","2.3","1.8","2.0","2.0","2.0","2.4","2.0","2.4","2.84","2.0","2.84","2","2.0","2.0","2","2","1.8","1.3"};

	char fcharge[50][100]={"no","yes","yes","yes","yes","no","no","no","no","no","yes","yes","yes","yes","no","no","yes","yes","yes","no","no","yes","yes","yes","yes","yes","yes","yes","yes","no","yes","no","no","yes","yes","yes","no","no","no","yes","yes","yes","yes","no","yes","yes","no","yes","yes","no"};
	
	char os[50][10]={"Android","ios","Android","Android","Android","Android","Android","Android","Android","Android","ios","ios","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","ios","ios","ios","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android"};

		
		
		
		
		


	int years2[50]={2015,2020,2020,2020,2020,2019,2019,2020,2020,2020,2019,2020,2020,2020,2020,2020,2020,2020,2020,2020,2018,2019,2020,2019,2021,2020,2020,2020,2017,2016,2018,2019,2019,2020,2020,2019,2019,2020,2018,2020,2020,2020,2020,2020,2020,2020,2020,2020,2020,2020};     //char mai islie qk string comparison k waqt msla hrha tha!
     
    int prices2[50]={30000,230000,120000,60000,30000,8500,8500,25000,15000,50000,175000,100000,50000,60000,20000,19000,30000,45000,35000,65000,17000,19000,34000,55000,100000,176000,120000,260000,165000,44000,170000,40000,20000,25000,35000,60000,20000,28000,16000,100000,140000,65000,180000,19000,40000,35000,20500,24000,19000,8500};                                         //Same Goes for the price,e.g=prices[0] is the price of names[0]=Qmobile Noir E8
	    
    int battery2[50]={3500,4000,4500,4000,5000,2500,2500,4000,3000,3500,3000,2000,4000,4000,4000,4000,5000,6000,5000,3500,4000,4000,5000,4000,4500,4500,4000,3500,2500,2000,3000,4000,3000,5000,4500,4000,5000,5000,4000,4000,4500,4500,4500,6000,4500,4500,5000,5000,5000,4000};
    
	int rom2[50]={64,128,128,128,128,8,16,64,32,128,64,64,128,128,32,32,64,64,128,128,32,32,128,128,128,256,128,256,256,32,64,128,64,64,128,64,32,64,32,256,128,128,128,64,128,128,64,128,64,16};

	int camera2[50]={24,12,12,64,64,8,5,13,13,48,12,12,48,48,13,13,13,64,48,24,13,13,48,48,12,64,64,12,12,8,12,48,13,13,48,64,13,13,13,48,48,64,48,13,64,48,16,48,16,8};

  	float screen2[50]={6,6.5,6.5,6.4,6.95,5.45,5.45,6.4,5.7,6.4,6.1,4.7,6.4,6.4,6.2,6.2,6.5,6.4,6.4,6,6.2,6.4,6.5,6.5,6.7,6.7,6.2,6.7,5.8,4.7,6.5,6.6,6.1,6.5,6.4,6.4,6.4,6.5,6.2,6.4,6.5,6.5,6.5,6.8,6.8,6.8,6.8,6.9,6.8,6.5};
    	
	int ncamera2[50]={2,4,4,4,5,2,2,4,2,4,3,2,6,5,3,3,4,4,5,4,3,4,5,5,4,4,4,3,4,2,4,4,2,4,5,4,4,5,3,6,5,5,4,3,6,6,5,5,5,2};

	float fcamera2[50]={8,12,32,44,16,5,5,8,5,20,12,7,16,32,5,5,16,32,20,24,8,8,13,32,32,10,10,10,7,7,7,16,8,8,16,44,8,8,8,32,16,16,16,8,48,16,8,16,8,8};

	float process2[50]={2,2.65,2.7,2.3,2,1.5,1.3,1.8,2,2.2,2.65,2.65,2.2,2.3,2.35,2.35,1.8,2.3,2.0,2.2,2.0,1.8,2.0,2.3,2.7,2.73,2.73,2.95,2.39,1.4,2.5,2.2,2.3,1.8,2.0,2.0,1.95,2.35,1.95,2.4,2.84,2.0,2.84,2,2.0,2.0,2,2,1.8,1.3};


	

	
	
	
		int count1,count2,compare;
	
		char res1[50][100],res2[50][100],res3[50][100],res7[50][100],res8[50][100],res9[50][100],res10[50][100];
		char res4[50][100],res5[50][100],res11[50][100],res12[50][100],res13[50][100];
		char res6[50][100],res14[50][100],res15[50][100],res16[50][100];
	
	void setvar(int year, int price, int battery, int rom, int camera, int screen, int mslot, int dualsim, int data, int finger, int ncamera, int fcamera, int audioj, int processor,int fcharge, int os){
		choice_year=year;
		choice_price=price;
		choice_battery=battery;
		choice_rom=rom;
		choice_camera=camera;
		choice_screen=screen;
		choice_mslot=mslot;
		choice_dualsim=dualsim;
		choice_data=data;
		choice_finger=finger;
		choice_ncamera=ncamera;
		choice_fcamera=fcamera;
		choice_audioj=audioj;
		choice_process=processor;
		choice_fcharge=fcharge;
		choice_os=os;
	}
	
	void ini(){
	    for (count1=0;count1<50;count1++){
		    for (count2=0;count2<100;count2++){
		    	res1[count1][count2]=0;
		        res2[count1][count2]=0;
		        res3[count1][count2]=0;
		        res4[count1][count2]=0;
		        res5[count1][count2]=0;
		        res6[count1][count2]=0;
		        res7[count1][count2]=0;
		        res8[count1][count2]=0;
		        res9[count1][count2]=0;
		        res10[count1][count2]=0;
		        res11[count1][count2]=0;
		        res12[count1][count2]=0;
		        res13[count1][count2]=0;
		        res14[count1][count2]=0;
		        res15[count1][count2]=0;
		        res16[count1][count2]=0;
		    
			}      	
		}                     
	}
	
	//checkes
void checkyear(){
		if (choice_year==1){
			for (count1=0;count1<50;count1++){
				compare=strcmp(years[count1],"2015");
				if (compare==0){
				strcpy(res1[count1], names[count1]);
				}
			}
		}
		if (choice_year==2){
			for (count1=0;count1<50;count1++){
				compare=strcmp(years[count1],"2016");
				if (compare==0){
				strcpy(res1[count1], names[count1]);
			    }
			}
		}
		if (choice_year==3){
			for (count1=0;count1<50;count1++){
				compare=strcmp(years[count1],"2017");
				if (compare==0){
				strcpy(res1[count1], names[count1]);
				}
			}
		}
		if (choice_year==4){
			for (count1=0;count1<50;count1++){
				compare=strcmp(years[count1],"2018");
				if (compare==0){
				strcpy(res1[count1], names[count1]);
				}
			}
		}
		if (choice_year==5){
			for (count1=0;count1<50;count1++){
				compare=strcmp(years[count1],"2019");
				if (compare==0){
				strcpy(res1[count1], names[count1]);
				}
			}
		}
		if (choice_year==6){
			for (count1=0;count1<50;count1++){
				compare=strcmp(years[count1],"2020");
				if (compare==0){
				strcpy(res1[count1], names[count1]);
				}
			}
		}
		if (choice_year==7){
			for (count1=0;count1<50;count1++){
				compare=strcmp(years[count1],"2021");
				if (compare==0){
				strcpy(res1[count1], names[count1]);
				}
			}
		}	
		if (choice_year==8){
			for (count1=0;count1<50;count1++){
				strcpy(res1[count1], names[count1]);
			}
		}		
	}

	
void checkprice(){
		if (choice_price==1){                        // 5000 to 19'999
			for (count1=0;count1<50;count1++){
				compare=(strcmp(prices[count1],"8500"));
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"15000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"16000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"17000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"19000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
			}
		}
		if (choice_price==2){                       // 20'000 to 29'999
			for (count1=0;count1<50;count1++){
				compare=(strcmp(prices[count1],"20000"));	
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"20500");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"24000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"25000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"28000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				
			}
		}
			if (choice_price==3){                       // 30'000 to 49'999
			for (count1=0;count1<50;count1++){
				compare=(strcmp(prices[count1],"30000"));
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"34000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"35000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"40000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"44000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"45000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
			}
		}
			if (choice_price==4){                       // 50'000 to 99'999
			for (count1=0;count1<50;count1++){
				compare=(strcmp(prices[count1],"50000"));
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"55000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"60000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"65000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
			}
		}
			if (choice_price==5){                       // 100'000 to 149'999
			for (count1=0;count1<50;count1++){
				compare=(strcmp(prices[count1],"100000"));
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"120000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"140000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
			}
		}	
			if (choice_price==6){                       // above 150'000 
			for (count1=0;count1<50;count1++){
				compare=(strcmp(prices[count1],"165000"));
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"170000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"176000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"180000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"230000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(prices[count1],"260000");
				}
				if (compare==0){
				strcpy(res2[count1], names[count1]);
				}
			}
		}	
			if (choice_price==7){                     // skip 
			for (count1=0;count1<50;count1++){
				strcpy(res2[count1], names[count1]);
			}
		}	
	}
	
	
	void checkbattery(){
		if (choice_battery==1){
			for (count1=0;count1<50;count1++){
				compare=strcmp(battery[count1],"2000");
				if (compare==0){
				strcpy(res3[count1], names[count1]);
				}
			}
		}
		if (choice_battery==2){
			for (count1=0;count1<50;count1++){
				compare=strcmp(battery[count1],"2500");
				if (compare==0){
				strcpy(res3[count1], names[count1]);
				}
			}
		}
		if (choice_battery==3){
			for (count1=0;count1<50;count1++){
				compare=strcmp(battery[count1],"3000");
				if (compare==0){
				strcpy(res3[count1], names[count1]);
				}
			}
		}
		if (choice_battery==4){
			for (count1=0;count1<50;count1++){
				compare=strcmp(battery[count1],"3500");
				if (compare==0){
				strcpy(res3[count1], names[count1]);
				}
			}
		}
		if (choice_battery==5){
			for (count1=0;count1<50;count1++){
				compare=strcmp(battery[count1],"4000");
				if (compare==0){
				strcpy(res3[count1], names[count1]);
				}
			}
		}
		if (choice_battery==6){
			for (count1=0;count1<50;count1++){
				compare=strcmp(battery[count1],"4500");
				if (compare==0){
				strcpy(res3[count1], names[count1]);
				}
			}
		}
		if (choice_battery==7){
			for (count1=0;count1<50;count1++){
				compare=strcmp(battery[count1],"5000");
				if (compare==0){
				strcpy(res3[count1], names[count1]);
				}
			}
		}
		if (choice_battery==8){
			for (count1=0;count1<50;count1++){
				compare=strcmp(battery[count1],"6000");
				if (compare==0){
				strcpy(res3[count1], names[count1]);
				}
			}
		}
		if (choice_battery==9){
			for (count1=0;count1<50;count1++){
				strcpy(res3[count1], names[count1]);
			}
		}	
	}

	void checkrom(){
		if (choice_rom==1){
			for (count1=0;count1<50;count1++){
				compare=strcmp(rom[count1],"16");
				if (compare==0){
				strcpy(res4[count1], names[count1]);
				}
			}
		}
		if (choice_rom==2){
			for (count1=0;count1<50;count1++){
				compare=strcmp(rom[count1],"32");
				if (compare==0){
				strcpy(res4[count1], names[count1]);
				}
			}
		}	
		if (choice_rom==3){
			for (count1=0;count1<50;count1++){
				compare=strcmp(rom[count1],"64");
				if (compare==0){
				strcpy(res4[count1], names[count1]);
				break;
				}
			}
		}
		if (choice_rom==4){
			for (count1=0;count1<50;count1++){
				compare=strcmp(rom[count1],"128");
				if (compare==0){
				strcpy(res4[count1], names[count1]);
				}
			}
		}
		if (choice_rom==5){
			for (count1=0;count1<50;count1++){
				compare=strcmp(rom[count1],"256");
				if (compare==0){
				strcpy(res4[count1], names[count1]);
				}
			}
		}	
		if (choice_rom==6){
			for (count1=0;count1<50;count1++){
				strcpy(res4[count1], names[count1]);
			}
		}	
	}
	
	void checkcamera(){
		if (choice_camera==1){
			for (count1=0;count1<50;count1++){
				compare=strcmp(camera[count1],"8");
				if (compare==0){
				strcpy(res5[count1], names[count1]);
				}
			}
		}
		if (choice_camera==2){
			for (count1=0;count1<50;count1++){
				compare=strcmp(camera[count1],"12");
				if (compare==0){
				strcpy(res5[count1], names[count1]);
				}
			}
		}	
		if (choice_camera==3){
			for (count1=0;count1<50;count1++){
				compare=strcmp(camera[count1],"13");
				if (compare==0){
				strcpy(res5[count1], names[count1]);
				}
			}
		}
		if (choice_camera==4){
			for (count1=0;count1<50;count1++){
				compare=strcmp(camera[count1],"16");
				if (compare==0){
				strcpy(res5[count1], names[count1]);
				}
			}
		}
		if (choice_camera==5){
			for (count1=0;count1<50;count1++){
				compare=strcmp(camera[count1],"24");
				if (compare==0){
				strcpy(res5[count1], names[count1]);
				}
			}
		}
		if (choice_camera==6){
			for (count1=0;count1<50;count1++){
				compare=strcmp(camera[count1],"48");
				if (compare==0){
				strcpy(res5[count1], names[count1]);
				}
			}
		}	
		if (choice_camera==7){
			for (count1=0;count1<50;count1++){
				compare=strcmp(camera[count1],"64");
				if (compare==0){
				strcpy(res5[count1], names[count1]);
				}
			}
		}
		if (choice_camera==8){
			for (count1=0;count1<50;count1++){
				strcpy(res5[count1], names[count1]);
			}
		}	
	}
	
	void checkscreen(){
		if (choice_screen==1){											// 4.5 to 5.5
			for (count1=0;count1<50;count1++){
				compare=(strcmp(screen[count1],"4.7"));
				if (compare==0){
				strcpy(res6[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(screen[count1],"5.5");
				}
				if (compare==0){
				strcpy(res6[count1], names[count1]);
				}
			}
		}
		if (choice_screen==2){											// 5.5 to 6.0
			for (count1=0;count1<50;count1++){
				compare=(strcmp(screen[count1],"5.7"));
				if (compare==0){
				strcpy(res6[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(screen[count1],"5.8");
				}
				if (compare==0){
				strcpy(res6[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(screen[count1],"6");
				}
				if (compare==0){
				strcpy(res6[count1], names[count1]);
				}
			}
		}
			if (choice_screen==3){										// 6.0 to 6.5
			for (count1=0;count1<50;count1++){
				compare=(strcmp(screen[count1],"6.2"));
				if (compare==0){
				strcpy(res6[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(screen[count1],"6.4");
				}
				if (compare==0){
				strcpy(res6[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(screen[count1],"6.5");
				}
				if (compare==0){
				strcpy(res6[count1], names[count1]);
				}
			}
		}
			if (choice_screen==4){										// above 6.5
			for (count1=0;count1<50;count1++){
				compare=(strcmp(screen[count1],"6.7"));
				if (compare==0){
				strcpy(res6[count1], names[count1]);
				}
					else if(compare!=0){
					compare=strcmp(screen[count1],"6.8");
				}
				if (compare==0){
				strcpy(res6[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(screen[count1],"6.9");
				}
				if (compare==0){
				strcpy(res6[count1], names[count1]);
				}
			}
		}
			if (choice_screen==5){										//skip
			for (count1=0;count1<50;count1++){
				strcpy(res6[count1], names[count1]);
			}
		}	
	}
	
	void checkmslot(){
		if (choice_mslot==1){
			for (count1=0;count1<50;count1++){
				compare=strcmp(mslot[count1],"yes");
				if (compare==0){
				strcpy(res7[count1], names[count1]);
				}
			}
		}
		if (choice_mslot==2){
			for (count1=0;count1<50;count1++){
				compare=strcmp(mslot[count1],"no");
				if (compare==0){
				strcpy(res7[count1], names[count1]);
				}
			}
		}
		if (choice_mslot==3){
			for (count1=0;count1<50;count1++){
				strcpy(res7[count1], names[count1]);
			}
		}	
	}
	
	void checkdualsim(){
		if (choice_dualsim==1){
			for (count1=0;count1<50;count1++){
				compare=strcmp(dualsim[count1],"yes");
				if (compare==0){
				strcpy(res8[count1], names[count1]);
				}
			}
		}
		if (choice_dualsim==2){
			for (count1=0;count1<50;count1++){
				compare=strcmp(dualsim[count1],"no");
				if (compare==0){
				strcpy(res8[count1], names[count1]);
				}
			}
		}	
		if (choice_dualsim==3){
			for (count1=0;count1<50;count1++){
				strcpy(res8[count1], names[count1]);
			}
		}	
	}
	
		void checkdata(){
		if (choice_data==1){
			for (count1=0;count1<50;count1++){
				compare=strcmp(data[count1],"4G");
				if (compare==0){
				strcpy(res9[count1], names[count1]);
				}
			}
		}
		if (choice_data==2){
			for (count1=0;count1<50;count1++){
				compare=strcmp(data[count1],"3G");
				if (compare==0){
				strcpy(res9[count1], names[count1]);
				}
			}
		}
		if (choice_data==3){
			for (count1=0;count1<50;count1++){
				strcpy(res9[count1], names[count1]);
			}
		}	
	}
	
		void checkfinger(){
		if (choice_finger==1){
			for (count1=0;count1<50;count1++){
				compare=strcmp(finger[count1],"yes");
				if (compare==0){
				strcpy(res10[count1], names[count1]);
				}
			}
		}
		if (choice_finger==2){
			for (count1=0;count1<50;count1++){
				compare=strcmp(finger[count1],"no");
				if (compare==0){
				strcpy(res10[count1], names[count1]);
				}
			}
		}
		if (choice_finger==3){
			for (count1=0;count1<50;count1++){
				strcpy(res10[count1], names[count1]);
			}
		}	
	}
	
		void checkncamera(){
		if (choice_ncamera==1){
			for (count1=0;count1<50;count1++){
				compare=strcmp(ncamera[count1],"2");
				if (compare==0){
				strcpy(res11[count1], names[count1]);
				}
			}
		}
		if (choice_ncamera==2){
			for (count1=0;count1<50;count1++){
				compare=strcmp(ncamera[count1],"3");
				if (compare==0){
				strcpy(res11[count1], names[count1]);
				}
			}
		}
		if (choice_ncamera==3){
			for (count1=0;count1<50;count1++){
				compare=strcmp(ncamera[count1],"4");
				if (compare==0){
				strcpy(res11[count1], names[count1]);
				}
			}
		}
		if (choice_ncamera==4){
			for (count1=0;count1<50;count1++){
				compare=strcmp(ncamera[count1],"5");
				if (compare==0){
				strcpy(res11[count1], names[count1]);
				}
			}
		}	
		if (choice_ncamera==5){
			for (count1=0;count1<50;count1++){
				compare=strcmp(ncamera[count1],"6");
				if (compare==0){
				strcpy(res11[count1], names[count1]);
				}
			}
		}
		if (choice_ncamera==6){
			for (count1=0;count1<50;count1++){
				strcpy(res11[count1], names[count1]);
			}
		}	
	}
	
		void checkfcamera(){
		if (choice_fcamera==1){
			for (count1=0;count1<50;count1++){
				compare=strcmp(fcamera[count1],"5");
				if (compare==0){
				strcpy(res12[count1], names[count1]);
				}
			}
		}
		if (choice_fcamera==2){
			for (count1=0;count1<50;count1++){
				compare=strcmp(fcamera[count1],"8");
				if (compare==0){
				strcpy(res12[count1], names[count1]);
				}
			}
		}
		if (choice_fcamera==3){
			for (count1=0;count1<50;count1++){
				compare=strcmp(fcamera[count1],"10");
				if (compare==0){
				strcpy(res12[count1], names[count1]);
				}
			}
		}
		if (choice_fcamera==4){
			for (count1=0;count1<50;count1++){
				compare=strcmp(fcamera[count1],"12");
				if (compare==0){
				strcpy(res12[count1], names[count1]);
				}
			}
		}	
		if (choice_fcamera==5){
			for (count1=0;count1<50;count1++){
				compare=strcmp(fcamera[count1],"16");
				if (compare==0){
				strcpy(res12[count1], names[count1]);
				}
			}
		}
		if (choice_fcamera==6){
			for (count1=0;count1<50;count1++){
				compare=strcmp(fcamera[count1],"32");
				if (compare==0){
				strcpy(res12[count1], names[count1]);
				}
			}
		}
		if (choice_fcamera==7){
			for (count1=0;count1<50;count1++){
				compare=strcmp(fcamera[count1],"44");
				if (compare==0){
				strcpy(res12[count1], names[count1]);
				}
			}
		}
		if (choice_fcamera==8){
			for (count1=0;count1<50;count1++){
				compare=strcmp(fcamera[count1],"48");
				if (compare==0){
				strcpy(res12[count1], names[count1]);
				}
			}
		}
		if (choice_fcamera==9){
			for (count1=0;count1<50;count1++){
				strcpy(res12[count1], names[count1]);
			}
		}
	}
		void checkaudioj(){
		if (choice_audioj==1){
			for (count1=0;count1<50;count1++){
				compare=strcmp(audioj[count1],"yes");
				if (compare==0){
				strcpy(res13[count1], names[count1]);
				}
			}
		}
		if (choice_audioj==2){
			for (count1=0;count1<50;count1++){
				compare=strcmp(audioj[count1],"no");
				if (compare==0){
				strcpy(res13[count1], names[count1]);
				}
			}
		}	
		if (choice_audioj==3){
			for (count1=0;count1<50;count1++){
				strcpy(res13[count1], names[count1]);
			}
		}	
	}
	
		void checkprocess(){
		if (choice_process==1){                        // 1.0 to 2.0
			for (count1=0;count1<50;count1++){
				compare=strcmp(process[count1],"1.3");
				if (compare==0){
				strcpy(res14[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(process[count1],"1.5");
				}
				if (compare==0){
				strcpy(res14[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(process[count1],"1.8");
				}
				if (compare==0){
				strcpy(res14[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(process[count1],"2.0");
				}
				if (compare==0){
				strcpy(res14[count1], names[count1]);
				}	
			}
		}
		if (choice_process==2){                       // 2.1 to 2.5 
			for (count1=0;count1<50;count1++){
				compare=strcmp(process[count1],"2.2");
				if (compare==0){
				strcpy(res14[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(process[count1],"2.3");
				}
				if (compare==0){
				strcpy(res14[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(process[count1],"2.4");
				}
				if (compare==0){
				strcpy(res14[count1], names[count1]);
				}
				
			}
		}
		if (choice_process==3){                        // 2.6 above
			for (count1=0;count1<50;count1++){
				compare=strcmp(process[count1],"2.65");
				if (compare==0){
				strcpy(res14[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(process[count1],"2.7");
				}
				if (compare==0){
				strcpy(res14[count1], names[count1]);
				}
				else if(compare!=0){
					compare=strcmp(process[count1],"2.84");
				}
				if (compare==0){
				strcpy(res14[count1], names[count1]);
				}
			}
		}	
	
		if (choice_process==4){                     
			for (count1=0;count1<50;count1++){
				strcpy(res14[count1], names[count1]);
			}
		}	
	}
	
		void checkfcharge(){
		if (choice_fcharge==1){
			for (count1=0;count1<50;count1++){
				compare=strcmp(fcharge[count1],"yes");
				if (compare==0){
				strcpy(res15[count1], names[count1]);
				}
			}
		}
		if (choice_fcharge==2){
			for (count1=0;count1<50;count1++){
				compare=strcmp(fcharge[count1],"no");
				if (compare==0){
				strcpy(res15[count1], names[count1]);
				}
			}
		}	
		if (choice_fcharge==3){
			for (count1=0;count1<50;count1++){
				strcpy(res15[count1], names[count1]);
			}
		}	
	}
	
		void checkos(){
		if (choice_os==1){
			for (count1=0;count1<50;count1++){
				compare=strcmp(os[count1],"Android");
				if (compare==0){
				strcpy(res16[count1], names[count1]);
				}
			}
		}
		if (choice_os==2){
			for (count1=0;count1<50;count1++){
				compare=strcmp(os[count1],"ios");
				if (compare==0){
				strcpy(res16[count1], names[count1]);
				}
			}
		}
		if (choice_os==3){
			for (count1=0;count1<50;count1++){
				strcpy(res16[count1], names[count1]);
			}
		}	
	}
	
	
	friend void invoice(check);
	friend void disp(check);
			
};


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void invoice(check obj){
     	int i;
     	cout<<"\nPlease Enter The Serial Number Of Your Desired Purchase: ";
     	for(i=0;i<=49;i++){
     		cout<<"\n"<<i+1<<": ";
     		cout<<obj.names[i]<<" ";
     		cout<<" price: "<<obj.prices[i]<<" ";
     		cout<<" year released "<<obj.years[i]<<endl;
     		cout<<"Number of Cameras: "<<obj.ncamera[i];
     		cout<<"   memory slot: "<<obj.mslot[i]<<"  finger print: "<<obj.finger[i]<<"  Audio Jack"<<obj.audioj[i]<<"  Dual sim: "<<obj.dualsim[i]<<endl;
     		cout<<"Operating System: "<<obj.os[i]<<endl<<"ROM: "<<obj.rom[i];
     		cout<<"**************************************************************************************************************************************************"<<endl;
		 }
		 int choice;
		 cout<<"\n\nEnter serial number: ";
		 cin>>choice;
		 cout<<"\nPlease Enter Your Name: ";
	     string name;
	     cin>>name;
	     string ph;
	     cout<<"Please Enter Your Phone Number: ";
	     fflush(stdin);
	     cin>>ph;
	     bool f=false;
	     while(f=false){
		 
	     if(ph.length()!=11){
	     	cout<<"Please Enter a valid mobile number: ";
	     	cin>>ph;
		 }
		 else{
		 	f=true;
		 }
	}
        string address,city;
		cout<<"Enter your address:";
		cin>>address;
		cout<<"\nWe only ship to following cities:\n1.Karachi\n2.Hyderabad\n3.Lahore\n4.Multan\n5.Islamabad.\nPlease Enter The Serial Number Of Your City: ";
	
		
		int n;
		float dcost;
		cin>>n;
		
		while ((n<0)||(n>5)){
			cout<<"\n Not a valid choice, Please Input Again:";
			cin>>n;
		}			
		if(n==1){
			city="karachi";
			dcost=1000;
			f=true;
		}
		else if(n==2){
			city="Hyderabad";
			dcost=1000;
				f=true;
		}
		else if(n==3){
			city="Lahore";
			dcost=500;
				f=true;
		}
		else if(n==4){
			city="Multan";
			dcost=500;
				f=true;
		}
		else if(n==5){
			city="Islamabad";
			dcost=500;
				f=true;
		}
		 	
			
			
		
			
	     ofstream abc;
	     abc.open("INVOICE.txt", ios::out);
	     abc<<"                                                FAST mobile dealer \n **************************************************** INVOICE ****************************************************\n";
		 abc<<"purchase against name: "<<name<<"\n";
         abc<<"Contact Information:\nPhone Number:"<<ph<<"\n";
		 abc<<"Address: "<<address<<"\n";
		 abc<<"city: "<<city<<"\n\n\n\n\n\n";
		 	
	     abc<<"Phone Purchased :              |"<<obj.names[choice-1]<<"                                      \n";
	     abc<<"Phone price:                   |"<<obj.prices2[choice-1]<<"                                    \n";
	     abc<<"Delivery Cost:                 |"<<dcost<<"                                                    \n";
	     abc<<"Total after tax:               |"<<obj.prices2[choice-1]+(obj.prices2[choice-1]*0.2)<<"        \n";
	     abc<<"Total Amount :                 |"<<obj.prices2[choice-1]+(obj.prices2[choice-1]*0.2)+dcost<<"  \n";
	     abc<<"\n\n\n\n\n\n\n your order will reach in 10 to 12 business days." ;
	
	
	
	    abc.close();
     	
     	
     	
     	
     	
     	cout<<"\n\nAn Invoice (INVOICE.txt) Has Been Generated Containing All Relevant Information.\n\n";
     	
     	
	 }


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	void disp(check obj2){
		int count1,flag=0;
     	cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"Best available option: \n";
		for (count1=0;count1<50;count1++){
		int x1=strcmp(obj2.res1[count1],obj2.res2[count1]);
		int x2=strcmp(obj2.res1[count1],obj2.res3[count1]);
		int x3=strcmp(obj2.res1[count1],obj2.res4[count1]);
		int x4=strcmp(obj2.res1[count1],obj2.res5[count1]);
		int x5=strcmp(obj2.res1[count1],obj2.res6[count1]);
		int x6=strcmp(obj2.res1[count1],obj2.res7[count1]);
		int x7=strcmp(obj2.res1[count1],obj2.res8[count1]);
		int x8=strcmp(obj2.res1[count1],obj2.res9[count1]);
		int x9=strcmp(obj2.res1[count1],obj2.res10[count1]);
		int x10=strcmp(obj2.res1[count1],obj2.res11[count1]);
		int x101=strcmp(obj2.res1[count1],obj2.res12[count1]);
		int x11=strcmp(obj2.res1[count1],obj2.res13[count1]);
		int x12=strcmp(obj2.res1[count1],obj2.res14[count1]);
		int x13=strcmp(obj2.res1[count1],obj2.res15[count1]);
		int x14=strcmp(obj2.res1[count1],obj2.res16[count1]);

		if ((x2==0)&&(x1==0)&&(x3==0)&&(x4==0)&&(x5==0)&&(x6==0)&&(x7==0)&&(x8==0)&&(x9==0)&&(x101==0)&&(x11==0)&&(x12==0)&&(x13==0)&&(x14==0)){
		cout<<"\n"<<obj2.res1[count1];
		flag=1;
		}
		}
		if(flag!=1){
		cout<<"\nSorry, There is no phone available right now that meets your criteria!";
		}
     	cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	}


class comparison:public check{
	public:
		int count2,count3=1,selected1,selected2;
		
		void disp(){
		for (count2=0;count2<50;count2++){
			cout<<"\n"<<count3<<":"<<names[count2];
			count3++;
		}
		cout<<"\nEnter choosen product's no: ";
		cout<<"\nPhone 1's Serial Number: ";
		cin>>selected1;
		cout<<"Phone 2's Serial Number: ";
		cin>>selected2;
		selected1--;
		selected2--;
		while (selected1==selected2){
			cout<<"\nERROR! Input again: ";
		    cout<<"\n\nPhone 1's Serial Number: ";
	     	cin>>selected1;
		    cout<<"\n\nPhone 2's Serial Number: ";
    		cin>>selected2;
    		selected1--;
    		selected2--;		
		}
	
		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
	
		if(prices2[selected1]==prices2[selected2]){
		cout<<"\n* Prices of both "<<names[selected1]<<" and "<<names[selected2]<<" are same "<<endl;
	}
		if(prices2[selected1]!=prices2[selected2]){
		
		if (prices2[selected1]>prices2[selected2]){
		cout<<"\n* Price of "<<names[selected1]<<" is higher than "<<names[selected2]<<endl;
		}
		else 
		{
			cout<<"\n* Price of "<<names[selected2]<<" is higher than "<<names[selected1]<<endl;
		}
	}
	
		if(years2[selected1]==years2[selected2]){
		cout<<"\n* Both "<<names[selected1]<<" and "<<names[selected2]<<" were released in the same year "<<endl;
	}
		if(years2[selected1]!=years2[selected2]){
		if (years2[selected1]>years2[selected2]){
			
		cout<<"\n* "<<names[selected1]<<" was released after "<<names[selected2]<<endl;
	
		}
		else 
		{
		cout<<"\n* "<<names[selected2]<<" was released after "<<names[selected1]<<endl;
		}
	}
	
	
	if (battery2[selected1]==battery2[selected2]){
	cout<<"\n* Both "<<names[selected2]<<" and "<<names[selected1]<<" have same battery "<<endl;

	}
	
	if (battery2[selected1]!=battery2[selected2]){
	if (battery2[selected1]>battery2[selected2]){
			
		cout<<"\n* "<<names[selected1]<<"'s battery is bigger than "<<names[selected2]<<endl;
	
		}
		else 
		{
		cout<<"\n* "<<names[selected2]<<"'s battery is bigger than "<<names[selected1]<<endl;
		}
	}
		if (rom2[selected1]==rom2[selected2]){
		cout<<"\n* Both "<<names[selected1]<<" and "<<names[selected2]<<" have same ROM "<<endl;
}
	if (rom2[selected1]!=rom2[selected2]){
	if (rom2[selected1]>rom2[selected2]){
			
		cout<<"\n* "<<names[selected1]<<"'s ROM is bigger than "<<names[selected2]<<endl;
	
		}
		else 
		{
		cout<<"\n* "<<names[selected2]<<"'s ROM is bigger than "<<names[selected1]<<endl;
		}
	}
	if (camera2[selected1]==camera2[selected2]){
		cout<<"\n* Both "<<names[selected1]<<" and "<<names[selected2]<<" have same camera "<<endl;
	}
	
	if (camera2[selected1]!=camera2[selected2]){
	if (camera2[selected1]>camera2[selected2]){
			
		cout<<"\n* "<<names[selected1]<<"'s camera has more megapixels than "<<names[selected2]<<endl;
	
		}
		else 
		{
		cout<<"\n* "<<names[selected2]<<"'s camera has more megapixels than "<<names[selected1]<<endl;
		}
	}
	if (screen2[selected1]==screen2[selected2]){
		cout<<"\n* Both "<<names[selected1]<<" and "<<names[selected2]<<" have same screen size "<<endl;
	}
	
	if (screen2[selected1]!=screen2[selected2]){
	if (screen2[selected1]>screen2[selected2]){
			
		cout<<"\n* "<<names[selected1]<<" has bigger screen than "<<names[selected2]<<endl;
	
		}
		else 
		{
		cout<<"\n* "<<names[selected2]<<" has bigger screen than "<<names[selected1]<<endl;
		}
	}
	if(strcmp(mslot[selected1],mslot[selected2])==0){
			if(strcmp(mslot[selected1],"yes")==0){
				cout<<"\n* Both "<<names[selected1]<<" and "<<names[selected2]<<" have memory card slot "<<endl;
			}
			else {
				cout<<"\n* Both "<<names[selected1]<<" and "<<names[selected2]<<" don't have memory card slot "<<endl;
			}
	}
	if(strcmp(mslot[selected1],mslot[selected2])!=0){
	if(strcmp(mslot[selected1],mslot[selected2])>0){
		cout<<"\n* "<<names[selected1]<<" has memory card slot while "<<names[selected2]<<" doesn't have memory card slot"<<endl;
	}
	else{
		cout<<"\n* "<<names[selected2]<<" has memory card slot while "<<names[selected1]<<" doesn't have memory card slot"<<endl;
	}
}

	if(strcmp(dualsim[selected1],dualsim[selected2])==0){
		if(strcmp(dualsim[selected1],"yes")==0){
				cout<<"\n* Both "<<names[selected1]<<" and "<<names[selected2]<<" have dual sim slot "<<endl;
			}
			else {
				cout<<"\n* Both "<<names[selected1]<<" and "<<names[selected2]<<" don't have dual sim slot "<<endl;
			}
	}
	if(strcmp(dualsim[selected1],dualsim[selected2])!=0){
	if(strcmp(dualsim[selected1],dualsim[selected2])>0){
		cout<<"\n* "<<names[selected1]<<" has dual sim slot while "<<names[selected2]<<" doesn't have dual sim slot"<<endl;
	}
	else{
		cout<<"\n* "<<names[selected2]<<" has dual sim slot while "<<names[selected1]<<" doesn't have dual sim slot"<<endl;
	}
}
	if(strcmp(data[selected1],data[selected2])==0){
		if(strcmp(data[selected1],"3G")==0){
		cout<<"\n* "<<names[selected1]<<" and "<<names[selected2]<<" both have 3G "<<endl;}
		if(strcmp(data[selected1],"4G")==0){
		cout<<"\n* "<<names[selected1]<<" and "<<names[selected2]<<" both have 4G "<<endl;}
	}
	else if (strcmp(data[selected1],data[selected2])!=0){
		if(strcmp(data[selected1],"3G")==0){
			if(strcmp(data[selected2],"4G")==0){
		cout<<"\n* "<<names[selected2]<<" has 4G while "<<names[selected1]<<" has 3G"<<endl;}}
	
	else {
		cout<<"\n* "<<names[selected1]<<" has 4G while "<<names[selected2]<<" has 3G"<<endl;
	}
}

	if(strcmp(finger[selected1],finger[selected2])==0){
		if(strcmp(finger[selected1],"yes")==0){
			cout<<"\n* Both "<<names[selected1]<<" and "<<names[selected2]<<" have fingerprint sensor "<<endl;
			}
			else {
				cout<<"\n* Both "<<names[selected1]<<" and "<<names[selected2]<<" don't have fingerprint sensor "<<endl;
			}
	
	}
	if(strcmp(finger[selected1],finger[selected2])!=0){
	if(strcmp(finger[selected1],finger[selected2])>0){
		cout<<"\n* "<<names[selected1]<<" has fingerprint sensor while "<<names[selected2]<<" doesn't have fingerprint sensor"<<endl;
	}
	else{
		cout<<"\n* "<<names[selected2]<<" has fingerprint sensor while "<<names[selected1]<<" doesn't have fingerprint sensor"<<endl;
	}
}
	if (ncamera2[selected1]==ncamera2[selected2]){
		cout<<"\n* Both "<<names[selected1]<<" and "<<names[selected2]<<" have same number of cameras "<<endl;
	}
	if (ncamera2[selected1]!=ncamera2[selected2]){
	if (ncamera2[selected1]>ncamera2[selected2]){
			
		cout<<"\n* "<<names[selected1]<<" has more cameras than "<<names[selected2]<<endl;
	
		}
		else 
		{
		cout<<"\n* "<<names[selected2]<<" has more cameras than "<<names[selected1]<<endl;
		}
}
if (fcamera2[selected1]>fcamera2[selected2]){
		cout<<"\n* Both "<<names[selected1]<<" and "<<names[selected2]<<" have same front cameras "<<endl;
}
	if (fcamera2[selected1]!=fcamera2[selected2]){
	if (fcamera2[selected1]>fcamera2[selected2]){
			
		cout<<"\n* "<<names[selected1]<<"'s front camera has more megapixels than "<<names[selected2]<<endl;
	
		}
		else 
		{
		cout<<"\n* "<<names[selected2]<<"'s front camera has more megapixels than "<<names[selected1]<<endl;
		}
	}
	if(strcmp(audioj[selected1],audioj[selected2])==0){
		if(strcmp(audioj[selected1],"yes")==0){
		cout<<"\n* Both "<<names[selected1]<<" and "<<names[selected2]<<" have 3mm audio jack "<<endl;
			}
			else {
				cout<<"\n* Both "<<names[selected1]<<" and "<<names[selected2]<<" don't have 3mm audio jack "<<endl;
			}
}
	if(strcmp(audioj[selected1],audioj[selected2])!=0){
	if(strcmp(audioj[selected1],audioj[selected2])>0){
		cout<<"\n* "<<names[selected1]<<" has audio jack while "<<names[selected2]<<" doesn't have audio jack"<<endl;
	}
	else{
		cout<<"\n* "<<names[selected2]<<" has audio jack while "<<names[selected1]<<" doesn't have audio jack"<<endl;
	}

}

	if (process2[selected1]==process2[selected2]){
	cout<<"\n* Both "<<names[selected1]<<" and "<<names[selected2]<<" have same processors "<<endl;
	}
	if (process2[selected1]!=process2[selected2]){	
	if (process2[selected1]>process2[selected2]){
			
		cout<<"\n* "<<"Processor of "<<names[selected1]<<" is more faster than "<<names[selected2]<<endl;
	
		}
		else 
		{
		cout<<"\n* "<<"Processor of "<<names[selected2]<<" is more faster than "<<names[selected1]<<endl;
		}
	}
	if(strcmp(fcharge[selected1],fcharge[selected2])==0){
	if(strcmp(fcharge[selected1],"yes")==0)	{
			cout<<"\n* Both "<<names[selected1]<<" and "<<names[selected2]<<" have fast charging "<<endl;
			}
			else {
				cout<<"\n* Both "<<names[selected1]<<" and "<<names[selected2]<<" don't have fast charging "<<endl;
			}
		
	
	}
	if(strcmp(fcharge[selected1],fcharge[selected2])!=0){
	if(strcmp(fcharge[selected1],fcharge[selected2])>0){
		cout<<"\n* "<<names[selected1]<<" has fast charging while "<<names[selected2]<<" doesn't have fast charging"<<endl;
	}
	else{
		cout<<"\n* "<<names[selected2]<<" has fast charging while "<<names[selected1]<<" doesn't have fast charging"<<endl;
	}
}
	if(strcmp(os[selected1],os[selected2])==0){
		if(strcmp(os[selected1],"Android")==0){
		cout<<"\n* "<<names[selected1]<<" and "<<names[selected2]<<" both have Android operating system "<<endl;}
		else 
		{
			cout<<"\n* "<<names[selected1]<<" and "<<names[selected2]<<" both have Ios "<<endl;}	
		}
		else if (strcmp(os[selected1],os[selected2])!=0){
			if(strcmp(os[selected1],"Android")==0){
				cout<<"\n* "<<names[selected1]<<" has Android operating system while "<<names[selected2]<<" has Ios "<<endl;
			}
			else {
				cout<<"\n* "<<names[selected2]<<" has Android operating system while "<<names[selected1]<<" has Ios "<<endl;
			}
		}
	cout<<"\n\n------------------------------------------------------------------------------------------------------------------------\n";


	}
	
};
	
int main(){
	cout<<"                                  >>>>-------Welcome To Advance Search!-------<<<<\n";
	cout<<"------------------------------------------------------------------------------------------------------------------------\n";
	cout<<"Please Select A Valid Option From The list Provided Below:\n\n";
	cout<<"Select Year: \n\n";
	cout<<"1: 2015\n";
	cout<<"2: 2016\n";
	cout<<"3: 2017\n";
	cout<<"4: 2018\n";
	cout<<"5: 2019\n";
	cout<<"6: 2020\n";
	cout<<"7: 2021\n";
	cout<<"8: Skip\n\n";
	int year;
	cout<<"Your Input: ";
	cin>>year;
	while((year<1)||(year>8)){
		cout<<"Please Enter A Valid Number: ";
		cin>>year;
	}
	cout<<"\nSelect Price: \n\n";
	cout<<"1: 5000 to 19'999 \n";
	cout<<"2: 20'000 to 29'999 \n";
	cout<<"3: 30'000 to 49'999 \n";
	cout<<"4: 50'000 to 99'999 \n";
	cout<<"5: 100'000 to 149'999 \n";
	cout<<"6: Above 150'000 \n";
	cout<<"7: Skip\n\n";
	int price;
	cout<<"Your Input: ";
	cin>>price;
	while((price<1)||(price>7)){
		cout<<"Please Enter A Valid Number: ";
		cin>>price;
	}
	cout<<"\nSelect battery: \n\n";
	cout<<"1: 2000\n";
	cout<<"2: 2500\n";
	cout<<"3: 3000\n";
	cout<<"4: 3500\n";
	cout<<"5: 4000\n";
	cout<<"6: 4500\n";
	cout<<"7: 5000\n";
	cout<<"8: 6000\n";
	cout<<"9: Skip\n\n";
	int battery;
	cout<<"Your Input: ";
	cin>>battery;
	while((battery<1)||(battery>9)){
		cout<<"Please Enter A Valid Number: ";
		cin>>battery;
	}
	
	cout<<"\nSelect ROM: \n\n";
	cout<<"1: 16\n";
	cout<<"2: 32\n";
	cout<<"3: 64\n";
	cout<<"4: 128\n";
	cout<<"5: 256\n";
	cout<<"6: Skip\n\n";
	int rom;
	cout<<"Your Input: ";
	cin>>rom;
	while((rom<1)||(rom>6)){
		cout<<"Please Enter A Valid Number: ";
		cin>>rom;
	}
	
	cout<<"\nSelect camera : \n\n";
	cout<<"1: 8\n";
	cout<<"2: 12\n";
	cout<<"3: 13\n";
	cout<<"4: 16\n";
	cout<<"5: 24\n";
	cout<<"6: 48\n";
	cout<<"7: 64\n";
	cout<<"8: Skip\n\n";
	int camera;
	cout<<"Your Input: ";
	cin>>camera;
	while((camera<1)||(camera>8)){
		cout<<"Please Enter A Valid Number: ";
		cin>>camera;
	}
	
	cout<<"\nSelect screen size : \n\n";
	cout<<"1: 4.5 to 5.5 inches\n";
	cout<<"2: 5.5 to 6.0 inches\n";
	cout<<"3: 6.0 to 6.5 inches\n";
	cout<<"4: Above 6.5 inches\n";
	cout<<"5: Skip\n\n";
	int screen;
	cout<<"Your Input: ";
	cin>>screen;
	while((screen<1)||(screen>5)){
		cout<<"Please Enter A Valid Number: ";
		cin>>screen;
	}
	
	cout<<"\nSelect Memory Card slot preference: \n\n";
	cout<<"1: Yes\n";
	cout<<"2: No\n";
	cout<<"3: Skip\n\n";
	int mslot;
	cout<<"Your Input: ";
	cin>>mslot;
	while((mslot<1)||(mslot>3)){
		cout<<"Please Enter A Valid Number: ";
		cin>>mslot;
	}
	
	cout<<"\nSelect Number of Sim Slots: \n\n";
	cout<<"1: Dualsim\n";
	cout<<"2: Single sim\n";
	cout<<"3: Skip\n\n";
	int dualsim;
	cout<<"Your Input: ";
	cin>>dualsim;
	while((dualsim<1)||(dualsim>3)){
		cout<<"Please Enter A Valid Number: ";
		cin>>dualsim;
	}
	 
	cout<<"\nSelect Data band : \n\n";
	cout<<"1: 4G\n";
	cout<<"2: 3G\n";
	cout<<"3: Skip\n\n";
	int data;
	cout<<"Your Input: ";
	cin>>data;
	while((data<1)||(data>3)){
		cout<<"Please Enter A Valid Number: ";
		cin>>data;
	}
	cout<<"\nSelect Fingerprint Sensor preference: \n\n";
	cout<<"1: Yes\n";
	cout<<"2: No\n";
	cout<<"3: Skip\n\n";
	int finger;
	cout<<"Your Input: ";
	cin>>finger;
	while((finger<1)||(finger>3)){
		cout<<"Please Enter A Valid Number: ";
		cin>>finger;
	}
	
	cout<<"\nSelect number of cameras: \n\n";
	cout<<"1: 2\n";
	cout<<"2: 3\n";
	cout<<"3: 4\n";
	cout<<"4: 5\n";
	cout<<"5: 6\n";
	cout<<"6: Skip\n\n";
	int ncam;
	cout<<"Your Input: ";
	cin>>ncam;
	while((ncam<1)||(ncam>6)){
		cout<<"Please Enter A Valid Number: ";
		cin>>ncam;
	}
	
	cout<<"\nSelect front camera: \n\n";
	cout<<"1: 5\n";
	cout<<"2: 8\n";
	cout<<"3: 10\n";
	cout<<"4: 12\n";
	cout<<"5: 16\n";
	cout<<"6: 32\n";
	cout<<"7: 44\n";
	cout<<"8: 48\n";
	cout<<"9: Skip\n\n";
	int fcam;
	cout<<"Your Input: ";
	cin>>fcam;
	while((fcam<1)||(fcam>9)){
		cout<<"Please Enter A Valid Number: ";
		cin>>fcam;
	}
	
	cout<<"\nSelect 3mm Audio jack preference: \n\n";
	cout<<"1: Yes\n";
	cout<<"2: No\n";
	cout<<"3: Skip\n\n";
	int audioj;
	cout<<"Your Input: ";
	cin>>audioj;
	while((audioj<1)||(audioj>3)){
		cout<<"Please Enter A Valid Number: ";
		cin>>audioj;
	}
	
	cout<<"\nSelect Processor : \n\n";
	cout<<"1: 1.0 to 2.0 Ghz\n";
	cout<<"2: 2.1 to 2.5 Ghz\n";
	cout<<"3: Above 2.5 Ghz\n";
	cout<<"4: Skip\n\n";
	int process;
	cout<<"Your Input: ";
	cin>>process;
	while((process<1)||(process>4)){
		cout<<"Please Enter A Valid Number: ";
		cin>>process;
	}
	
	cout<<"\nSelect Fast charging preference : \n\n";
	cout<<"1: Yes\n";
	cout<<"2: No\n";
	cout<<"3: Skip\n\n";
	int fcharge;
	cout<<"Your Input: ";
	cin>>fcharge;
	while((fcharge<1)||(fcharge>3)){
		cout<<"Please Enter A Valid Number: ";
		cin>>fcharge;
	}
	
	cout<<"\nSelect Operating System : \n\n";
	cout<<"1: Android\n";
	cout<<"2: Ios\n";
	cout<<"3: Skip\n\n";
	int os;
	cout<<"Your Input: ";
	cin>>os;
	while((os<1)||(os>3)){
		cout<<"Please Enter A Valid Number: ";
		cin>>os;
	}
	comparison obj1;
	obj1.setvar(year,price,battery,rom,camera,screen,mslot,dualsim,data,finger,ncam,fcam,audioj,process,fcharge,os);
	obj1.ini();
	obj1.checkyear();
	obj1.checkprice();
	obj1.checkbattery();
	obj1.checkrom();
	obj1.checkcamera();
	obj1.checkscreen();
	obj1.checkmslot();
	obj1.checkdualsim();
	obj1.checkdata();
	obj1.checkfinger();
	obj1.checkncamera();
	obj1.checkfcamera();
	obj1.checkaudioj();
	obj1.checkprocess();
	obj1.checkfcharge();
	obj1.checkos();
	
	disp(obj1);
	cout<<"\n\nDo You Want To Compare Your Desired Product With Other Smartphone? 'y' For Yes And 'n' For No: ";
	char cmp;
	cin>>cmp;
	if ((cmp=='y')||(cmp=='Y')){
		obj1.disp();
	}
	cout<<"\nDo You Want To Place An Order? 'y' For Yes And 'n' For No:  ";
	char prod;
	cin>>prod;
	if ((prod=='y')||(prod=='Y')){
	    check n;
     	invoice(n);
	}
	cout<<"\n---------------------------------Hope you liked our recommendation!!----------------------------------------------------\n";
	cout<<"                                :*•.-----  Have a nice day  -----.•*:\n\n\n";			 
}
