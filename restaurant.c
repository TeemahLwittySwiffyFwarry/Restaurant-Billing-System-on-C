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
}
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
    return 0;

    /*This is my dashboard*/
    printf("\t=========TEEMAH RESTAURANT======");
    printf("\n1.Generate Invoice");
    printf("\n2.Show all invoices");
    printf("\n3.Search Invoice");
    printf("\n4.Exit");
 }
 
