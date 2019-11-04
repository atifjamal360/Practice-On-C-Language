#include<stdio.h>
int main (){
	int num,one,tens,hund;
	printf("Enter A Number:");
	scanf ("%d" , &num);
	
	if(num>1000){
		printf("\nERROR\n");
		return 0;
	}
	
	if(num==1000){
		printf("M");
	}
	else if(num<1000){
		hund=(num/100)*100;
		tens=(num/10)%10*10;
		one=num%10;
	}
	
	printf("\nEquivalent roman number:\n");
	
	if(hund==100){
		printf("C");
	}else if(hund==200){
		printf("CC");
	}else if(hund==300){
		printf("CCC");
	}else if(hund==400){
		printf("CD");
	}else if(hund==500){
		printf("D");
	}else if(hund==600){
		printf("DC");
	}else if(hund==700){
		printf("DCC");
	}else if(hund==800){
		printf("DCCC");
	}else if(hund==900){
		printf("CM");
	}
	if(tens==10){
		printf("X");
	}else if(tens==20){
		printf("XX");
	}else if(tens==30){
		printf("XXX");
	}else if(tens==40){
		printf("XL");
	}else if(tens==50){
		printf("L");
	}else if(tens==60){
		printf("LX");
	}else if(tens==70){
		printf("LXX");
	}else if(tens==80){
		printf("LXXX");
	}else if(tens==90){
		printf("XC");
	}
	if(one==1){
		printf("I");
	}else if(one==2){
		printf("II");
	}else if(one==3){
		printf("III");
	}else if(one==4){
		printf("IV");
	}else if(one==5){
		printf("V");
	}else if(one==6){
		printf("VI");
	}else if(one==7){
		printf("VII");
	}else if(one==8){
		printf("VIII");
	}else if(one==9){
		printf("IX");
	}
}
	
