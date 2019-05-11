#include<bits/stdc++.h>
using namespace std;
	int arr[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int table1[4][16];	
	int table2[4][16];
	int table3[4][16];
	int table4[4][16];
	int table5[4][16];
	int table6[4][16];
	int table7[4][16];
	int table8[4][16];
// swap function for changing the values
void swap (int *a, int *b) { 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}
// for finding the permutation of the array
int *randomize ( ){ 
	srand ( time(NULL) ); 
	for (int i = 15; i >= 0; i--) { 
		int j = rand() % (i+1);  
		swap(&arr[i], &arr[j]); 
	}
	return arr;
} 
// mutator for setting the arrray
void setArray(int *arr,int i,int j,int Value){
	if(Value>=0 && Value<16){
		*((arr+i*16) + j)=Value;	
	}
}
// Accessor for retrival of the array 
void getArray(int *arr){
	std::cout<<"\n\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<16;j++){
			std::cout<<*((arr+i*16) + j)<<"  ";
		}
		std::cout<<std::endl;
	}
}
// Faciliator function for Xoring the array values
int* xoringFun(int *arr, int xorValue){
		int i=0;
	while(i<16){		
		arr[i]=arr[i]^xorValue;
		//std::cout<<"arr[ "<<i<<"]"<<"="<<"arr[ "<<i<<"]"<<"^"<<xorValue<<" = "<<" arr["<<arr[i]<<" ]"<<" \n";
	    ++i;
	}
	std::cout<<"\n";
	//for(int i=0;i<16;i++)
	//std::cout<<arr[i]<<" ";
	std::cout<<"\n";
	                                      //for(int j=0;j<16;j++)	
                                         // std::cout<<arr[j]<<",";
	return arr;
}
// Taking the input from user if we do not want to feed automatic
void takeInput(){
	int userEntry[16];
	std::cout<<"Enter The 16 values of your choice between 0 to 15\n\n";
	for(int i=0;i<16;i++){
//  std::cin>>UserEntry;
		userEntry[i] = i;
	}
}
// taking the first table
void setFirstRow(int *table,int i,int *randomArray){
	for(int j=0 ; j<16 ; j++){
		*((table+i*16)+j) = randomArray[j];
	}
}	
// taking the first table into consideration
void firstTable(){
	int temp[16];
	int *randomArray = randomize();
	for(int i=0;i<16;i++){				// for maintaining the random array as it is
		temp[i] = randomArray[i];
	}
	std::cout<<"________The random value choosen for First Table is__________\n\n";
	for(int i=0;i<16;i++)
		std::cout<<randomArray[i]<<" ";
	std::cout<<"\n\n";
	setFirstRow((int*)table1,0,randomArray);
	for(int i=1 ; i<4 ; i++){
		int *xoredArray = xoringFun(randomArray,i);
		for(int j=0;j<16;j++){
			setArray((int*)table1,i,j,xoredArray[j]);
		}
		for(int i=0;i<16;i++){
		    randomArray[i] = temp[i];
     	}
	}
}
// taking the second table into consideration
void secondTable(){
		int temp[16];
		int *randomArray = randomize();
		for(int i=0;i<16;i++){				// for maintaining the random array as it is
			temp[i] = randomArray[i];
		}
	std::cout<<"________The random value choosen for second Table is__________- \n\n";
	for(int i=0;i<16;i++)
		std::cout<<randomArray[i]<<" ";
	std::cout<<"\n\n";
	setFirstRow((int*)table2,0,randomArray);
	for(int i=1 ; i<4 ; i++){
		int *xoredArray = xoringFun(randomArray,i);
		for(int j=0;j<16;j++){
			setArray((int*)table2,i,j,xoredArray[j]);
		}
		for(int i=0;i<16;i++){
		    randomArray[i] = temp[i];
     	}
	}
}
// taking third table material into consideration
void thirdTable(){
		int temp[16];
		int *randomArray = randomize();
		for(int i=0;i<16;i++){
			temp[i] = randomArray[i];
		}
	std::cout<<"________The random value choosen for Third Table is__________- \n\n";
	for(int i=0;i<16;i++)
		std::cout<<randomArray[i]<<" ";
	std::cout<<"\n\n";
	setFirstRow((int*)table3,0,randomArray);
	for(int i=1 ; i<4 ; i++){
		int *xoredArray = xoringFun(randomArray,i);
		for(int j=0;j<16;j++){
			setArray((int*)table3,i,j,xoredArray[j]);
		}
		for(int i=0;i<16;i++){
		    randomArray[i] = temp[i];
     	}
	}	
}
// taking fourth table material into consideration
void fourthTable(){
	int temp[16];
	int *randomArray = randomize();
	for(int i=0;i<16;i++){				// for maintaining the random array as it is
		temp[i] = randomArray[i];
	}
	std::cout<<"________The random value choosen for Fourth Table is__________- \n\n";
	for(int i=0;i<16;i++)
		std::cout<<randomArray[i]<<" ";
	std::cout<<"\n\n";
	setFirstRow((int*)table4,0,randomArray);
	for(int i=1 ; i<4 ; i++){
		int *xoredArray = xoringFun(randomArray,i);
		for(int j=0;j<16;j++){
			setArray((int*)table4,i,j,xoredArray[j]);
		}
		for(int i=0;i<16;i++){
		    randomArray[i] = temp[i];
     	}
	}	
}
// taking fifth table material into consideration
void fifthTable(){
	int temp[16];
	int *randomArray = randomize();
	for(int i=0;i<16;i++){				// for maintaining the random array as it is
		temp[i] = randomArray[i];
	}
	std::cout<<"________The random value choosen for Fifth Table is__________- \n\n";
	for(int i=0;i<16;i++)
		std::cout<<randomArray[i]<<" ";
	std::cout<<"\n\n";
	setFirstRow((int*)table5,0,randomArray);
	for(int i=1 ; i<4 ; i++){
		int *xoredArray = xoringFun(randomArray,i);
		for(int j=0;j<16;j++){
			setArray((int*)table5,i,j,xoredArray[j]);
		}
		for(int i=0;i<16;i++){
		    randomArray[i] = temp[i];
     	}
	}	
}
// taking sixth table material into consideration
void sixthTable(){
	int temp[16];
	int *randomArray = randomize();
	for(int i=0;i<16;i++){				// for maintaining the random array as it is
		temp[i] = randomArray[i];
	}
	std::cout<<"________The random value choosen for sixth Table is__________- \n\n";
	for(int i=0;i<16;i++)
		std::cout<<randomArray[i]<<" ";
	std::cout<<"\n\n";
	setFirstRow((int*)table6,0,randomArray);
	for(int i=1 ; i<4 ; i++){
		int *xoredArray = xoringFun(randomArray,i);
		for(int j=0;j<16;j++){
			setArray((int*)table6,i,j,xoredArray[j]);
		}
		for(int i=0;i<16;i++){
		    randomArray[i] = temp[i];
     	}
	}	
}
// Taking seventh table material into consideration
void seventhTable(){
	int temp[16];
	int *randomArray = randomize();
	for(int i=0;i<16;i++){				// for maintaining the random array as it is
		temp[i] = randomArray[i];
	}
	std::cout<<"________The random value choosen for seventh Table is__________- \n\n";
	for(int i=0;i<16;i++)
		std::cout<<randomArray[i]<<" ";
	std::cout<<"\n\n";
	setFirstRow((int*)table7,0,randomArray);
	for(int i=1 ; i<4 ; i++){
		int *xoredArray = xoringFun(randomArray,i);
		for(int j=0;j<16;j++){
			setArray((int*)table7,i,j,xoredArray[j]);
		}
		for(int i=0;i<16;i++){
		    randomArray[i] = temp[i];
     	}
	}	
}
// taking eighth table material into consideratation
void eighthTable(){
	int temp[16];
	int *randomArray = randomize();
	for(int i=0;i<16;i++){				// for maintaining the random array as it is
		temp[i] = randomArray[i];
	}
	std::cout<<"________The random value choosen for eighth Table is__________- \n\n";
	for(int i=0;i<16;i++)
		std::cout<<randomArray[i]<<" ";
	std::cout<<"\n\n";
	setFirstRow((int*)table8,0,randomArray);
	for(int i=1 ; i<4 ; i++){
		int *xoredArray = xoringFun(randomArray,i);
		for(int j=0;j<16;j++){
			setArray((int*)table8,i,j,xoredArray[j]);
		}
		for(int i=0;i<16;i++){
		    randomArray[i] = temp[i];
     	}
	}	
}
// Functions for displaying all the outputs
void displayAllBoxes(){
	std::cout<<"_______________________________________________ YOUR S BOX SUMMARY IS AS FOLLOW ____________________________________________________\n\n";
	std::cout<<"First_Box\n";
	getArray((int*)table1);
	std::cout<<"\n";
	std::cout<<"Second_Box\n";
	getArray((int*)table2);
	std::cout<<"\n";
	std::cout<<"Third_Box\n";
	getArray((int*)table3);
	std::cout<<"\n";
	std::cout<<"Fourth_Box\n";
	getArray((int*)table4);
	std::cout<<"\n";
	std::cout<<"Fifth_Box\n";
	getArray((int*)table5);
	std::cout<<"\n";
	std::cout<<"Sixth_Box\n";
	getArray((int*)table6);
	std::cout<<"\n";
	std::cout<<"Seventh_Box\n";
	getArray((int*)table7);
	std::cout<<"\n";
	std::cout<<"Eighth_Box\n";
	getArray((int*)table8);
	std::cout<<"\n";
	std::cout<<"\n\n\n__________________________________________________________THANK_YOU_Mam_______________________________________________________________\n\n";
}
// main() Function..................!
main(){
// making call to all the table seperatly
	takeInput();
	firstTable();
	secondTable();
	thirdTable();
	fourthTable();
	fifthTable();
	sixthTable();
	seventhTable();	
	eighthTable();
	displayAllBoxes();
}
