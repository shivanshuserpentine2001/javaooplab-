
#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[25];
    int option;
};


int n=0,i=0,j,t=0;
char ch='c';
int a=0,b=0,c=0;


struct student s[100];


int main()
{
    printf("ENTER THE STUDENT DETAILS AND ELECTIVES FOR THE COURSES BELOW\n\n");

     while(ch=='c'){

            printf("Enter the name:\n");
            scanf("%s",s[t].name);
            printf("Enter the corresponding option\n1.JEE\n2.NEET\n3.ADVANCE\n");
            scanf("%d",&s[t].option);
            t++;
            printf("Enter 'c' to continue or press any key to leave\n");
            scanf("%s",&ch);
    }

    /************************/
    
    printf("***************************************************\n");
    printf("the students elected for the diff choices are listed below\n\n\n");


        printf("The students registered for 1.JEE are\n\n");

        for(j=0;j<t;j++){
            if(s[j].option==1){
                printf("%s\n",s[j].name);
            }

        }

        printf("The students registered for 2.NEET are\n\n");

           for(j=0;j<t;j++){
            if(s[j].option==2){
                printf("%s\n",s[j].name);
            }

        }

        printf("The students registered for 3.ADVANCE are\n\n");

           for(j=0;j<t;j++){
            if(s[j].option==3){
                printf("%s\n",s[j].name);
            }

        }

    /*******COUNTING*******/
    for(j=0;j<t;j++){
        if(s[j].option==1){
            a++;
        }
        else if(s[j].option==2){
            b++;
        }
        else if(s[j].option==3){
            c++;
        }
    }



    /*******EACH ELECTIVE*****/

    printf("the total no of students in each Elective are:\n\n");
    printf("1.JEE %d\n",a);
    printf("2.NEET %d\n",b);
    printf("3.ADVANCE %d\n",c);



    /*****ALL ARE ABOVE 30 ******/
    if(a>=3&&b>=3&&c>=3){
        
        printf("*****************************************************\n\n");
        
        printf("The students registered for 1.JEE are\n");

        for(j=0;j<t;j++){
            if(s[j].option==1){
                printf("%s\n",s[j].name);
            }

        }
        printf("The students registered for 2.NEET are\n");

           for(j=0;j<t;j++){
            if(s[j].option==2){
                printf("%s\n",s[j].name);
            }

        }

        printf("The students registered for 3.ADVANCE are\n");

           for(j=0;j<t;j++){
            if(s[j].option==3){
                printf("%s\n",s[j].name);
            }

        }
    }
    /********************/


    if(a>=3&&b>=3&&c<3){
        printf("******************************************\n\n");
        
        printf("The students elected for the course 3.ADVANCE will not be floated due participants less than 30 so kindly please register ureself to the any of the other two courses\n");

      for(i=0;i<c;i++){
          printf("%s select any of the courses below\n1.JEE\n2.NEET\n",s[i].name);
          scanf("%d",&s[i].option);
      }

      int a1=0,b1=0;
      for(i=0;i<t;i++){

          if(s[i].option==1){

              a1++;
          }
          else if(s[i].option==2){
              b1++;
          }
      }

    printf("the total no of students in each Elective are:\n");
    printf("1.JEE %d\n",a1);
    printf("2.NEET %d\n",b1);

    printf("Name of the students in each Elective are as follows:\n\n");
    printf("students elected JEE are :\n");
    for(i=0;i<a1;i++){
        printf("%s\n",s[i].name);
    }

    printf("students elected NEET are :\n");
    for(i=0;i<b1;i++){
        printf("%s\n",s[i].name);
    }


    }
    /****************/

     if(a>=3&&b<3&&c>=3){
         printf("******************************************\n\n");
         
        printf("The students elected for the course 2.NEET will not be floated due participants less than 30 so kindly please register ureself to the any of the other two courses\n\n");

      for(i=0;i<b;i++){
          printf("%s select any of the courses below\n1.JEE\n3.ADVANCE\n",s[i].name);
          scanf("%d",&s[i].option);
      }



      int a2=0,c2=0;
      for(i=0;i<t;i++){

          if(s[i].option==1){

              a2++;
          }
          else if(s[i].option==3){
              c2++;
          }
      }

    printf("the total no of students in each Elective are:\n\n");
    printf("1.JEE %d\n",a2);
    printf("2.ADVANCE %d\n",c2);

    printf("Name of the students in each Elective are as follows:\n\n");
    printf("students elected JEE are :\n\n");
    for(i=0;i<a2;i++){
        printf("%s\n",s[i].name);
    }

    printf("students elected ADVANCE are :\n\n");
    for(i=0;i<c2;i++){
        printf("%s\n",s[i].name);
    }

}

    /*****************/


     if(a<3&&b>=3&&c>=3){
         printf("******************************************\n\n");
         
        printf("The students elected for the course 1.JEE will not be floated due participants less than 30 so kindly please register ureself to the any of the other two courses\n\n");

      for(i=0;i<a;i++){
          printf("%s select any of the courses below\n2.NEET\n3.ADVANCE\n",s[i].name);
          scanf("%d",&s[i].option);
      }

       int b3=0,c3=0;
      for(i=0;i<t;i++){

          if(s[i].option==2){

              b3++;
          }
          else if(s[i].option==3){
              c3++;
          }
      }

    printf("the total no of students in each Elective are:\n\n");
    printf("1.NEET %d\n",b3);
    printf("2.ADVANCE %d\n",c3);

    printf("Name of the students in each Elective are as follows:\n\n");
    printf("students elected NEET are :\n");
    for(i=0;i<b3;i++){
        printf("%s\n",s[i].name);
    }

    printf("students elected ADVANCE are :\n\n");
    for(i=0;i<c3;i++){
        printf("%s\n",s[i].name);
    }

}
}
