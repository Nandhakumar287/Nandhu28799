void main()
{
int a;
   printf("\nEnter the yr:");
   scanf("\n%d",&a);
         if((a%4==0)&&(a%400==0)&&(a%100==0))
         printf("\nleap yr");
         else
         printf("\nnot leap yr");
 getch();
}
