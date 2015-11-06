#include<stdio.h>
#include<string.h>

 int create_letter_distribution_diagram(char sentence[1000]);

int main()
{
    char sentence[1000];

    scanf("%[^\n]s", sentence);

    create_letter_distribution_diagram(sentence);

    return 0;
 
}

int  create_letter_distribution_diagram(char sentence[1000])
{ 

    int length = strlen(sentence);
   
    int letters[30];

    int count = 0;
    
    int ascii_letters[30];

      for( ;count < 26; count++) 
       {
        letters[count] = 0; 
       }
    
     
       for(count = 0; count < 26; count++)
         {
           ascii_letters[count] = count + 97;
         }


       for(length--; length >= 0; length--)
         {  
           
             int ascii_uppercase = 65;
             int ascii_lowercase = 97;

              for(; ascii_uppercase < 91 && ascii_lowercase < 123; ascii_uppercase++, ascii_lowercase++)
                {
                   if(sentence[length] == ascii_uppercase) 
                     {
                      count = ascii_uppercase - 65;
                      letters[count]++; 
                     }
         
                    if(sentence[length] == ascii_lowercase)
                     {
                      count = ascii_lowercase - 97;
                      letters[count]++; 
                     } 
      
                 }
       
         
          }
      

          
       for(count=0; count<26; count++)
        {
            int min = count;
            int helper; 
            int help_sort;
           for(helper = count+1; helper<26; helper++)
  
             if(letters[min] < letters[helper]) min = helper;
         

              help_sort = letters[min];
             letters[min] = letters[count];
             letters[count] = help_sort;

           
              help_sort = ascii_letters[min];
             ascii_letters[min] = ascii_letters[count];
             ascii_letters[count] = help_sort;
   
            
         }
    


        for(count=0; count<26; count++)
         {
                int helper; 
             for(helper = count+1; helper<26; helper++)
               
                if(letters[count] == letters[helper] && ascii_letters[count] > ascii_letters[helper]) 
                  {
                  int help_sort = ascii_letters[count];
                  ascii_letters[count] = ascii_letters[helper];
                  ascii_letters[helper] = help_sort;
                  }
             
         }

       

        
   
          for(count=0; count < 26; count++)
            {
             printf("%c %d\n",ascii_letters[count], letters[count]); 
            }           
 

          return 0;
       
      
}
