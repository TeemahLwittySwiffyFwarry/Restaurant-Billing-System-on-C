#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/* functions to generate bills  */
void generateBillHeader(char name[50],char date[30]){
    printf("\n\n");
        printf("\t   TEEMAH. Restaurant");
        printf("\n\t    --------------------");
        printf("\nDate:%s", date);
        printf("\nInvoice To: %s", name);
        printf("\n");
        printf("----------------------------");
        printf("Items\t\t");
        printf("Qty\t\t");
        printf("Total\t\t");
        printf("\n---------------------------");
        printf("\n\n");
}
void generateBillBody(char item[30],int qty, float price){
    printf("%s\t\t",item);
        printf("%d\t\t",qty);
        printf("%.2f\t\t", qty * price);
        printf("\n");
};

struct items{
    char item[20];
    float price;
    int qty; 
};

struct orders{
    char customer[50];
    char date[50];
    int numOfItems;
    struct items itm[50];
};

void generatedBillFooter(float total){
    printf("\n");
    float dis = 0.1*total;
    float netTotal=total-dis;
    float cgst=0.09*netTotal,grandTotal=netTotal +2*cgst;
    printf("\n---------------------------\n");
    printf("Sub Total\t\t\t%.2f",total);
    printf("\nDiscount @10%s\t\t\t%.2f","%",dis);
    printf("\n\t\t\t------");
    printf("\nNet Total @10%s\t\t\t%.2f",netTotal);
    printf("\nCGST @9%s\t\t\t%.2f","%",cgst);
    printf("\nSGST @9%s\t\t\t%.2f","%",cgst);
    printf("\n-----------------------------");
    printf("\nGrand Total\t\t\t%.2f", grandTotal);
    printf("\n-----------------------------\n");
}
 int main(){
    
    int opt, n;
    struct orders ord;
    /*This is my dashboard*/
    printf("\t=========TEEMAH RESTAURANT======");
    printf("\n1.Generate Invoice");
    printf("\n2.Show all invoices");
    printf("\n3.Search Invoice");
    printf("\n4.Exit");

    printf("\n\nSelect the operation you wish to carry out ");
    scanf("%d", &opt);
    fgetc(stdin);
    switch(opt){
        case 1:
        printf("\nPlease, enter the name of the customer");
        fgets(ord.customer,50,stdin);
        ord.customer[strlen(ord.customer)-1] = 0;
        strcpy(ord.date,__DATE__);
        printf("\nPlease enter the number of items:\t  ");
        scanf("%d",&n);

        for(int i=0;i<n;i++){
            fgetc(stdin);
            printf("\n\n");
            printf("Please enter the item %d",i+1);
            fgets(ord.itm[i].item,20,stdin);
            ord.itm[i].item[strlen(ord.itm[i].item)-1]=0;
            printf("\nPlease enter the quantity:\t");
            scanf("%d",& ord.itm[i].qty);
            printf("\nPlease enter the unit price:\t");
            scanf("\%f",&ord.itm[i].price);
            }
    }
 
    printf("\n\n");

    return 0;
 }
