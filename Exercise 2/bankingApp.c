#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>


void showBanks();
int  getBankChoice();
void showBankOperations(int);
int getAccountChoice();
void showDetails();


char banks[7][25] = {"HDFC", "Canara Bank", "State Bank of India", "Indian Bank", "IOB", "Axis Bank", "Kotak Mahindra Bank"};
char accounts[3][20] = {"Savings account", "Current account", "Demat account"};
                  
char hdfcSavings[5][100] =  {"Interest Rate : 2.70% p.a ","The facility of transfer of accounts through Internet Banking channel","Monthly Average Balance: NIL", "Nomination facility is Available", "No limit on Maximum balance"};
char canaraSavings[5][100] = {"Interest Rate : 5.80% p.a ","The facility of transfer of accounts through Internet Banking channel","Monthly Average Balance: NIL", "Nomination facility is Available", "No limit on Maximum balance"};
char sbiSavings[5][100] = {"Interest Rate : 1.90% p.a ","The facility of transfer of accounts through Internet Banking channel","Monthly Average Balance: NIL", "Nomination facility is Available", "No limit on Maximum balance"};
char indianSavings[5][100] = {"Interest Rate : 4.30% p.a ","The facility of transfer of accounts through Internet Banking channel","Monthly Average Balance: NIL", "Nomination facility is Available", "No limit on Maximum balance"};
char iobSavings[5][100] = {"Interest Rate : 2.50% p.a ","The facility of transfer of accounts through Internet Banking channel","Monthly Average Balance: NIL", "Nomination facility is Available", "No limit on Maximum balance"};
char axisSavings[5][100] = {"Interest Rate : 10.70% p.a ","The facility{ of transfer of accounts through Internet Banking channel","Monthly Average Balance: NIL", "Nomination facility is Available", "No limit on Maximum balance"};
char kotakSavings[5][100] = {"Interest Rate : 1.90% p.a ","The facility of transfer of accounts through Internet Banking channel","Monthly Average Balance: NIL", "Nomination facility is Available", "No limit on Maximum balance"};


char hdfcCurrent[5][100] = {"Interest Rate : 9.70% p.a ","Free cash deposit upto Rs. 25000/ -per day","Free ATM card during first year","Free Transfer of account from one branch to another","First 50 cheque leaves will be free"};
char canaraCurrent[5][100] = {"Interest Rate : 7.70% p.a ","Free cash deposit upto Rs. 20000/ -per day","Free ATM card during first year","Free Transfer of account from one branch to another","First 50 cheque leaves will be free"};
char sbiCurrent[5][100] = {"Interest Rate : 3.80% p.a ","Free cash deposit upto Rs. 35000/ -per day","Free ATM card during first year","Free Transfer of account from one branch to another","First 50 cheque leaves will be free"};
char indianCurrent[5][100] = {"Interest Rate : 1.50% p.a ","Free cash deposit upto Rs. 30000/ -per day","Free ATM card during first year","Free Transfer of account from one branch to another","First 50 cheque leaves will be free"};
char iobCurrent[5][100] = {"Interest Rate : 10.70% p.a ","Free cash deposit upto Rs. 45000/ -per day","Free ATM card during first year","Free Transfer of account from one branch to another","First 50 cheque leaves will be free"};
char axisCurrent[5][100] = {"Interest Rate : 8.60% p.a ","Free cash deposit upto Rs. 50000/ -per day","Free ATM card during first year","Free Transfer of account from one branch to another","First 50 cheque leaves will be free"};
char kotakCurrent[5][100] = {"Interest Rate : 5.70% p.a ","Free cash deposit upto Rs. 75000/ -per day","Free ATM card during first year","Free Transfer of account from one branch to another","First 50 cheque leaves will be free"};

char hdfcDemat[5][100] = {"Zero Account Opening Charges", "Zero Paperwork", "Low Brokerage Plans", "Equity delivery brokerage upto 10 paisa", "Invest in derivatives at Rs.20 per trade"};
char canaraDemat[5][100] = {"Zero Account Opening Charges", "Zero Paperwork", "Low Brokerage Plans", "Equity delivery brokerage upto 10 paisa", "Invest in derivatives at Rs.20 per trade"};
char sbiDemat[5][100] = {"Zero Account Opening Charges", "Zero Paperwork", "Low Brokerage Plans", "Equity delivery brokerage upto 10 paisa", "Invest in derivatives at Rs.20 per trade"};
char indianDemat[5][100] = {"Zero Account Opening Charges", "Zero Paperwork", "Low Brokerage Plans", "Equity delivery brokerage upto 10 paisa", "Invest in derivatives at Rs.20 per trade"};
char iobDemat[5][100] = {"Zero Account Opening Charges", "Zero Paperwork", "Low Brokerage Plans", "Equity delivery brokerage upto 10 paisa", "Invest in derivatives at Rs.20 per trade"};
char axisDemat[5][100] = {"Zero Account Opening Charges", "Zero Paperwork", "Low Brokerage Plans", "Equity delivery brokerage upto 10 paisa", "Invest in derivatives at Rs.20 per trade"};
char kotakDemat[5][100] = {"Zero Account Opening Charges", "Zero Paperwork", "Low Brokerage Plans", "Equity delivery brokerage upto 10 paisa", "Invest in derivatives at Rs.20 per trade"};


int main()
{
    printf("\n                      ---------------------- Welcome to 24/7 Banking Service ----------------------\n\n");
    
    char name[100];
    printf("Enter your name : ");
    scanf("%[^\n]",name);
    
    printf("\n****************************************************************************************\n");
    printf("                                       Hi, %s\n",name);
    printf("****************************************************************************************\n\n");
    
    int reply;
    do{
        showBanks();
        int bankChoice = getBankChoice();
        showBankOperations(bankChoice);
        int accountsChoice = getAccountChoice();
        
        printf("\n The facilites provided by %s in %s are : \n\n",banks[bankChoice-1], accounts[accountsChoice-1]);
        if(accountsChoice == 1){
            
            if(bankChoice == 1){
                showDetails(hdfcSavings);
            }else if(bankChoice == 2){
                showDetails(canaraSavings);
            }else if(bankChoice == 3){
                showDetails(sbiSavings);
            }else if(bankChoice == 4){
                showDetails(indianSavings);
            }else if(bankChoice == 5){
                showDetails(iobSavings);
            }else if(bankChoice == 6){
                showDetails(axisSavings);
            }else if(bankChoice == 7){
                showDetails(kotakSavings);
            }
            

        }else if(accountsChoice == 2){

           if(bankChoice == 1){
                showDetails(hdfcCurrent);
            }else if(bankChoice == 2){
                showDetails(canaraCurrent);
            }else if(bankChoice == 3){
                showDetails(sbiCurrent);
            }else if(bankChoice == 4){
                showDetails(indianCurrent);
            }else if(bankChoice == 5){
                showDetails(iobCurrent);
            }else if(bankChoice == 6){
                showDetails(axisCurrent);
            }else if(bankChoice == 7){
                showDetails(kotakCurrent);
            }

        }else if(accountsChoice == 3){
            
            if(bankChoice == 1){
                showDetails(hdfcDemat);
            }else if(bankChoice == 2){
                showDetails(canaraDemat);
            }else if(bankChoice == 3){
                showDetails(sbiDemat);
            }else if(bankChoice == 4){
                showDetails(indianDemat);
            }else if(bankChoice == 5){
                showDetails(iobDemat);
            }else if(bankChoice == 6){
                showDetails(axisDemat);
            }else if(bankChoice == 7){
                showDetails(kotakDemat);
            }

        }
        
       
        printf("\n\nDo you want to continue? [1] Yes [0] No :");
        scanf("%d",&reply);
        
        if(reply == 0){
            printf("\n                      ----------------------Thank you, Visit again----------------------\n");
        }else if(reply == 1){
            printf("\n                                               Loading...\n");
            sleep(3);
        }
    }while(reply != 0);
    
    return 0;
}

void showBanks(){
    printf("\n The list of banks available for available for service :\n\n");
    for(int i=0; i<7; i++){
        printf("%d. %s\n",i+1, banks[i]);
    }
    printf("\n                      ------------------------------------------------\n");
    printf("                      |   Press 1 for HDFC, 2 for Canara Bank ...    |\n");
    printf("                      ------------------------------------------------\n");
}

int getBankChoice(){
    int choice;
    do{
        printf("\nSelect the bank from the list of choices displayed : ");
        scanf("%d", &choice);
        switch(choice){
            case 1: printf("\n                                       You have selected - %s\n\n",banks[0]);
                    break;
            case 2: printf("\n                                       You have selected - %s\n\n",banks[1]);
                    break;
            case 3: printf("\n                                       You have selected - %s\n\n",banks[2]);
                    break;
            case 4: printf("\n                                       You have selected - %s\n\n",banks[3]);
                    break;
            case 5: printf("\n                                       You have selected - %s\n\n",banks[4]);
                    break;
            case 6: printf("\n                                       You have selected - %s\n\n",banks[5]);
                    break;
            case 7: printf("\n                                       You have selected - %s\n\n",banks[6]);
                    break;
            default: printf("\n :( Wrong choice... Try again :(\n\n");
        }
        printf("****************************************************************************************\n");
    }while(choice >7 || choice<1);
    return choice;
}

void showBankOperations(int bankChoice){
    printf("\n The services available/account details in : %s \n\n",banks[bankChoice-1]);
    int j=0;
    while(j<3){
        printf("%d. %s\n",j+1, accounts[j]);
        j++;
    }
}

int getAccountChoice(){
    int accChoice;
    chooseAccountDetails:
    printf("\n****************************************************************************************\n");
    printf("\nSelect the account to get more details : ");
    scanf("%d", &accChoice);
    if(accChoice == 1){
        printf("\nYou have chosen %s\n\n",accounts[0]);
    }else if(accChoice == 2){
        printf("\nYou have chosen %s\n\n",accounts[1]);
    }else if(accChoice == 3){
        printf("\nYou have chosen %s\n\n",accounts[2]);
    }else{
        printf("\n:( Wrong choice... Try again :(\n");
        goto chooseAccountDetails;
    }
    return accChoice;
}

void showDetails(char details[5][100]){
    for(int i=0;i<5;i++){
        printf("%d.  %s\n",i+1,details[i]);
    }
}



