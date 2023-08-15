#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int count1,input1a,input2a,count2,input3a,i=0,phone1=0,phone2=0,input4a=0,input5a=0,input6a=0,input7a=0,input8a=0,input9a=0,input10a=0,input11a=0,input12a=0,input13a=0,input14a=0,input15a=0,input16a=0,flag=0;;
	

	char names[50][100]={"QMobile Noir E8", "Iphone 11 Pro Max", "Samsung Galaxy S20 FE", "VIVO V20", "Infinix Note 8","Nokia 1 Plus","Nokia C1","Nokia 3.4","Nokia 2.2","Nokia 7.2","Apple iphone 11","Apple iphone SE 2020","Oppo F17 pro","Oppo Reno 4","Oppo A12","Oppo A11K","Oppo A53","Samsung Galaxy M31","Samsung Galaxy A31","Samsung Galaxy A7","Samsung Galaxy A10s","Samsung Galaxy A11","Samsung Galaxy A21s","Samsung Galaxy A51","Samsung Galaxy Note 10 LITE","Samsung Galaxy Note 20","Samsung Galaxy S20","Samsung Galaxy Z-flip","Apple iphone X","Apple iphone 6","Apple iphone XS max","Honor 9X","Honor 8A","Vivo Y20","Vivo Y51","Vivo V17","Vivo Y11","Vivo Y30","Vivo Y9 1D","OnePlus Nord","OnePlus 8T","OnePlus N10","OnePlus 8","Infinix Hot 9 Play","Infinix ZERO 8","Infinix ZERO 8i","Infinix Hot 10","Infix Note 7","Tecno Spark 6","Tecno POP 3"};
//1
	int RAM[50]={3,4,8,8,6,1,1,4,3,6,4,3,8,8,3,2,4,6,4,8,2,2,8,8,8,8,8,8,3,1,4,6,3,4,4,8,3,4,2,12,8,6,8,4,8,8,4,4,4,1};                                                                  //These Ram specs corresponds to their respective product,e.g= RAM[0] is 3GB, which is the Ram of names[0]=Qmobile Noir E8!
//2
	int prices[50]={30000,234500,120000,60000,30000,8500,8300,24750,15000,50000,176000,101800,52000,60000,20000,19000,29000,46000,37000,67600,17000,18800,34000,54700,98000,176000,120000,260000,164999,44000,170000,40000,20500,26000,35000,60000,20000,28000,16000,104000,142000,67500,180000,19000,40000,35000,20800,24000,19500,8700};                                         //Same Goes for the price,e.g=prices[0] is the price of names[0]=Qmobile Noir E8
//3
	int ROM[50]={64,128,128,128,128,8,16,64,32,128,64,64,128,128,32,32,64,64,128,128,32,32,128,128,128,256,128,256,256,32,64,128,64,64,128,64,32,64,32,256,128,128,128,64,128,128,64,128,64,16};
//4
	int camera[50]={24,12,12,64,64,8,5,13,13,48,12,12,48,48,13,13,13,64,48,24,13,13,48,48,12,64,64,12,12,8,12,48,13,13,48,64,13,13,13,48,48,64,48,13,64,48,16,48,16,8};
//5
	float screen[50]={6,6.5,6.5,6.4,6.95,5.45,5.45,6.4,5.7,6.4,6.1,4.7,6.4,6.4,6.2,6.2,6.5,6.4,6.4,6,6.2,6.4,6.5,6.5,6.7,6.7,6.2,6.7,5.8,4.7,6.5,6.6,6.1,6.5,6.4,6.4,6.4,6.5,6.2,6.4,6.5,6.5,6.5,6.8,6.8,6.8,6.8,6.9,6.8,6.5};
//6
	int battery[50]={3500,3969,4500,4000,5200,2500,2500,4000,3000,3500,3110,1821,4015,4015,4230,4230,5000,6000,5000,3300,4000,4000,5000,4000,4500,4300,4000,3300,2716,1810,3174,4000,3020,5000,4500,4000,5000,5000,4030,4115,4500,4300,4300,6000,4500,4500,5200,5000,5000,4000};
//7
	char mslot[50][4]={"yes","no","yes","yes","yes","yes","yes","yes","yes","yes","no","no","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","no","yes","no","no","no","no","yes","yes","yes","yes","yes","yes","yes","yes","no","no","yes","no","yes","yes","yes","yes","yes","yes","yes"};
//8
	char dualsim[50][4]={"yes","no","yes","yes","yes","yes","yes","yes","yes","yes","no","no","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","no","no","no","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes"};
//9
	char data[50][3]={"3G","4G","4G","4G","4G","4G","3G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G","4G"};
//10
	char fingerprint[50][4]={"yes","no","yes","yes","yes","no","no","yes","no","yes","no","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","no","yes","no","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes",};
//11
	int ncamera[50]={2,4,4,4,5,2,2,4,2,4,3,2,6,5,3,3,4,4,5,4,3,4,5,5,4,4,4,3,4,2,4,4,2,4,5,4,4,5,3,6,5,5,4,3,6,6,5,5,5,2};
//12
	float fcamera[50]={8,12,32,44,16,5,5,8,5,20,12,7,16,32,5,5,16,32,20,24,8,8,13,32,32,10,10,10,7,7,7,16,8,8,16,44,8,8,8,32,16,16,16,8,48,16,8,16,8,8};
//13
	char audioj[50][4]={"yes","no","no","yes","yes","yes","yes","yes","yes","yes","no","no","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","yes","no","no","no","no","yes","no","yes","yes","yes","yes","yes","yes","yes","yes","no","no","yes","no","yes","yes","yes","yes","yes","yes","yes"};
//14
	float processor[50]={2,2.65,2.7,2.3,2,1.5,1.3,1.8,2,2.2,2.65,2.65,2.2,2.3,2.35,2.35,1.8,2.3,2.0,2.2,2.0,1.8,2.0,2.3,2.7,2.73,2.73,2.95,2.39,1.4,2.5,2.2,2.3,1.8,2.0,2.0,1.95,2.35,1.95,2.4,2.84,2.0,2.84,2,2.0,2.0,2,2,1.8,1.3};
//15
	char fcharge[50][4]={"no","yes","yes","yes","yes","no","no","no","no","no","yes","yes","yes","yes","no","no","yes","yes","yes","no","no","yes","yes","yes","yes","yes","yes","yes","yes","no","yes","no","no","yes","yes","yes","no","no","no","yes","yes","yes","yes","no","yes","yes","no","yes","yes","no"};
//16	
	char OS[50][10]={"Android","ios","Android","Android","Android","Android","Android","Android","Android","Android","ios","ios","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","ios","ios","ios","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android","Android"};
	
	char res1[50][100],res2[50][100],res3[50][100],res4[50][100],res5[50][100],res6[50][100],res7[50][100],res8[50][100],res9[50][100],res10[50][100],res11[50][100],res12[50][100],res13[50][100],res14[50][100],res15[50][100],res16[50][100],comparison='N',y[4]="yes",n[3]="no",type1[3]="3G",type2[3]="4G",andr[10]="Android",ios[4]="ios";

	for (count1=0;count1<50;count1++){                                                        //This is supposed to assign 0 to all elements of the resultant arrays, This will eliminate Garbage Values
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
	}
	}

	printf("                                  >>>>-------Welcome To Advance Search!-------<<<<\n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Please Select A Valid Option From The list Provided Below:\n");                             
	printf("Prices:\n");                                                                       //PRICES INPUT!
	printf("1: <10,000\n");
	printf("2: 10,000-20,000\n");
	printf("3: 20,000-30,000\n");
	printf("4: 30,000-40,000\n");
	printf("5: 40,000-50,000\n");
	printf("6: >50,000\n");
	printf("7: SKIP\n");
	printf("Input Selected Option: ");
	scanf("%d",&input1a);   
	while((input1a<1)||(input1a>7)){
		printf("Error! Please Input Again: ");
		scanf("%d",&input1a);
	}	            
	    if (input1a==1){
	    	for(count1=0;count1<50;count1++){
	    		if (prices[count1]<10000){
			    strcpy(res1[count1], names[count1]);
				}
			}
		}
	    else if (input1a==2){
	    	for(count1=0;count1<50;count1++){
	    		if ((prices[count1]>=10000)&&(prices[count1]<=20000)){
			    strcpy(res1[count1], names[count1]);
				}
			}
		}
	    else if (input1a==3){
	    	for(count1=0;count1<50;count1++){
	    		if ((prices[count1]>=20000)&&(prices[count1]<=30000)){
			    strcpy(res1[count1], names[count1]);
				}
			}
		}
	    else if (input1a==4){
	    	for(count1=0;count1<50;count1++){                                             
	    		if ((prices[count1]>=30000)&&(prices[count1]<=40000)){
			    strcpy(res1[count1], names[count1]);
				}
			}	    	           
		}
	    if (input1a==5){
	    	for(count1=0;count1<50;count1++){
	    		if ((prices[count1]>=40000)&&(prices[count1]<=50000)){
			    strcpy(res1[count1], names[count1]);
				}
			}		}
	    else if (input1a==6){
	    	for(count1=0;count1<50;count1++){
	    		if (prices[count1]>50000){
			    strcpy(res1[count1], names[count1]);
				}
			}	    	          
		}
		else if (input1a==7){
	    	for(count1=0;count1<50;count1++){
	    	strcpy(res1[count1], names[count1]);}
		}
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("\nRAM:\n");                                                                        //RAM INPUT!
	printf("1: 1 GB\n");
	printf("2: 2 GB\n");
	printf("3: 3 GB\n");
	printf("4: 4 GB\n");
	printf("5: 6 GB\n");	
	printf("6: 8 GB\n");
	printf("7: SKIP\n");
	printf("Input Selected Option: ");
	scanf("%d",&input2a);   
	while((input2a<1)||(input2a>7)){
		printf("Error! Please Input Again: ");
		scanf("%d",&input2a);
	}                        
	if (input2a==1){
		for (count1=0;count1<50;count1++){                                         
		if (RAM[count1]==1){
			strcpy(res2[count1], names[count1]);
		}
		}
	}
	if (input2a==2){
		for (count1=0;count1<50;count1++){                                             
		if (RAM[count1]==2){
			strcpy(res2[count1], names[count1]);
		}
		}
	}
	if (input2a==3){
		for (count1=0;count1<50;count1++){                                        
		if (RAM[count1]==3){
			strcpy(res2[count1], names[count1]);
		}
		}
	}
	if (input2a==4){
		for (count1=0;count1<50;count1++){                                  
		if (RAM[count1]==4){
			strcpy(res2[count1], names[count1]);
		}
		}
	}
	if (input2a==5){
		for (count1=0;count1<50;count1++){                                             
		if (RAM[count1]==6){
			strcpy(res2[count1], names[count1]);
		}
		}
	}
	if (input2a==6){
		for (count1=0;count1<50;count1++){                                        
		if (RAM[count1]==8){
			strcpy(res2[count1], names[count1]);
		}
		}}
	if (input2a==7){
	 	for(count1=0;count1<50;count1++){
	    	strcpy(res2[count1], names[count1]);}
	}
	
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");	
	printf("\nROM:\n");                                                                       //INPUT ROM
	printf("1: 1GB\n");
	printf("2: 2GB\n");
	printf("3: 4GB\n");
	printf("4: 8GB\n");
	printf("5: 16GB\n");
	printf("6: 32GB\n");
	printf("7: 64GB\n");
	printf("8: 128GB\n");
	printf("9: SKIP\n");
	printf("Input Selected Option: ");
	scanf("%d",&input3a);
	while((input3a<1)||(input3a>9)){
		printf("Error! Please Input Again: ");
		scanf("%d",&input3a);
	}
	if (input3a==1){
		for (count1=0;count1<50;count1++){                                        
		if (ROM[count1]==1){
			strcpy(res3[count1], names[count1]);
		}
		}		
	}
	if (input3a==2){
		for (count1=0;count1<50;count1++){                                        
		if (ROM[count1]==2){
			strcpy(res3[count1], names[count1]);
		}
		}		
	}
	if (input3a==3){
		for (count1=0;count1<50;count1++){                                        
		if (ROM[count1]==4){
			strcpy(res3[count1], names[count1]);
		}
		}
	}
	if (input3a==4){
		for (count1=0;count1<50;count1++){                                        
		if (ROM[count1]==8){
			strcpy(res3[count1], names[count1]);
		}
		}
	}
	if (input3a==5){
		for (count1=0;count1<50;count1++){                                        
		if (ROM[count1]==16){
			strcpy(res3[count1], names[count1]);
		}
		}
	}
	if (input3a==6){
		for (count1=0;count1<50;count1++){                                        
		if (ROM[count1]==32){
			strcpy(res3[count1], names[count1]);
		}
		}
	}
	if (input3a==7){
		for (count1=0;count1<50;count1++){                                        
		if (ROM[count1]==64){
			strcpy(res3[count1], names[count1]);
		}
		}
	}
	if (input3a==8){
		for (count1=0;count1<50;count1++){                                        
		if (ROM[count1]==128){
			strcpy(res3[count1], names[count1]);
		}
		}
	}
	if (input3a==9){
	 	for(count1=0;count1<50;count1++){
	    	strcpy(res3[count1], names[count1]);}
	}
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("\nCamera:\n");                                                                       //INPUT Camera
	printf("1: 5MP\n");
	printf("2: 8MP\n");
	printf("3: 12MP\n");
	printf("4: 13MP\n");
	printf("5: 16MP\n");
	printf("6: 24MP\n");
	printf("7: 48MP\n");
	printf("8: 64MP\n");
	printf("9: SKIP\n");
	printf("Input Selected Option: ");
	scanf("%d",&input4a);
	while((input4a<1)||(input4a>9)){
		printf("Error! Please Input Again: ");
		scanf("%d",&input4a);
	}
	
	if (input4a==1){
		for (count1=0;count1<50;count1++){                                        
		if (camera[count1]==5){
			strcpy(res4[count1], names[count1]);
		}
		}		
	}
	if (input4a==2){
		for (count1=0;count1<50;count1++){                                        
		if (camera[count1]==8){
			strcpy(res4[count1], names[count1]);
		}
		}		
	}
	if (input4a==3){
		for (count1=0;count1<50;count1++){                                        
		if (camera[count1]==12){
			strcpy(res4[count1], names[count1]);
		}
		}
	}
	if (input4a==4){
		for (count1=0;count1<50;count1++){                                        
		if (camera[count1]==13){
			strcpy(res4[count1], names[count1]);
		}
		}
	}
	if (input4a==5){
		for (count1=0;count1<50;count1++){                                        
		if (camera[count1]==16){
			strcpy(res4[count1], names[count1]);
		}
		}
	}
	if (input4a==6){
		for (count1=0;count1<50;count1++){                                        
		if (camera[count1]==24){
			strcpy(res4[count1], names[count1]);
		}
		}
	}
	if (input4a==7){
		for (count1=0;count1<50;count1++){                                        
		if (camera[count1]==48){
			strcpy(res4[count1], names[count1]);
		}
		}
	}
	if (input4a==8){
		for (count1=0;count1<50;count1++){                                        
		if (camera[count1]==64){
			strcpy(res4[count1], names[count1]);
		}
		}
	}
	if (input4a==9){
	 	for(count1=0;count1<50;count1++){
	    	strcpy(res4[count1], names[count1]);}
	}
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("\nScreen Size:\n");                                                                       //INPUT Screen size
	printf("1: < 5.0 inches\n");
	printf("2: 5.0 to 5.45 inches\n");
	printf("3: 5.5 to 5.8 inches\n");
	printf("4: 6.0 to 6.4 inches\n");
	printf("5: 6.5 to 6.95 inches\n");
	printf("6: SKIP\n");
	printf("Input Selected Option: ");
	scanf("%d",&input5a);
	
	while((input5a<1)||(input5a>6)){
		printf("Error! Please Input Again: ");
		scanf("%d",&input5a);
	}
	if (input5a==1){
		for (count1=0;count1<50;count1++){                                        
		if (screen[count1]==4.7){
			strcpy(res5[count1], names[count1]);
		}
		}		
	}
	if (input5a==2){
		for (count1=0;count1<50;count1++){                                        
		if ((screen[count1]>=5.0)&&(screen[count1]<=5.45)){
			strcpy(res5[count1], names[count1]);
		}
		}		
	}
	if (input5a==3){
		for (count1=0;count1<50;count1++){                                        
		if ((screen[count1]>=5.5)&&(screen[count1]<6.0)){
			strcpy(res5[count1], names[count1]);
		}
		}
	}
	if (input5a==4){
		for (count1=0;count1<50;count1++){                                        
		if ((screen[count1]>=6.0)&&(screen[count1]<=6.4)){
			strcpy(res5[count1], names[count1]);
		}
		}
	}
	if (input5a==5){
		for (count1=0;count1<50;count1++){                                        
		if ((screen[count1]>=6.5)&&(screen[count1]<7)){
			strcpy(res5[count1], names[count1]);
		}
		}
	}
	if (input5a==6){
	 	for(count1=0;count1<50;count1++){
	    	strcpy(res5[count1], names[count1]);}
	}
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("\nBattery:\n");                                                                       //INPUT Battery
	printf("1: < 3000 Mah\n");
	printf("2: 3000 Mah to 4000 Mah\n");
	printf("3: 4015 Mah to 5000 Mah\n");
	printf("4: > 5000 Mah\n");
	printf("5: SKIP\n");
	printf("Input Selected Option: ");
	scanf("%d",&input6a);
	while((input6a<1)||(input6a>5)){
		printf("Error! Please Input Again: ");
		scanf("%d",&input6a);
	}
	if (input6a==1){
		for (count1=0;count1<50;count1++){                                        
		if (battery[count1]<3000){
			strcpy(res6[count1], names[count1]);
		}
		}		
	}
	if (input6a==2){
		for (count1=0;count1<50;count1++){                                        
		if ((battery[count1]>=3000)&&(battery[count1]<=4000)){
			strcpy(res6[count1], names[count1]);
		}
		}		
	}
	if (input6a==3){
		for (count1=0;count1<50;count1++){                                        
		if ((battery[count1]>4000)&&(battery[count1]<=5000)){
			strcpy(res6[count1], names[count1]);
		}
		}
	}
	if (input6a==4){
		for (count1=0;count1<50;count1++){                                        
		if (battery[count1]>5000){
			strcpy(res6[count1], names[count1]);
		}
		}
	}
	if (input6a==5){
	 	for(count1=0;count1<50;count1++){
	    	strcpy(res6[count1], names[count1]);}
	}

	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("\nMemory Card slot : \n");                                                            //INPUT memory card slot                      
	printf("1: Yes\n");
	printf("2: No\n");
	printf("3: SKIP\n");	
	printf("Input Selected Option: ");
	scanf("%d",&input7a);
	
	while((input7a<1)||(input7a>3)){
		printf("Error! Please Input Again: ");
		scanf("%d",&input7a);
	}
	if (input7a==1){
		for (count1=0;count1<50;count1++){                                        
		if (strcmp((mslot[count1]),y)==0){
			strcpy(res7[count1], names[count1]);
		}
		}
	}
	if (input7a==2){
		for (count1=0;count1<50;count1++){                                        
		if (strcmp((mslot[count1]),n)==0){
			strcpy(res7[count1], names[count1]);
		}
		}
	}
	if (input7a==3){
	 	for(count1=0;count1<50;count1++){
	    	strcpy(res7[count1], names[count1]);}
	}	
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("\nDual Sim card slot : \n");                                                          //INPUT Dual sim card slot                             
	printf("1: Yes\n");
	printf("2: No\n");
	printf("3: SKIP\n");	
	printf("Input Selected Option: ");
	scanf("%d",&input8a);
	
	while((input8a<1)||(input8a>3)){
		printf("Error! Please Input Again: ");
		scanf("%d",&input8a);
	}
	if (input8a==1){
		for (count1=0;count1<50;count1++){                                        
		if (strcmp((dualsim[count1]),y)==0){
			strcpy(res8[count1], names[count1]);
		}
		}
	}
	if (input8a==2){
		for (count1=0;count1<50;count1++){                                        
		if (strcmp((dualsim[count1]),n)==0){
			strcpy(res8[count1], names[count1]);
		}
		}
	}
	if (input8a==3){
	 	for(count1=0;count1<50;count1++){
	    	strcpy(res8[count1], names[count1]);}
	}
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("\nBand Type : \n");                                                                   //INPUT Band type                 
	printf("1: 3G\n");
	printf("2: 4G\n");
	printf("3: SKIP\n");	
	printf("Input Selected Option: ");
	scanf("%d",&input9a);
	
	while((input9a<1)||(input9a>3)){
		printf("Error! Please Input Again: ");
		scanf("%d",&input9a);
	}
	if (input9a==1){
		for (count1=0;count1<50;count1++){                                        
		if (strcmp((data[count1]),type1)==0){
			strcpy(res9[count1], names[count1]);
		}
		}
	}
	if (input9a==2){
		for (count1=0;count1<50;count1++){                                        
		if (strcmp((data[count1]),type2)==0){
			strcpy(res9[count1], names[count1]);
		}
		}
	}
	if (input9a==3){
	 	for(count1=0;count1<50;count1++){
	    	strcpy(res9[count1], names[count1]);}
	}
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("\nFast Charging : \n");                                                          //INPUT Fast charging                          
	printf("1: Yes\n");
	printf("2: No\n");
	printf("3: SKIP\n");	
	printf("Input Selected Option: ");
	scanf("%d",&input10a);
	
	while((input10a<1)||(input10a>3)){
		printf("Error! Please Input Again: ");
		scanf("%d",&input10a);
	}
	if (input10a==1){
		for (count1=0;count1<50;count1++){                                        
		if (strcmp((fcharge[count1]),y)==0){
			strcpy(res10[count1], names[count1]);
		}
		}
	}
	if (input10a==2){
		for (count1=0;count1<50;count1++){                                        
		if (strcmp((fcharge[count1]),n)==0){
			strcpy(res10[count1], names[count1]);
		}
		}
	}
	if (input10a==3){
	 	for(count1=0;count1<50;count1++){
	    	strcpy(res10[count1], names[count1]);}
	}
	

	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("\nFingerprint : \n");                                                                 //INPUT fingerprint            
	printf("1: Yes\n");
	printf("2: No\n");
	printf("3: SKIP\n");	
	printf("Input Selected Option: ");
	scanf("%d",&input11a);
	
	while((input11a<1)||(input11a>3)){
		printf("Error! Please Input Again: ");
		scanf("%d",&input11a);
	}
	if (input11a==1){
		for (count1=0;count1<50;count1++){                                        
		if (strcmp((fingerprint[count1]),y)==0){
			strcpy(res11[count1], names[count1]);
		}
		}
	}
	if (input11a==2){
		for (count1=0;count1<50;count1++){                                        
		if (strcmp((fingerprint[count1]),n)==0){
			strcpy(res11[count1], names[count1]);
		}
		}
	}
	if (input11a==3){
	 	for(count1=0;count1<50;count1++){
	    	strcpy(res11[count1], names[count1]);}
	}
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("\nNumber of Cameras(front and back) : \n");                                                                       //INPUT Number of cameras
	printf("1: 2\n");
	printf("2: 3\n");
	printf("3: 4\n");
	printf("4: 5\n");
	printf("5: 6\n");
	printf("6: SKIP\n");
	printf("Input Selected Option: ");
	scanf("%d",&input12a);
	while((input12a<1)||(input12a>6)){
		printf("Error! Please Input Again: ");
		scanf("%d",&input12a);
	}
	if (input12a==1){
		for (count1=0;count1<50;count1++){                                        
		if (ncamera[count1]==2){
			strcpy(res12[count1], names[count1]);
		}
		}		
	}
	if (input12a==2){
		for (count1=0;count1<50;count1++){                                        
		if (ncamera[count1]==3){
			strcpy(res12[count1], names[count1]);
		}
		}		
	}
	if (input12a==3){
		for (count1=0;count1<50;count1++){                                        
		if (ncamera[count1]==4){
			strcpy(res12[count1], names[count1]);
		}
		}
	}
	if (input12a==4){
		for (count1=0;count1<50;count1++){                                        
		if (ncamera[count1]==5){
			strcpy(res12[count1], names[count1]);
		}
		}
	}
	if (input12a==5){
		for (count1=0;count1<50;count1++){                                        
		if (ncamera[count1]==6){
			strcpy(res12[count1], names[count1]);
		}
		}
	}
	if (input12a==6){
	 	for(count1=0;count1<50;count1++){
	    	strcpy(res12[count1], names[count1]);}
	}
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("\nFront Camera :\n");                                                                       //INPUT Front camera
	printf("1: 5 MP\n");
	printf("2: 7 MP\n");
	printf("3: 8 MP\n");
	printf("4: 10 MP\n");
	printf("5: 12 MP\n");
	printf("6: 16 MP\n");
	printf("7: 20 MP\n");
	printf("8: 24 MP\n");
	printf("9: 32 MP\n");
	printf("10: 44 MP\n");
	printf("11: 48 MP\n");
	printf("12: SKIP\n");
	printf("Input Selected Option: ");
	scanf("%d",&input13a);
	while((input13a<1)||(input13a>12)){
		printf("Error! Please Input Again: ");
		scanf("%d",&input13a);
	}
	if (input13a==1){
		for (count1=0;count1<50;count1++){                                        
		if (fcamera[count1]==5){
			strcpy(res13[count1], names[count1]);
		}
		}		
	}
		if (input13a==2){
		for (count1=0;count1<50;count1++){                                        
		if (fcamera[count1]==7){
			strcpy(res13[count1], names[count1]);
		}
		}		
	}
		if (input13a==3){
		for (count1=0;count1<50;count1++){                                        
		if (fcamera[count1]==8){
			strcpy(res13[count1], names[count1]);
		}
		}		
	}
		if (input13a==4){
		for (count1=0;count1<50;count1++){                                        
		if (fcamera[count1]==10){
			strcpy(res13[count1], names[count1]);
		}
		}		
	}
		if (input13a==5){
		for (count1=0;count1<50;count1++){                                        
		if (fcamera[count1]==12){
			strcpy(res13[count1], names[count1]);
		}
		}		
	}
		if (input13a==6){
		for (count1=0;count1<50;count1++){                                        
		if (fcamera[count1]==16){
			strcpy(res13[count1], names[count1]);
		}
		}		
	}
		if (input13a==7){
		for (count1=0;count1<50;count1++){                                        
		if (fcamera[count1]==20){
			strcpy(res13[count1], names[count1]);
		}
		}		
	}
		if (input13a==8){
		for (count1=0;count1<50;count1++){                                        
		if (fcamera[count1]==24){
			strcpy(res13[count1], names[count1]);
		}
		}		
	}
		if (input13a==9){
		for (count1=0;count1<50;count1++){                                        
		if (fcamera[count1]==32){
			strcpy(res13[count1], names[count1]);
		}
		}		
	}
		if (input13a==10){
		for (count1=0;count1<50;count1++){                                        
		if (fcamera[count1]==44){
			strcpy(res13[count1], names[count1]);
		}
		}		
	}
		if (input13a==11){
		for (count1=0;count1<50;count1++){                                        
		if (fcamera[count1]==48){
			strcpy(res13[count1], names[count1]);
		}
		}		
	}

	if (input13a==12){
	 	for(count1=0;count1<50;count1++){
	    	strcpy(res13[count1], names[count1]);}
	}
	
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("\nAudio Jack : \n");                                                                        //INPUT Audio jack                                    
	printf("1: Yes\n");
	printf("2: No\n");
	printf("3: SKIP\n");	
	printf("Input Selected Option: ");
	scanf("%d",&input14a);
	
	while((input14a<1)||(input14a>3)){
		printf("Error! Please Input Again: ");
		scanf("%d",&input14a);
	}
	if (input14a==1){
		for (count1=0;count1<50;count1++){                                        
		if (strcmp((audioj[count1]),y)==0){
			strcpy(res14[count1], names[count1]);
		}
		}
	}
	if (input14a==2){
		for (count1=0;count1<50;count1++){                                        
		if (strcmp((audioj[count1]),n)==0){
			strcpy(res14[count1], names[count1]);
		}
		}
	}
	if (input14a==3){
	 	for(count1=0;count1<50;count1++){
	    	strcpy(res14[count1], names[count1]);}
	}
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("\nOS Platform : \n");                                                          //INPUT OS platform                           
	printf("1: Android\n");
	printf("2: Ios\n");
	printf("3: SKIP\n");	
	printf("Input Selected Option: ");
	scanf("%d",&input15a);
	
	while((input15a<1)||(input15a>3)){
		printf("Error! Please Input Again: ");
		scanf("%d",&input15a);
	}
	if (input15a==1){
		for (count1=0;count1<50;count1++){                                        
		if (strcmp((OS[count1]),andr)==0){
			strcpy(res15[count1], names[count1]);
		}
		}
	}
	if (input15a==2){
		for (count1=0;count1<50;count1++){                                        
		if (strcmp((OS[count1]),ios)==0){
			strcpy(res15[count1], names[count1]);
		}
		}
	}
	if (input15a==3){
	 	for(count1=0;count1<50;count1++){
	    	strcpy(res15[count1], names[count1]);}
	}
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("\nProcessor : \n");                                                          //INPUT Processor                            
	printf("1: < 2.0 Ghz\n");
	printf("2: 2.0 to 2.5 GHz\n");
	printf("3: 2.5 to 3 GHz\n");
	printf("4: SKIP\n");
	printf("Input Selected Option: ");
	scanf("%d",&input16a);
	
	while((input16a<1)||(input16a>4)){
		printf("Error! Please Input Again: ");
		scanf("%d",&input16a);
	}
	if (input16a==1){
		for (count1=0;count1<50;count1++){                                        
		if (processor[count1]<2.0){
			strcpy(res16[count1], names[count1]);
		}
		}
	}
	if (input16a==2){
		for (count1=0;count1<50;count1++){                                        
		if ((processor[count1]>=2.0)&&(processor[count1]<=2.5)){
			strcpy(res16[count1], names[count1]);
		}
		}
	}
	if (input16a==3){
		for (count1=0;count1<50;count1++){                                        
		if ((processor[count1]>2.5)&&(processor[count1]<3.0)){
			strcpy(res16[count1], names[count1]);
		}
		}
	}
	if (input16a==4){
	 	for(count1=0;count1<50;count1++){
	    	strcpy(res16[count1], names[count1]);}
	}
	

	printf("------------------------------------------------------------------------------------------------------------------------\n");							
	printf("\nYour best Option/s (if available) is/are: \n\n");
for (count1=0;count1<50;count1++){
		if (((strcmp(res1[count1],res2[count1]))==0)&&((strcmp(res1[count1],res3[count1]))==0)&&((strcmp(res1[count1],res4[count1]))==0)&&((strcmp(res1[count1],res5[count1]))==0)&&((strcmp(res1[count1],res6[count1]))==0)&&((strcmp(res1[count1],res7[count1]))==0)&&((strcmp(res1[count1],res8[count1]))==0)&&((strcmp(res1[count1],res9[count1]))==0)&&((strcmp(res1[count1],res10[count1]))==0)&&((strcmp(res1[count1],res11[count1]))==0)&&((strcmp(res1[count1],res12[count1]))==0)&&((strcmp(res1[count1],res13[count1]))==0)&&((strcmp(res1[count1],res14[count1]))==0)&&((strcmp(res1[count1],res15[count1]))==0)&&((strcmp(res1[count1],res16[count1]))==0)&&((strcmp(res1[count1],names[count1]))==0)){                  //This compares resultant array of each spec,e.g=ROM,Prices & Ram. It only prints the product name which is common in all three resultant array;e.g=Qmobile Noir E8 is 30,000PKR,has 3GB Ram & 64GB ROM. Selecting the valid options will finally print the name Qmobile Noir E8
			puts(res1[count1]);
		flag=1;}
	}
	if(flag!=1)
	printf("There is no phone available right now according to your choice of specifications\nThank You!!\n");
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("\nWould you like to compare any two smartphones? Y/N\n");
	scanf(" %c",&comparison);
	if ((comparison=='Y')||(comparison=='y')){
		printf("Please Select The Product From The Given List You Want To Compare Your Selected Phone With (Make Sure You Only Select The Serial Number Of Your Choosen Product!):\n");
		for (count1=0;count1<50;count1++){
			i++;
			printf("%d: ",i);
			puts(names[count1]);
		}
    	printf("------------------------------------------------------------------------------------------------------------------------\n");
		printf("Phone 1: ");
		scanf("%d",&phone1);
		printf("Phone 2: ");
		scanf("%d",&phone2);
		printf("------------------------------------------------------------------------------------------------------------------------\n");
		phone1--;                                                                                          // decrement to match array addresses
		phone2--;
		
		//Comparison of Price
		if (prices[phone1]>prices[phone2]){                                                                //Comparison of prices of two mobiles
			printf("*)The price of %s is higher than the price of %s\n",names[phone1],names[phone2]);
		}
		
		if (prices[phone1]<prices[phone2]){
			printf("*)The price of %s is higher than the price of %s\n",names[phone2],names[phone1]);
		}
		if (prices[phone1]==prices[phone2]){
			printf("*)The price of %s is same as the price of %s\n",names[phone1],names[phone2]);;
		}
		
		//Comparison of Ram
		if(RAM[phone1]>RAM[phone2]){
			printf("*)%s has higher RAM than %s\n",names[phone1],names[phone2]);
		}	
		if(RAM[phone1]<RAM[phone2]){
			printf("*)%s has higher RAM than %s\n",names[phone2],names[phone1]);
		}
		if(RAM[phone1]==RAM[phone2]){
			printf("*)%s has same RAM as of %s\n",names[phone1],names[phone2]);
		}
		
		//Comparison of Rom
		if(ROM[phone1]>ROM[phone2]){
			printf("*)%s has higher ROM than %s\n",names[phone1],names[phone2]);
		}	
		if(ROM[phone1]<ROM[phone2]){
			printf("*)%s has higher ROM than %s\n",names[phone2],names[phone1]);
		}
		if(ROM[phone1]==ROM[phone2]){
			printf("*)%s has same ROM as of %s\n",names[phone1],names[phone2]);
		}
		
		//Comparison of Camera
		if(camera[phone1]>camera[phone2]){
			printf("*)%s's camera has higher mega pixels than the camera of %s\n",names[phone1],names[phone2]);
		}	
		if(camera[phone1]<camera[phone2]){
			printf("*)%s's camera has higher mega pixels than the camera of %s\n",names[phone2],names[phone1]);
		}
		if(camera[phone1]==camera[phone2]){
			printf("*)%s's camera has same mega pixels as of %s\n",names[phone1],names[phone2]);
		}
		
		//Comparison of Screen size
		if(screen[phone1]>screen[phone2]){
			printf("*)%s's screen is larger than the screen of %s\n",names[phone1],names[phone2]);
		}	
		if(screen[phone1]<screen[phone2]){
			printf("*)%s's screen is larger than the screen of %s\n",names[phone2],names[phone1]);
		}
		if(screen[phone1]==screen[phone2]){
			printf("*)%s's screen is same as of %s\n",names[phone1],names[phone2]);
		}
		
		//Comparison of battery
		if(battery[phone1]>battery[phone2]){
			printf("*)%s's battery is larger than the battery of %s\n",names[phone1],names[phone2]);
		}	
		if(battery[phone1]<battery[phone2]){
			printf("*)%s's battery is larger than the battery of %s\n",names[phone2],names[phone1]);
		}
		if(battery[phone1]==battery[phone2]){
			printf("*)%s's battery is same as of %s\n",names[phone1],names[phone2]);
		}
		
		//Comparison of number of camera
		if(ncamera[phone1]>ncamera[phone2]){
			printf("*)%s has more number of cameras than %s\n",names[phone1],names[phone2]);
		}	
		if(ncamera[phone1]<ncamera[phone2]){
			printf("*)%s has more number of cameras than %s\n",names[phone2],names[phone1]);
		}
		if(ncamera[phone1]==ncamera[phone2]){
			printf("*)%s has same number of cameras as %s\n",names[phone1],names[phone2]);
		}
		
		//Comparison of Front Camera
		if(fcamera[phone1]>fcamera[phone2]){
			printf("*)%s's front camera has higher mega pixels than the camera of %s\n",names[phone1],names[phone2]);
		}	
		if(fcamera[phone1]<fcamera[phone2]){
			printf("*)%s's front camera has higher mega pixels than the camera of %s\n",names[phone2],names[phone1]);
		}
		if(fcamera[phone1]==fcamera[phone2]){
			printf("*)%s's front camera has same mega pixels as of %s\n",names[phone1],names[phone2]);
		}
		
		//Comparison of Memory card slot
		
		if((strcmp(mslot[phone1],y)==0)&&(strcmp(mslot[phone2],n)==0)){
			printf("*)%s has memory card slot while %s don't have a memory card slot\n",names[phone1],names[phone2]);
		}	
		if((strcmp(mslot[phone1],n)==0)&&(strcmp(mslot[phone2],y)==0)){
			printf("*)%s has memory card slot while %s don't have a memory card slot\n",names[phone2],names[phone1]);
		}
		if((strcmp(mslot[phone1],y)==0)&&(strcmp(mslot[phone2],y)==0)){
			printf("*)%s and %s both have a memory card slot\n",names[phone1],names[phone2]);
		}
		if((strcmp(mslot[phone1],n)==0)&&(strcmp(mslot[phone2],n)==0)){
			printf("*)%s and %s both don't have a memory card slot\n",names[phone1],names[phone2]);
		}
		
		//Comparison of Dual Sim slot
		if((strcmp(dualsim[phone1],y)==0)&&(strcmp(dualsim[phone2],n)==0)){
			printf("*)%s has dual sim slot while %s don't have a memory card slot\n",names[phone1],names[phone2]);
		}	
		if((strcmp(dualsim[phone1],n)==0)&&(strcmp(dualsim[phone2],y)==0)){
			printf("*)%s has dual sim slot while %s don't have a memory card slot\n",names[phone2],names[phone1]);
		}
		if((strcmp(dualsim[phone1],y)==0)&&(strcmp(dualsim[phone2],y)==0)){
			printf("*)%s and %s both have a dual sim slot\n",names[phone1],names[phone2]);
		}
		if((strcmp(dualsim[phone1],n)==0)&&(strcmp(dualsim[phone2],n)==0)){
			printf("*)%s and %s both don't have a dual sim slot\n",names[phone1],names[phone2]);
		}
		
		//Comparison of OS Platforms
		if((strcmp(OS[phone1],andr)==0)&&(strcmp(OS[phone2],ios)==0)){
			printf("*)%s has Android while %s has iOS\n",names[phone1],names[phone2]);
		}	
		if((strcmp(OS[phone1],ios)==0)&&(strcmp(OS[phone2],andr)==0)){
			printf("*)%s has iOS while %s has Android\n",names[phone1],names[phone2]);
		}
		if((strcmp(OS[phone1],andr)==0)&&(strcmp(OS[phone2],andr)==0)){
			printf("*)%s and %s both have Android\n",names[phone1],names[phone2]);
		}
		if((strcmp(OS[phone1],ios)==0)&&(strcmp(OS[phone2],ios)==0)){
			printf("*)%s and %s both have iOS\n",names[phone1],names[phone2]);
		}	
		
		//Comparison of fingerprint
		if((strcmp(fingerprint[phone1],y)==0)&&(strcmp(fingerprint[phone2],n)==0)){
			printf("*)%s has fingerprint sensor while %s don't have a fingerprint sensor\n",names[phone1],names[phone2]);
		}	
		if((strcmp(fingerprint[phone1],n)==0)&&(strcmp(fingerprint[phone2],y)==0)){
			printf("*)%s has fingerprint sensor while %s don't have a fingerprint sensor\n",names[phone2],names[phone1]);
		}
		if((strcmp(fingerprint[phone1],y)==0)&&(strcmp(fingerprint[phone2],y)==0)){
			printf("*)%s and %s both have a fingerprint sensor\n",names[phone1],names[phone2]);
		}
		if((strcmp(fingerprint[phone1],n)==0)&&(strcmp(fingerprint[phone2],n)==0)){
			printf("*)%s and %s both don't have a fingerprint sensor\n",names[phone1],names[phone2]);
		}
		
		//Comparison of audio jack
		if((strcmp(audioj[phone1],y)==0)&&(strcmp(audioj[phone2],n)==0)){
			printf("*)%s has audio jack while %s don't have a audio jack\n",names[phone1],names[phone2]);
		}	
		if((strcmp(audioj[phone1],n)==0)&&(strcmp(audioj[phone2],y)==0)){
			printf("*)%s has audio jack while %s don't have a audio jack\n",names[phone2],names[phone1]);
		}
		if((strcmp(audioj[phone1],y)==0)&&(strcmp(audioj[phone2],y)==0)){
			printf("*)%s and %s both have a audio jack\n",names[phone1],names[phone2]);
		}
		if((strcmp(audioj[phone1],n)==0)&&(strcmp(audioj[phone2],n)==0)){
			printf("*)%s and %s both don't have a audio jack\n",names[phone1],names[phone2]);
		}
		
		
		//Comparison of fast charging
		if((strcmp(fcharge[phone1],y)==0)&&(strcmp(fcharge[phone2],n)==0)){
			printf("*)%s has fast charging while %s don't have fast charging\n",names[phone1],names[phone2]);
		}	
		if((strcmp(fcharge[phone1],n)==0)&&(strcmp(fcharge[phone2],y)==0)){
			printf("*)%s has fast charging while %s don't have fast charging\n",names[phone2],names[phone1]);
		}
		if((strcmp(fcharge[phone1],y)==0)&&(strcmp(fcharge[phone2],y)==0)){
			printf("*)%s and %s both have fast charging\n",names[phone1],names[phone2]);
		}
		if((strcmp(fcharge[phone1],n)==0)&&(strcmp(fcharge[phone2],n)==0)){
			printf("*)%s and %s both don't have fast charging\n",names[phone1],names[phone2]);
		}
		
		
		//Comparison of Band type
		if((strcmp(data[phone1],type1)==0)&&(strcmp(data[phone2],type2)==0)){
			printf("*)%s has 3G while %s has 4G\n",names[phone1],names[phone2]);
		}	
		if((strcmp(data[phone1],type2)==0)&&(strcmp(data[phone2],type1)==0)){
			printf("*)%s has 4G while %s has 3G\n",names[phone1],names[phone2]);
		}
		if((strcmp(data[phone1],type1)==0)&&(strcmp(data[phone2],type1)==0)){
			printf("*)%s and %s both have 3G\n",names[phone1],names[phone2]);
		}
		if((strcmp(data[phone1],type2)==0)&&(strcmp(data[phone2],type2)==0)){
			printf("*)%s and %s both have 4G\n",names[phone1],names[phone2]);
		}
		
	
		
		//Comparison of processors
		if(processor[phone1]>processor[phone2]){
			printf("*)%s has better processor than %s\n",names[phone1],names[phone2]);
					}	
		if(processor[phone1]<processor[phone2]){
			printf("*)%s has better processor than %s\n",names[phone2],names[phone1]);
		}
		if(processor[phone1]==processor[phone2]){
			printf("*)%s and %s has same processors\n",names[phone1],names[phone2]);
		}
		
}
	
printf("\n---------------------------------Hope you liked our recommendation!!----------------------------------------------------\n");
printf("                                :*•.-----  Have a nice day  -----.•*:\n\n\n");
	return 0;
}
