int main()
{
   bool ismale = true;
   bool istall = false;
   if(ismale && istall)
   {
       cout<<"this is male and tall";
   }
   else if(ismale && !istall)
   {
       cout<<"this is male but not tall";
   }
   else if(!ismale && istall)
   {
       cout<<"this is not male but is tall";
   }
   else
   {
       cout<<"this not male and not tall";
       
   }
    return 0;
    
}