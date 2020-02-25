#include <stdio.h>
#include <stdlib.h>

//NEW ONE


void remove_red(){


    char P[2];
    scanf("%s",P);
    printf("%s\n",P);

    int colm,rows,max_num;
    scanf("%d %d %d",&colm,&rows,&max_num);
    printf("%d %d\n",colm,rows);
    printf("%d\n",max_num);

    //int counter = 0;
    for(int i=0;i<3*colm*rows;i++){

    if((i+1)%3==0&&!((i+1)%(3*colm)==0)){
            int first_if;
            scanf("%d",&first_if);
            printf("%d    ",first_if);

    }else if((i)%3==0){
           int red;
           scanf("%d",&red);
           printf("%d ",0);

    }else if((i+1)%(3*colm)==0){
          int third_if;
          scanf("%d",&third_if);
          printf("%d",third_if);
          if(!(i+1==3*colm*rows)){
            printf("\n");
          }
    }else{
          int fourth_if;
          scanf("%d",&fourth_if);
          printf("%d ",fourth_if);
        }
}

}


void convert_to_black_and_white(){



    char P[2];
    scanf("%s",P);
    printf("%s\n",P);

    int colm,rows,max_num;
    scanf("%d %d %d",&colm,&rows,&max_num);
    printf("%d %d\n",colm,rows);
    printf("%d\n",max_num);


    int R,B,G;
    for(int i=0;i<3*colm*rows;i++){

    if((i+1)%3==0&&!((i+1)%(3*colm)==0)){

            scanf("%d",&G);
            int avg= (R+B+G)/3;
            printf("%d %d %d    ",avg,avg,avg);

    }else if((i)%3==0){

           scanf("%d",&R);


    }else if((i+1)%(3*colm)==0){

          scanf("%d",&G);
          int avg = (R+B+G)/3;
          printf("%d %d %d",avg,avg,avg);
          if(!(i+1==3*colm*rows)){
            printf("\n");
          }
    }else{

          scanf("%d",&B);

    }

}

}


void instagram_square(){

    char P[2];
    scanf("%s",P);
    printf("%s\n",P);

    int colm,rows,max_num;
    scanf("%d %d %d",&colm,&rows,&max_num);
    if(colm>rows){
            printf("%d %d\n",rows,rows);
    }else if(rows>colm){
            printf("%d %d\n",colm,colm);

    }else{

            printf("%d %d\n",colm,colm);
    }
    printf("%d\n",max_num);


    if(rows>colm){

        for(int i=0;i<3*(colm)*(rows);i++){

            if((i+1)>3*(colm)*(colm)){

                //print nothing
                int useless;
                scanf("%d",&useless);


            }else if((i+1)%3==0&&!((i+1)%(3*(colm))==0)){
                int second_if;
                scanf("%d",&second_if);
                printf("%d    ",second_if);

            }else if((i+1)%(3*colm)==0){
                int third_if;
                scanf("%d",&third_if);
                printf("%d ",third_if);
            if(!(i+1==3*colm*colm)){
                printf("\n");
            }

            }else{
                int fourth_if;
                scanf("%d",&fourth_if);
                printf("%d ",fourth_if);
            }
    }


    }else if(colm>rows){

       int counter=0;
       for(int i=0;i<3*(rows)*(colm);i++){

        if(counter>=(3*rows)){

           if(counter==(3*rows)){
               if((i+1)!=3*rows*colm){
                    printf("\n");
               }
               i=i-1;
           }

           if((i+1)%(3*colm)==0){
                counter=0;
            }else{
               int no;
               scanf("%d",&no);
               counter++;

            }

        }else if((i+1)%3==0&&!((i+1)%(3*colm)==0)){
           int second_if;
           scanf("%d",&second_if);
           printf("%d    ",second_if);
           counter++;

        }else{
          int last;
          scanf("%d",&last);
          printf("%d ",last);
          counter++;
        }


       }

    }else{

        for(int i=0;i<3*colm*rows;i++){

        if((i+1)%3==0&&!((i+1)%(3*colm)==0)){
                int first_if;
                scanf("%d",&first_if);
                printf("%d    ",first_if);

        }else if((i)%3==0){
           int red;
           scanf("%d",&red);
           printf("%d ",red);

        }else if((i+1)%(3*colm)==0){
          int third_if;
          scanf("%d",&third_if);
          printf("%d",third_if);
          if(!(i+1==3*colm*rows)){
            printf("\n");
          }
        }else{
          int fourth_if;
          scanf("%d",&fourth_if);
          printf("%d ",fourth_if);
        }
}



    }



}
