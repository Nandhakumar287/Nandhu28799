void main()
{
int a,co=0;
printf("\nEnter Number:");
scasnf("\n%d",&a);
if(a>0)
{
while(a!=0)
{
 a=a/10;
 co++;
 }
 printf("\nNumber of digits:%d",co);
 }
 else
 printf("\nGiven number is zero");
 getch();
 }
